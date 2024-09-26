---
description: A class that contains forger functions.
---

# ⚡ Forger

***

## "<mark style="color:orange;">dir</mark>" method

{% code title="class Forger" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```rust
/// Forge a directory if it does not exist.
///
/// # Arguments
///
/// * `path` - The path to the directory.
/// * `mode` - The mode of the directory.
/// * `parents` - Whether to create parent directories.
/// * `exist_ok` - Whether to raise an error if the directory exists.
///
/// # Returns
///
/// * `Ok(())` on success, `Err(io::Error)` on failure.
#[pyfunction]
pub fn forge_dir(path: &str, mode: u32, parents: bool, exist_ok: bool) -> io::Result<()> {...}
```
{% endcode %}

***

## "<mark style="color:orange;">file</mark>" method

{% code title="class Forger" overflow="wrap" lineNumbers="true" fullWidth="false" %}
```rust
/// Forge a file if it does not exist.
///
/// # Arguments
///
/// * `path` - The path to the file.
/// * `mode` - The mode of the file.
/// * `exist_ok` - Whether to raise an error if the file exists.
///
/// # Returns
///
/// * `Ok(())` on success, `Err(io::Error)` on failure.
#[pyfunction]
pub fn forge_file(path: &str, mode: u32, exist_ok: bool) -> io::Result<()> {...}
```
{% endcode %}

***

## Usage

{% code overflow="wrap" lineNumbers="true" fullWidth="false" %}
```python
    from dalmatium import Utils

    Utils.forge.dir(...)
    Utils.forge.file(...)
```
{% endcode %}

***

{% hint style="warning" %}
[<mark style="color:orange;">**Click on me if you have questions on why we are using**</mark>** **<mark style="color:red;">**"forge"**</mark>** **<mark style="color:orange;">**instead of**</mark>** **<mark style="color:red;">**"Forger"**</mark><mark style="color:orange;">**.**</mark>](../quick-start.md)
{% endhint %}

