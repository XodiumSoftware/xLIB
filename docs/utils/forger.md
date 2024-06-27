---
description: A class that contains forger functions.
---

# ⚡ Forger

{% hint style="info" %}
**This library** uses a certain structure to make it easier readable at accessing the methods, we do this by assigning a variable to each class like this:

{% code overflow="wrap" lineNumbers="true" fullWidth="true" %}
```python
class Utils:
    """A class that contains utility functions."""

    (
        database,
        forge,
        read,
        wrap,
    ) = (
        Database,
        Forger,
        Reader,
        Wrapper,
    )
```
{% endcode %}
{% endhint %}

## "dir" method

{% code title="class Forger" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    @staticmethod
    def dir(path: Path, mode: int = 511, *, parents: bool = True, exist_ok: bool = True) -> Path: ...
        """Forge a directory if it does not exist.

        Args:
            path: The path to the directory.
            mode: The mode of the directory.
            parents: Whether to create parent directories.
            exist_ok: Whether to raise an error if the directory exists.

        Returns:
            The path to the directory.

        Raises:
            OSError: If the directory could not be created.
        """
```
{% endcode %}

## "file" method

{% code title="class Forger" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    @staticmethod
    def file(path: Path, mode: int = 438, *, exist_ok: bool = True) -> Path: ...
        """Forge a file if it does not exist.

        Args:
            path: The path to the file.
            mode: The mode of the file.
            exist_ok: Whether to raise an error if the file exists.

        Returns:
            The path to the file.

        Raises:
            OSError: If the file could not be created.
        """
```
{% endcode %}

## Usage

{% code overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    from dalmatia import Utils

    Utils.forge.dir(...)
    Utils.forge.file(...)
```
{% endcode %}
