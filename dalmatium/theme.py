"""This module contains the Theme class."""

import json
import operator as ope
import re
import sys
from collections.abc import Callable
from pathlib import Path
from typing import Any

from PySide6 import __version__
from PySide6.QtGui import QPalette

from dalmatium.__config__ import BASE_DIR
from dalmatium.assets.theme.palette.dark import DARK_PALETTE
from dalmatium.assets.theme.palette.light import LIGHT_PALETTE
from dalmatium.assets.theme.stylesheet.dark import DARK_STYLE_SHEET
from dalmatium.assets.theme.stylesheet.light import LIGHT_STYLE_SHEET

_OPERATORS: dict[str, Callable[[Any, Any], bool]] = {
    "==": ope.eq,
    "!=": ope.ne,
    ">=": ope.ge,
    "<=": ope.le,
    ">": ope.gt,
    "<": ope.lt,
}

THEME_DARK: str = "dark"
THEME_LIGHT: str = "light"
STYLESHEET: str = "stylesheet"
PALETTE: str = "palette"
_THEMES: dict[str, dict[str, QPalette | str]] = {
    THEME_DARK: {STYLESHEET: DARK_STYLE_SHEET, PALETTE: DARK_PALETTE},
    THEME_LIGHT: {STYLESHEET: LIGHT_STYLE_SHEET, PALETTE: LIGHT_PALETTE},
}

ERROR_INVALID_THEME = (
    'The argument [theme] can only be specified as "dark" or "light".'
)
ERROR_INVALID_QUALIFIER = (
    "Invalid character in qualifier. Available qualifiers {}"
)


class Theme:
    """A class that contains theme functions."""

    def multireplace(self, target: str, replacements: dict[str, str]) -> str:
        """Replace multiple substrings in a string.

        Args:
            target: The string to replace substrings in.
            replacements: A dictionary of substrings to replace.
        """
        if len(replacements) == 0:
            return target

        replacements_sorted = sorted(replacements, key=len, reverse=True)
        replacements_escaped = [re.escape(i) for i in replacements_sorted]
        pattern = re.compile("|".join(replacements_escaped))
        return pattern.sub(lambda match: replacements[match.group()], target)

    def _compare_v(self, v1: str, operator: str, v2: str) -> bool:
        """Compare two version strings.

        Args:
            v1: The first version string.
            operator: The operator to use for comparison.
            v2: The second version string.
        """
        v1_tuple, v2_tuple = (
            tuple(map(int, (v.split(".")))) for v in (v1, v2)
        )
        return _OPERATORS[operator](v1_tuple, v2_tuple)

    def _parse_env_patch(self, stylesheet: str) -> dict[str, str]:
        """Parse the environment patch in the stylesheet.

        Args:
            stylesheet: The stylesheet to parse.
        """
        qt_version = __version__ or "10.0.0"

        replacements: dict[str, str] = {}
        for match in re.finditer(r"\$env_patch\{[\s\S]*?\}", stylesheet):
            match_text = match.group()
            json_text = match_text.replace("$env_patch", "")
            env_property: dict[str, str] = json.loads(json_text)

            for operator in _OPERATORS:
                if operator in env_property["version"]:
                    version = env_property["version"].replace(operator, "")
                    replacements[match_text] = (
                        env_property["value"]
                        if self._compare_v(qt_version, operator, version)
                        else ""
                    )
                    break
            else:
                raise SyntaxError(ERROR_INVALID_QUALIFIER) from None
        return replacements

    def load_stylesheet(self, theme: str = "dark") -> str:
        """Load the stylesheet for the dark or light theme.

        Args:
            theme: The theme to load the stylesheet for.
        """
        try:
            style_sheet = _THEMES[theme]["stylesheet"]
        except KeyError:
            raise TypeError(ERROR_INVALID_THEME) from None

        stylesheet = self.multireplace(
            str(style_sheet),
            self._parse_env_patch(str(style_sheet)),
        )

        try:
            if theme == "dark":
                from dalmatium.assets.theme.rc_icons import dark  # noqa: F401
            elif theme == "light":
                from dalmatium.assets.theme.rc_icons import light  # noqa: F401
            icon_path = ":qdarktheme"
        except AttributeError:
            if hasattr(sys, "_MEIPASS"):
                icon_path = Path(
                    Path(getattr(sys, "_MEIPASS", "")) / "qdarktheme",
                ).as_posix()
            else:
                icon_path = BASE_DIR.as_posix()
        return stylesheet.replace("${path}", icon_path)

    def load_palette(self, theme: str = "dark") -> QPalette:
        """Load the QPalette for the dark or light theme.

        Args:
            theme: The theme to load the palette for.
        """
        try:
            palette = _THEMES[theme]["palette"]
        except KeyError:
            raise TypeError(ERROR_INVALID_THEME) from None
        return QPalette(palette)
