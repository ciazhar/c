//judul:100-1 genap
//dibuat oleh nila nadia
//21 okt 2014
#include "stdio.h"

//kamus:
int y;

//deskripsi:
main()
{
    for(y=100;y>=1;y--)
    {
     if(y<55)
        {
           break;
        }
        else
        {
            printf("%d \n",y);
        }
    }
    return 0;
}
