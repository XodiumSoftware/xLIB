"""This package contains utility functions."""

from dalmatium.database import Database
from dalmatium.forger import Forger
from dalmatium.reader import Reader
from dalmatium.theme import Theme
from dalmatium.wrapper import Wrapper


class Utils:
    """A class that contains utility functions."""

    (
        db,
        forge,
        read,
        theme,
        wrap,
    ) = (
        Database,
        Forger,
        Reader,
        Theme,
        Wrapper,
    )
