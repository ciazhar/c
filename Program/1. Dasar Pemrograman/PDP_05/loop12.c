//judul:temperatur
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
float c,f;
//deskripsi:
main()
{
    printf("Celsius \t Fahrenheid \n \n");
    for(c=0;c<=100;c++)
    {
        f=((c*9)/5)+32;
        printf("%2.f \t \t %.1f \n", c, f);
    }
    return 0;
}
