/**********************************************************************/
/*                                                                    */
/* This file covers all of the logic for the Console and Sub-Consoles */
/*                                                                    */
/**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
// Uncomment if coding on macOS
//#include <TargetConditionals.h>

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

// Command storage
char enteredCMD[10];   // Main console commands
int battlecmd;         // Battle console commands
char pokecenterCMD[1]; // Pokecenter console commands
char marketCMD[2];     // Market console commands

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
int pokeConsole(char command[])
{
    if (strcmp(command, "y") == 0)
    {
        printf("Ok just hand over your pokemon\nYou left the PokeCenter");
        consoleRet = 7;
    }
    else if (strcmp(command, "n") == 0)
    {
        printf("Ok come back another time\n");
        consoleRet = 8;
    }
    else
    {
        clear();
        printf("Enter A Valid Command!\n");
        consoleRet = 1;
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
        consoleRet = 1;
    }
    else if (strcmp(command, "pokecenter") == 0)
    {
        clear();
        printf("Would you like your pokemon healed\n(y/n):");
        consoleRet = 6;
    }
    else if (strcmp(command, "help") == 0)
    {
        printf("\n-----Commands-----\nbattle - Enter a battle(Only works on Routes).\npokecenter - Enter the Pokecenter(Only works if your in a city).\npokemart - Enter the Pokemart(Only works in a City).\nhelp - this command.\n\n");
        consoleRet = 1;
    }
    else if (strcmp(command, "exit") == 0)
    {
        consoleRet = 0;
    }
    else
    {
        clear();
        printf("Enter A Valid Command! Type the command help to get all available commands\n");
        consoleRet = 1;
    }
    return consoleRet;
}
