#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "console.h"

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

int main() {
    while(start() != 0){
        start();
    }
    return 0;
}