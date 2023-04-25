#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include "console.h"

int start() {
    clear();
    while (consoleRet != 0)
    {
        if (consoleRet == 1 || 8 || 14) {
            printf("Enter Command: ");
            scanf("%s", enteredCMD);
            console(enteredCMD);
        } else if (consoleRet == 6) {
            inPokecenter = true;
            while (inPokecenter) {
                if(!talking){
                    printf("Enter Command: ");
                    scanf("%s", enteredCMD);
                    pokeConsole(enteredCMD);
                } else {
                    wait(5);
                    clear();
                    inPokecenter = false;
                    printf("You left the Pokecenter");
                }
            }
        } else if (consoleRet == 9) {
            inMarket = true;
            while (inMarket) {

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