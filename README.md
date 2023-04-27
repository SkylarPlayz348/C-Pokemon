# C Pokemon

---
### NOTE: THIS IS A VERY MUCH WIP

---
## Table of Contents
- [Possible FAQ](./README.md#possible-faq)
- [Syntax](./README.md)
    - [Console](./README.md#console)
        - [Console Return Key](README.md#console-return-key)
    - [Errors](./README.md#syntax)
        - [Database](./README.md#database-errors)
        - [Game](./README.md#game-errors)

---

## Possible FAQ:
### What Is this
This is a C version of my C ASM Pokemon project.
### Why
I want to get a good idea of how this will look in C so that I can make some of the other things in assembly.

## Syntax:
---
### Console
#### Console Return Key:
| Number | Meaning |
| ------ | ------- |
| 0 | Exit |
| 1 | Normal |
| 2 | Enter Battle |
| 3 | Exit Battle(Won) |
| 4 | Exit Battle (Lost) |
| 5 | Exit Battle (Ran Away) |
| 6 | Enter PokeCenter |
| 7 | Pokemon Healed |
| 8 | Exit Pokecenter |
| 9 | Enter Market |
| 10 | Enter Buying Section |
| 11 | Enter Selling |
| 12 | Exit Buying |
| 13 | Exit Selling |
| 14 | Exit Market |

##### More will come as the console evolves

### Error Key Table Of Contents
| Numbers | Topic |
| ------ | ------- |
| 0x01 - 0x09   | [Database Connection Errors](./README.md#database-errors) |
| 0x10 - 0x19 | [Game Errors](./README.md#game-errors) 

#### Database Errors
| Error | Meaning | 
| ----- | ------- |
| 0x01 | Database Failed to Connect |
| 0x02 | Database Failed to Create |
| 0x03 | SQL Query Failed |
| 0x04 | Invalid SQL |
| 0x05 ||
| 0x06 ||
| 0x07 ||
| 0x08 ||
| 0x09 ||

#### Game errors

---
---
### Note
These will be added as I find errors for the game

---
---
| Error | Meaning |
| ----- | ------- |
| 0x0a | Error Creating Player |
| 0x0b | Error Saving Player |
| 0x0c | Error Deleting Player |
| 0x0d | TBD |
| 0x0e | TBD |
| 0x10 | TBD |
| 0x17 | TBD |
| 0x18 | TBD |
| 0x19 | TBD |

---
## TODO

- Make Logic for battles/Pokecenter/Pokemart
- Make Pokemon Stats
- Make Database
- Make Database connections with sqlite3
- Find a name for this project
