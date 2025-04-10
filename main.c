#include <stdio.h>
#include "console.h"

int start()
{
    clear();
    while (consoleRet != CONSOLE_EXIT)
    {
        switch (consoleRet)
        {
        case 6:
            scanf("%s", enteredCMD);
            pokeConsole(enteredCMD);
            break;
        case CONSOLE_POKECENTER_HEALED:
            printf("Your Pokemon are Healed\n");
            consoleRet = CONSOLE_OK;
            break;
        case CONSOLE_OK || CONSOLE_POKECENTER_EXIT || CONSOLE_POKEMART_EXIT:
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