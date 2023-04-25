#include <stdio.h>
#include <unistd.h>

int main(){
    char file[] = "data/temp";
    if(access(file, F_OK) != -1){
        printf("File Exists\n");
        remove(file);
        printf("Not anymore\n");
    } else {
        printf("Don't Know where it is\n");
        FILE *fp;
        fp = fopen(file, "w");
        fprintf(fp, "This is a temp file for data\n");
        fclose(fp);
        printf("I made it for you\n");
    }
    return 0;
}