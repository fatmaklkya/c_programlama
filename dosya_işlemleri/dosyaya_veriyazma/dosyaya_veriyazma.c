#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;

    dosya=fopen("deneme.txt","w");

    fputs("fatmaklkya",dosya);

    char dizi[]="fatma";
    dosya=fopen("fatma.txt","w");

    fprintf(dosya,"bu dosya %s'nin dosyasidir..",dizi);




    dosya=fopen("carpimTablosu.txt","w");

    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            fprintf(dosya,"%d x %d = %d\n",i,j,i*j);
        }
        fprintf(dosya,"\n");
    }

    fclose(dosya);

}
