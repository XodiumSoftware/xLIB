---
description: A class that contains reader functions.
---

# ⚡ Reader

{% hint style="info" %}
**This library** uses a certain structure to make it easier readable at accessing the methods, we do this by assigning a variable to each class like this:

{% code overflow="wrap" lineNumbers="true" %}
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

## "file" method

{% code title="class Forger" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    @staticmethod
    def file(path: Path) -> str: ...
        """Read a file.

        Args:
            path: The path to the file.
        """
```
{% endcode %}

## Usage

{% code overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    from dalmatia import Utils

    Utils.read.file(...)
```
{% endcode %}
