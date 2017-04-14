#include <stdio.h>
#include <stdlib.h>
#include<string.h>
main()
{
FILE *pf; /* ptr-ke-FILE*/
int data, i;
char nama[40];
if((pf=fopen("latihan.txt", "w")) == NULL )
{
printf("file gagaldiciptakan!\n");
exit(1);
}
printf("Masukkan banyaknya data :");
scanf("%d",&data);
for (i=1;i<=data;i++)
{
printf("\nNama_ke%d : ",i); fflush(stdin);
gets(nama);
strcat(nama,"\n");
fputs(nama, pf);
}
printf("\nOke. Data sudah disimpan dalam file.\n");
fclose(pf); /* menutupfile */
}
