#include <stdio.h>
#include <stdlib.h>
main()
{
FILE *pf; /* Pointer-ke-FILE */
char kar;
/* Ciptakanfile */
if ((pf = fopen("COBA.psd","w")) == NULL)
{
printf("file takdapatdiciptakan!\r\n");
exit(1);
}
//Masukkankarakterper karaktersampai ditekanENTER
while((kar=getchar())!='\n')
fputc(kar, pf);
fclose(pf);  /* tutup file */
}
