#[cfg(test)]
mod tests {
    use dalmatium::Forger;
    use std::fs::{self, File};
    use std::io::Write;
    use tempfile::tempdir;

    #[test]
    fn test_forge_directory() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        assert!(!dir_path.exists());

        Forger::dir(&dir_path, 0o755, false, false).unwrap();
        assert!(dir_path.exists());

        let metadata = dir_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o755);
    }

    #[test]
    fn test_forge_directory_with_parents() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("parent_dir/test_dir");
        assert!(!dir_path.exists());

        Forger::dir(&dir_path, 0o755, true, false).unwrap();
        assert!(dir_path.exists());

        let metadata = dir_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o755);
    }

    #[test]
    fn test_forge_directory_exist_ok() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        fs::create_dir(&dir_path).unwrap();

        assert!(Forger::dir(&dir_path, 0o755, false, true).is_ok());
    }

    #[test]
    fn test_forge_directory_already_exists_error() {
        let dir = tempdir().unwrap();
        let dir_path = dir.path().join("test_dir");
        fs::create_dir(&dir_path).unwrap();

        assert!(Forger::dir(&dir_path, 0o755, false, false).is_err());
    }

    #[test]
    fn test_forge_file() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        assert!(!file_path.exists());

        Forger::file(&file_path, 0o644, false).unwrap();
        assert!(file_path.exists());

        let metadata = file_path.metadata().unwrap();
        assert_eq!(metadata.permissions().mode() & 0o777, 0o644);
    }

    #[test]
    fn test_forge_file_exist_ok() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let mut file = File::create(&file_path).unwrap();
        writeln!(file, "Hello, world!").unwrap();

        assert!(Forger::file(&file_path, 0o644, true).is_ok());
    }

    #[test]
    fn test_forge_file_already_exists_error() {
        let dir = tempdir().unwrap();
        let file_path = dir.path().join("test_file.txt");
        let mut file = File::create(&file_path).unwrap();
        writeln!(file, "Hello, world!").unwrap();

        assert!(Forger::file(&file_path, 0o644, false).is_err());
    }
}
