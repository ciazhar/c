#include <stdio.h>
#include <stdlib.h>
main()
{
FILE *pf; /* ptr-ke-FILE*/
int data, i;
char nama[40];
if((pf=fopen("latihan.txt", "r")) == NULL )
{
printf("filegagaldibuka!\n");
exit(1);
}
/*Baca file perstring sampaiditemui EOF*/
while (fgets(nama,9999999,pf))
printf("%s\n",nama);
fclose(pf); /* menutupfile */
}
