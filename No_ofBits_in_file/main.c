#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "r");
    if(fp == NULL){
        printf("file does not exist");
        exit(1);
    }
    fseek(fp,0,2);
    printf("File contains %d Number of bytes", ftell(fp));
    fclose(fp);
    return 0;
}
