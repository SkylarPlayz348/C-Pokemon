/******************************************************/ 
/* This file covers all of the logic for the Consoles */
/******************************************************/

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
bool inMarket = false;
bool onRoute = false;
// Battle Variables

int pokeConsole (char command[]){
    if (strcmp(command, "y") == 0) {
        printf("");
        // logic to heal pokemon
    } else if (strcmp(command, "y") == 0) {

    }
}

int console (char command[]){
    if(strcmp(command, "battle") == 0){
        clear();
        printf("You entered a battle\n");
        consoleRet = 1;
        return consoleRet;
    } else if (strcmp(command, "pokecenter") == 0) {
        clear();
        printf("Would you like your pokemon healed(y/n)");
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
}