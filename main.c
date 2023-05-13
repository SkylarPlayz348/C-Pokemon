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
        switch (consoleRet)
        {
            case 6:
                printf("Enter Command: ");
                scanf("%s", enteredCMD);
                pokeConsole(enteredCMD);
                break;
            case 7:
                printf("Your Pokemon are Healed\n");
                consoleRet = 8;
                break;
            default:
                printf("Enter Command: ");
                scanf("%s", enteredCMD);
                console(enteredCMD);
                break;
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