mod config;
mod database;
mod forger;
mod reader;
mod wrapper;

use database::Database;
use forger::Forger;
use reader::Reader;
use wrapper::Wrapper;

pub struct Utils;

impl Utils {
    pub const DB: Database = Database;
    pub const FORGE: Forger = Forger;
    pub const READ: Reader = Reader;
    pub const WRAP: Wrapper = Wrapper;
}

fn main() {
    println!("Hello, world!");
}
