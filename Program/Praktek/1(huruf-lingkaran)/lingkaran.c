//judul : menghitug luas lingkaran
//dibuat di kos bersama nila nisa
//25 sept 2014

//kamus :
#include "stdio.h"

float jarijari, luas ;
float phi=3.14;
//deskripsi :
main ()
{
printf("\t\t======MENGHITUNG LUAS LINGKARAN ======\n\n");

printf("masukan nilai jarijari:");
scanf("%f", &jarijari);

luas=phi*jarijari*jarijari;

printf("luas lingkaran adalah :%f", luas);
}
