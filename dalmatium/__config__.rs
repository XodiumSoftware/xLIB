use std::path::{Path, PathBuf};
use std::env;

pub struct Config;

impl Config {
    // General
    // =============================================================================
    pub fn base_dir() -> PathBuf {
        env::current_exe().unwrap().parent().unwrap().to_path_buf()
    }

    pub fn tests_dir() -> PathBuf {
        let dir = Self::base_dir().join("tests");
        Forger::dir(&dir, 0o755, true, true).unwrap();
        dir
    }

    // Database
    // =============================================================================
    pub fn test_database_dir() -> PathBuf {
        let dir = Self::tests_dir().join("database");
        Forger::dir(&dir, 0o755, true, true).unwrap();
        dir
    }

    pub fn test_database_file() -> PathBuf {
        let file = Self::test_database_dir().join("test_database.db");
        Forger::file(&file, 0o644, true).unwrap();
        file
    }

    // .so Lib files
    // =============================================================================
    pub fn lib_dir() -> PathBuf {
        let dir = Self::base_dir().join("build");
        Forger::dir(&dir, 0o755, true, true).unwrap();
        dir
    }

    pub fn utils_lib_file() -> PathBuf {
        Self::lib_dir().join("test.so")
    }
}