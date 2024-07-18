#[cfg(test)]
mod tests {
    use dalmatium::forger::{forge_dir, forge_file};
    use std::fs::{self, File};
    use std::io::Write;
    use std::os::unix::fs::PermissionsExt;
    use tempfile::tempdir;

    #[test]
    fn test_forge_directory() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        let dir_path_str = dir_path.to_str().unwrap();
        assert!(!dir_path.exists());

        forge_dir(&dir_path_str, 0o755, false, false).unwrap();
        assert!(dir_path.exists());

        let metadata = dir_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o755);
    }

    #[test]
    fn test_forge_directory_with_parents() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("parent_dir/test_dir");
        let dir_path_str = dir_path.to_str().unwrap();
        assert!(!dir_path.exists());

        forge_dir(&dir_path_str, 0o755, true, false).unwrap();
        assert!(dir_path.exists());

        let metadata = dir_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o755);
    }

    #[test]
    fn test_forge_directory_exist_ok() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        let dir_path_str = dir_path.to_str().unwrap();
        fs::create_dir(&dir_path).unwrap();

        assert!(forge_dir(&dir_path_str, 0o755, false, true).is_ok());
    }

    #[test]
    fn test_forge_directory_already_exists_error() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        let dir_path_str = dir_path.to_str().unwrap();
        fs::create_dir(&dir_path).unwrap();

        assert!(forge_dir(&dir_path_str, 0o755, false, false).is_err());
    }

    #[test]
    fn test_forge_file() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let file_path_str = file_path.to_str().unwrap();
        assert!(!file_path.exists());

        forge_file(&file_path_str, 0o644, false).unwrap();
        assert!(file_path.exists());

        let metadata = file_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o644);
    }

    #[test]
    fn test_forge_file_exist_ok() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let file_path_str = file_path.to_str().unwrap();
        let mut file = File::create(&file_path).unwrap();
        writeln!(file, "Hello, world!").unwrap();

        assert!(forge_file(&file_path_str, 0o644, true).is_ok());
    }

    #[test]
    fn test_forge_file_already_exists_error() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let file_path_str = file_path.to_str().unwrap();
        let mut file = File::create(&file_path).unwrap();
        writeln!(file, "Hello, world!").unwrap();

        assert!(forge_file(&file_path_str, 0o644, false).is_err());
    }
}
