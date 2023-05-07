/*                                */
/* This is far from being Finished*/
/*                                */

CREATE TABLE IF NOT EXISTS players (
    userID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    username TEXT,
    badges INTEGER,
    saveID INTEGER
);

CREATE TABLE IF NOT EXISTS saves(
    saveID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    saveData ARRAY
):

CREATE TABLE IF NOT EXISTS inventories(
    inventoryID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
    inventoryOwner INTEGER,
    inventoryItems ARRAY,
    inventoryItemNum ARRAY
);