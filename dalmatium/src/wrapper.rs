use libloading::{Library, Symbol};
use std::collections::HashSet;
use std::ffi::CString;

pub struct Wrapper {
    pub(crate) lib: Library,
}

impl Wrapper {
    pub fn new(lib_path: &str) -> Self {
        let lib = unsafe {
            let msg = "Failed to load library";
            Library::new(lib_path).expect(msg)
        };
        Self { lib }
    }

    /// Gets a function from the library.
    ///
    /// # Arguments
    ///
    /// * `func` - The name of the function.
    ///
    /// # Returns
    ///
    /// * `Symbol` - A symbol pointing to the function.
    ///
    /// # Errors
    ///
    /// * `AttributeError` - If the function could not be found.
    pub fn get_function(&self, func: &str) -> Symbol<'_, unsafe extern "C" fn()> {
        let msg = "CString::new failed";
        let func_cstr = CString::new(func).expect(msg);
        unsafe {
            let msg = "Failed to get function";
            self.lib
                .get::<unsafe extern "C" fn()>(func_cstr.as_bytes_with_nul())
                .expect(msg)
        }
    }

    /// Gets the functions in the library.
    ///
    /// # Returns
    ///
    /// * `HashSet<String>` - The functions in the library.
    ///
    /// # Errors
    ///
    /// * `Exception` - If the functions could not be retrieved.
    pub fn list_functions(&self) -> HashSet<String> {
        let functions = HashSet::new();
        // Rust's libloading does not provide a direct way to list all symbols in a library.
        // This functionality would depend on the specific use case and how the library exposes its symbols.
        // For demonstration, we're returning an empty set.
        functions
    }
}
