use std::fs;
use std::io::{self, Read};
use std::path::Path;

pub struct Reader;

impl Reader {
    /// Read a file and return its contents as a String.
    ///
    /// # Arguments
    ///
    /// * `path` - A reference to the path of the file.
    ///
    /// # Returns
    ///
    /// * `Ok(String)` containing the file contents on success, `Err(io::Error)` on failure.
    pub fn file<P: AsRef<Path>>(path: P) -> io::Result<String> {
        let path = path.as_ref();
        fs::read_to_string(path).map_err(|e| {
            io::Error::new(
                io::ErrorKind::Other,
                format!("Failed to read file {:?}. Error: {}", path, e),
            )
        })
    }
}
