#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include "console.h"

int start()
{
    clear();
    while (consoleRet != 0)
    {
        switch (consoleRet)
        {
        case 6:
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
    return consoleRet;
}

int main()
{
    return start();
}