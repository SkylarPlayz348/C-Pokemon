#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#ifdef __APPLE__ 
    #include "console-mac.h"
#else
    #include "console.h"
#endif

int start() {
    clear();
    while (consoleRet != 0)
    {
        if (consoleRet == 6) {
            while (consoleRet != 7) {
                printf("Enter Command: ");
                scanf("%s", enteredCMD);
                pokeConsole(enteredCMD);
            }
        } else if (consoleRet == 7) {
            printf("Your Pokemon are Healed\n");
            consoleRet = 8;
        } else if (consoleRet == 9) {
            inMarket = true;
            while (inMarket) {

            }
            
        } else {
            printf("Enter Command: ");
            scanf("%s", enteredCMD);
            console(enteredCMD);
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