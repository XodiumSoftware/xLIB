mod config;
mod forger;
mod reader;

use forger::Forger;
use reader::Reader;

pub struct Utils;

impl Utils {
    pub const FORGE: Forger = Forger;
    pub const READ: Reader = Reader;
}

fn main() {}
