use diesel::prelude::*;
use diesel::sqlite::SqliteConnection;
use r2d2::{Pool, PooledConnection};
use r2d2_diesel::ConnectionManager;
use std::path::PathBuf;

pub struct Database {
    pool: Pool<ConnectionManager<SqliteConnection>>,
}

impl Database {
    /// Initializes a new instance of the Database.
    ///
    /// # Arguments
    ///
    /// * `path` - The path to the database file.
    ///
    /// # Returns
    ///
    /// * `Database` - The database instance.
    pub fn new(path: PathBuf) -> Self {
        let database_url = format!("sqlite://{}", path.to_str().unwrap());
        let manager = ConnectionManager::<SqliteConnection>::new(database_url);
        let pool = Pool::new(manager).expect("Failed to create pool.");
        Database { pool }
    }

    /// Provides a database session.
    ///
    /// # Returns
    ///
    /// * `PooledConnection<ConnectionManager<SqliteConnection>>` - The database session.
    pub fn db_session(&self) -> PooledConnection<ConnectionManager<SqliteConnection>> {
        self.pool
            .get()
            .expect("Failed to get a connection from the pool.")
    }
}
