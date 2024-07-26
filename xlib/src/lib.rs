pub mod forger;

use forger::{forge_dir, forge_file};
use pyo3::{
    pymodule,
    types::{PyModule, PyModuleMethods},
    wrap_pyfunction, Bound, PyResult,
};

#[pymodule]
fn dalmatium(m: &Bound<'_, PyModule>) -> PyResult<()> {
    m.add_function(wrap_pyfunction!(forge_dir, m)?)?;
    m.add_function(wrap_pyfunction!(forge_file, m)?)?;
    Ok(())
}
