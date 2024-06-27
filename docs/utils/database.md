---
description: A class that contains database functions.
---

# ⚡ Database

## "<mark style="color:purple;">\_\_init\_\_</mark>" method

{% code title="class Database" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    def __init__(self: "Database", path: Path) -> None: ...
        """Initialize the class.

        Args:
            path: The path to the database file.
        """
```
{% endcode %}

## "<mark style="color:orange;">db\_session</mark>" method

{% code title="class Database" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    @contextmanager
    def db_session(self: "Database") -> Iterator[Session]: ...
        """Context manager for a database session.

        Returns:
            The database session.
        """
```
{% endcode %}

## "<mark style="color:orange;">set\_data</mark>" method

{% code title="class Database" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    def set_data(
        self: "Database",
        table: sqlo.DeclarativeMeta,
        data: dict[str, None | int | float | str | bytes],
    ) -> None: ...
        """Update data in the database or add if it does not exist.

        Args:
            table: The table to update the data in.
            data: The data to be updated.
        """
```
{% endcode %}

## "<mark style="color:orange;">delete\_data</mark>" method

{% code title="class Database" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    def delete_data(
        self: "Database",
        table: sqlo.DeclarativeMeta,
        key: str,
    ) -> None: ...
        """Delete data from the database.

        Args:
            table: The table to delete the data from.
            key: The key of the data to be deleted.
        """
```
{% endcode %}

## "<mark style="color:orange;">get\_data</mark>" method

{% code title="class Database" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    def get_data(
        self: "Database",
        table: sqlo.DeclarativeMeta,
        key: str,
    ) -> str: ...
        """Get data from the database.

        Args:
            table: The table to get the data from.
            key: The key to get the data for.

        Returns:
            The data from the database.
        """
```
{% endcode %}

## Usage

{% code overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    from dalmatia import Utils

    Utils.database.db_session(...)
    Utils.database.set_data(...)
    Utils.database.delete_data(...)
    Utils.database.get_data(...)
```
{% endcode %}

{% hint style="warning" %}
[<mark style="color:orange;">**If you have questions on why we are using**</mark>** **<mark style="color:red;">**"database"**</mark>** **<mark style="color:orange;">**instead of**</mark>** **<mark style="color:red;">**"Database"**</mark><mark style="color:orange;">**, then click on me!**</mark>](../quick-start.md)
{% endhint %}
