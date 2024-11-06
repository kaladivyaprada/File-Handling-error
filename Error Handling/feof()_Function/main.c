#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int num,i,n;
    fp=fopen("Simple.txt","w+");
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter %d:",n);

    for(i=0; i<n; i++){
        scanf("%d", &num);
        putw(num,fp);
    }
    rewind(fp);
    printf("FILE CONTENTS ");
    while(1){
        num=getw(fp);
        if(feof(fp))
            break;
      printf("%d",num);

    fclose(fp);
    return 0;
    }

}
