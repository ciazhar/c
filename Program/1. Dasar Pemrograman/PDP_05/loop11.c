//judul:nestedloop
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x,y;

//deskripsi:
main()
{
    printf("input (7) : "); scanf("%d", &x);
    for(y=1;y<=10;y++)
    {
        printf("%d x %d = %d \n", x, y, x*y);
    }
    return 0;
}
