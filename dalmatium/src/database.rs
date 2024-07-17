use rusqlite::{params, Connection, Result};

pub struct Database {
    conn: Connection,
}

impl Database {
    pub fn new(db_name: &str) -> Result<Self> {
        let conn = Connection::open(db_name)?;
        Ok(Database { conn })
    }

    pub fn create_table(&self) -> Result<()> {
        self.conn.execute(
            "CREATE TABLE IF NOT EXISTS employees (
                id INTEGER PRIMARY KEY,
                name TEXT NOT NULL,
                dept_id INTEGER
            )",
            params![],
        )?;
        Ok(())
    }
}
