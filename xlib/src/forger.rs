use std::fs::{self, File};
use std::io;
use std::os::unix::fs::PermissionsExt;
use std::path::Path;

use pyo3::pyfunction;

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
pub fn forge_dir(path: &str, mode: u32, parents: bool, exist_ok: bool) -> io::Result<()> {
    let path = Path::new(path);
    if path.exists() {
        if !exist_ok {
            return Err(io::Error::new(
                io::ErrorKind::AlreadyExists,
                format!("Directory already exists: {:?}", path),
            ));
        }
    } else {
        if parents {
            fs::create_dir_all(path)?;
        } else {
            fs::create_dir(path)?;
        }
    }
    let metadata = path.metadata()?;
    let mut permissions = metadata.permissions();
    permissions.set_mode(mode);
    fs::set_permissions(path, permissions)?;
    Ok(())
}

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
pub fn forge_file(path: &str, mode: u32, exist_ok: bool) -> io::Result<()> {
    let path = Path::new(path);
    if path.exists() {
        if !exist_ok {
            return Err(io::Error::new(
                io::ErrorKind::AlreadyExists,
                format!("File already exists: {:?}", path),
            ));
        }
    } else {
        File::create(path)?;
    }
    let metadata = path.metadata()?;
    let mut permissions = metadata.permissions();
    permissions.set_mode(mode);
    fs::set_permissions(path, permissions)?;
    Ok(())
}
