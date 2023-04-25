// This is basically how I would store this in json file / database
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct playerData {
    int id;
    char username[100];
    int badges;
};

struct pokemon{
    int id;
    int jID;
    int lvl;
    char name[200];
    int xp;
    int xpToNxtLvl;
    char ogOwner[100]
};

struct evolve{
    int id;
};