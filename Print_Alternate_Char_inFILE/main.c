#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char ch;
   fp = fopen("demo.txt", "r");
   if(fp == NULL){
    printf("the problem in opening a file");
    exit(1);
   }


   while(!feof(fp)){
    fseek(fp,1,1);
    ch = fgetc(fp);
    printf("%c", ch);


   }
   fclose(fp);
}
