#[cfg(test)]
mod tests {
    use std::fs::File;
    use std::io::Write;
    use std::os::unix::fs::PermissionsExt;
    use tempfile::tempdir;
    use xlib::forger::{forge_dir, forge_file};

    #[test]
    fn test_forge_dir() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("parent_dir/test_dir");
        let dir_path_str = dir_path.to_str().unwrap();
        assert!(!dir_path.exists());

        // Test creating directory with parents
        forge_dir(&dir_path_str, 0o755, true, false).unwrap();
        assert!(dir_path.exists());
        let metadata = dir_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o755);

        // Test exist_ok flag
        assert!(forge_dir(&dir_path_str, 0o755, false, true).is_ok());

        // Test error when directory already exists and exist_ok is false
        assert!(forge_dir(&dir_path_str, 0o755, false, false).is_err());
    }

    #[test]
    fn test_forge_file() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let file_path_str = file_path.to_str().unwrap();
        assert!(!file_path.exists());

        // Test creating file
        forge_file(&file_path_str, 0o644, false).unwrap();
        assert!(file_path.exists());
        let metadata = file_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o644);

        // Test exist_ok flag
        let mut file = File::create(&file_path_str).unwrap();
        writeln!(file, "Hello, world!").unwrap();
        assert!(forge_file(&file_path_str, 0o644, true).is_ok());

        // Test error when file already exists and exist_ok is false
        assert!(forge_file(&file_path_str, 0o644, false).is_err());
    }
}
