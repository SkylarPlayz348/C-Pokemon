/**********************************************************************/
/*                                                                    */
/* This file covers all of the logic for the Console and Sub-Consoles */
/*                                                                    */
/**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifdef __APPLE__
void clear()
{
    system("clear");
}
#elif __unix__
void clear()
{
    system("clear");
}
#elif WIN32
void clear()
{
    system("cls");
}
#endif

typedef enum
{
    CONSOLE_EXIT = 0,
    CONSOLE_OK,
    CONSOLE_BATTLE_ENTER,
    CONSOLE_BATTLE_WON,
    CONSOLE_BATTLE_LOST,
    CONSOLE_BATTLE_RAN,
    CONSOLE_POKECENTER_ENTER,
    CONSOLE_POKECENTER_HEALED,
    CONSOLE_POKECENTER_EXIT,
    CONSOLE_POKEMART_ENTER,
    CONSOLE_POKEMART_ENTER_BUY,
    CONSOLE_POKEMART_ENTER_SELL,
    CONSOLE_POKEMART_EXIT_BUY,
    CONSOLE_POKEMART_EXIT_SELL,
    CONSOLE_POKEMART_EXIT
} console_return_t;

// Command storage
char enteredCMD[10];   // Main console commands
int battlecmd;         // Battle console commands
char pokecenterCMD[1]; // Pokecenter console commands
char marketCMD[2];     // Market console commands

// Console Variables
console_return_t consoleRet = CONSOLE_OK;

// PokeCenter and PokeMart Variables
bool inPokecenter = false;
bool talking = false;
bool inMarket = false;
bool onRoute = false;
// Battle Variables
bool wild;
double pHP; // Player HP
double oHP; // Opponent HP
int pPN;    // Player Pokemon Number
int oPN;    // Opponent Pokemon Number

// Pokecenter Sub-Console
int pokeConsole(char command[])
{
    if (strcmp(command, "yes") == 0)
    {
        printf("Ok just hand over your pokemon\nYou left the PokeCenter\n");
        consoleRet = CONSOLE_POKECENTER_HEALED;
    }
    else if (strcmp(command, "no") == 0)
    {
        printf("Ok come back another time\n");
        consoleRet = CONSOLE_POKECENTER_EXIT;
    }
    else
    {
        clear();
        printf("Enter A Valid Command!\n");
        consoleRet = CONSOLE_OK;
    }
    return consoleRet;
}

int martConsole(char command[])
{
    if (strcmp(command, "buy") == 0)
    {
    }
    else if (strcmp(command, "sell") == 0)
    {
    }
    else if (strcmp(command, "exit") == 0)
    {
    }
    else
    {
        printf("Enter A Valid Command!\n");
    }
}

int console(char command[])
{
    if (strcmp(command, "battle") == 0)
    {
        clear();
        printf("You entered a battle\n");
        consoleRet = CONSOLE_OK;
    }
    else if (strcmp(command, "pokecenter") == 0)
    {
        clear();
        printf("Would you like your pokemon healed\n(yes/no): ");
        consoleRet = CONSOLE_POKECENTER_ENTER;
    }
    else if (strcmp(command, "help") == 0)
    {
        printf("\n-----Commands-----\nbattle - Enter a battle(Only works on Routes).\npokecenter - Enter the Pokecenter(Only works if your in a city).\npokemart - Enter the Pokemart(Only works in a City).\nhelp - this command.\n\n");
        consoleRet = CONSOLE_OK;
    }
    else if (strcmp(command, "exit") == 0)
    {
        consoleRet = CONSOLE_EXIT;
    }
    else
    {
        clear();
        printf("Enter A Valid Command! Type the command help to get all available commands\n");
        consoleRet = CONSOLE_OK;
    }
    return consoleRet;
}
