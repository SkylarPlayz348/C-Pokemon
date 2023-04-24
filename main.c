#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#ifdef __unix__
    int clear(){
        system("clear");
        return 0;
    }
#else
    int clear() {
        system("cls");
        return 0;
    }
#endif

// Command storage
char enteredCMD[10];
char pokecenterCMD[4];

// Console Variables
int consoleRet = 1;

// PokeCenter Variables
bool inPokecenter = false;
bool onRoute = false;
// Battle Variables



int console (char command[]){
    if(strcmp(command, "battle") == 0){
        clear();
        printf("You entered a battle\n");
        return consoleRet;
    } else if (strcmp(command, "pokecenter") == 0) {
        clear();
        consoleRet = 6;
        return consoleRet;
    } else if (strcmp(command, "exit") == 0) {
        consoleRet = 0;
    } else {
        clear();
        printf("Enter Valid Command!\n");
        return consoleRet;
    }
}

int pokeConsole (char command[]){
    if(strcmp(command, "battle") == 0){
        clear();
        printf("You entered a battle\n");
        return consoleRet;
    } else if (strcmp(command, "pokecenter") == 0) {
        clear();
        consoleRet = 6;
        return consoleRet;
    } else if (strcmp(command, "exit") == 0) {
        consoleRet = 0;
    } else {
        clear();
        printf("Enter Valid Command!\n");
        return consoleRet;
    }
}

int start() {
    clear();
    while (consoleRet != 0)
    {
        if (consoleRet == 1) {
            printf("Enter Command: ");
            scanf("%s", enteredCMD);
            console(enteredCMD);
        } else if (consoleRet == 6) {
            inPokecenter = true;
            while (inPokecenter) {
                printf("Enter Command: ");
                scanf("%s", enteredCMD);
                pokeConsole(enteredCMD);
            }
        }
    }
    return 0;
}