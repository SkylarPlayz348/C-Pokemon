// Don't ask why I have all of these
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "sqlite3.h"

int createDatabase(){
    sqlite3 *userdb;
    sqlite3 *pokemondb;
    int user = sqlite3_open("user.db", &userdb);
    if(user != SQLITE_OK){
        printf("Error: 0x02 @ 1/2");
        return 0x02;
    }
    int pokemon = sqlite3_open("pokemon.db", &pokemondb);
    if (pokemon != SQLITE_OK) {
        printf("Error: 0x02 @ 2/2");
        return 0x02;
    }
    return 0;
}

int main() {
    createDatabase();
    return 0;
}