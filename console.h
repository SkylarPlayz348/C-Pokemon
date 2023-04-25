/**********************************************************************/
/*                                                                    */
/* This file covers all of the logic for the Console and Sub-Consoles */
/*                                                                    */
/**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <TargetConditionals.h>

#ifdef __APPLE__
    int clear(){
        system("clear");
        return 0;
    }
#elif define(__unix__)
    int clear(){
        system("clear");
        return 0;
    }
#elif WIN32
    int clear() {
        system("cls");
        return 0;
    }
#endif

// Command storage
char enteredCMD[10]; // Main console commands
int battlecmd; // Battle console commands
char pokecenterCMD[1];  // Pokecenter console commands
char marketCMD[2]; // Market console commands

// Console Variables
int consoleRet = 1;

// PokeCenter and PokeMart Variables
bool inPokecenter = false;
bool talking = false;
bool inMarket = false;
bool onRoute = false;
// Battle Variables
bool wild;
int pHP; // Player HP
int oHP; // Opponent HP
int pPN; // Player Pokemon Number
int oPN; // Opponent Pokemon Number

// Pokecenter Sub-Console
int pokeConsole (char command[]){
    if (strcmp(command, "y") == 0) {
        printf("");
        // logic to heal pokemon
        consoleRet = 7;
        return consoleRet;
    } else if (strcmp(command, "n") == 0) {
        printf("Ok come back another time\n");
        talking = false;
        consoleRet = 8;
        return consoleRet;
    }
    return consoleRet;
}

int console (char command[]){
    if(strcmp(command, "battle") == 0){
        clear();
        printf("You entered a battle\n");
        consoleRet = 1;
        return consoleRet;
    } else if (strcmp(command, "pokecenter") == 0) {
        clear();
        printf("Would you like your pokemon healed(y/n)\n");
        consoleRet = 6;
        return consoleRet;
    } else if (strcmp(command, "exit") == 0) {
        consoleRet = 0;
    } else {
        clear();
        printf("Enter Valid Command!\n");
        consoleRet = 1;
        return consoleRet;
    }
    return consoleRet;
}