#include <stdio.h>
#include <stdlib.h>

char satranc[10][10];

int main()
{
    int i,j;
    for(i=0;i<=7;i++)
        for(j=0;j<=7;j++)
        satranc[i][j]='x';

    printf("atinizin bulundugu satir ve sutunu giriniz..\n"); scanf("%d%d",&i,&j);
    satranc[i-1][j-1]='A';

    if(i<=0 || j<=0 && i>8 || j>8)
    printf("HATALI SECIM YAPTINIZ..\n");

    else{
        if(satranc[i][j+1]=='x')
            satranc[i][j+1]='L';
        if(satranc[i+1][j]=='x')
            satranc[i+1][j]='L';
        if(satranc[i-2][j+1]=='x')
            satranc[i-2][j+1]='L';
        if(satranc[i-3][j]=='x')
            satranc[i-3][j]='L';
        if(satranc[i][j-3]=='x')
            satranc[i][j-3]='L';
        if(satranc[i+1][j-2]=='x')
            satranc[i+1][j-2]='L';
        if(satranc[i][j+1]=='x')
            satranc[i][j+1]='L';
        if(satranc[i-3][j-2]=='x')
            satranc[i-3][j-2]='L';
        if(satranc[i-2][j-3]=='x')
            satranc[i-2][j-3]='L';
        }

    for(i=0;i<=7;i++)
        {
            for(j=0;j<=7;j++)
            {
                printf("%c",satranc[i][j]);
            }
            printf("\n");
        }

    return 0;
}
