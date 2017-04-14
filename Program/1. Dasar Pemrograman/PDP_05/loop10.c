//judul:nestedloop
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x,y;

//deskripsi:
main()
{
    for (y=1;y<=7;y++)
    {
        printf("\n Looping yang ke %d \n",y);

        for (x=1;x<=10;x++)
        {
            printf("- angka %d - \n",x);
        }
    }
    return 0;
}
