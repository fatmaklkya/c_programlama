#include <stdio.h>
#include <stdlib.h>

int faktorial(int sayi1);

int main()
{
    int sayi1;
    for(sayi1=0;sayi1<=10;sayi1++)
    {
        printf("%d! = %d\n",sayi1,faktorial(sayi1));
    }
}

int faktorial(int sayi1)
{
    if(sayi1<=1){return 1;}
    else
        {
            return(sayi1*faktorial(sayi1-1));
        }
}
