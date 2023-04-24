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
    int lvl;
    char name[200];
    int xp;
    int xpToNxtLvl;
};
