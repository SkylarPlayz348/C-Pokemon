#include <stdio.h>
#include <unistd.h>

int main(){
    char file[] = "data/temp";
    if(access(file, F_OK) != -1){
        printf("File Exists\n");
        remove(file);
        printf("Not anymore");
    } else {
        printf("Don't Know where it is\n");
        FILE *fp;
        fp = fopen(file, "w");
        fprintf(fp, "This is a temp file for data");
        fclose(fp);
        printf("I made it for you");
    }
    return 0;
}