#include<stdio.h>

int main()
{
	FILE *readme;
	char isim[200];


	readme=fopen("yazmayapilan.txt","a");
	printf("lutfen birseyler yaziniz:");
	gets(isim);


	fprintf(readme,"%s\n",isim);


	fclose(readme);
}
