// For Long down the road and for linux systems

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

int main(int argc, char *argv[]) {
    char option[2];
    strcpy(option, argv[1]);
    if (strcmp(option, "-l") == 0) {
        start();
    }
}