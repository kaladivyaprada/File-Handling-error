#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    long pos = 0;

    fp = fopen("demo.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fseek(fp, pos, SEEK_SET) == 0 && (ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
        pos += 2;
    }
    fclose(fp);

    return 0;
}
