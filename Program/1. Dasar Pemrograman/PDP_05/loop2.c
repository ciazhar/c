//judul:100-1 genap
//dibuat oleh nila nadia
//21 okt 2014
#include "stdio.h"

//kamus:
int genap;

//deskripsi:
main()
{
    for(genap=2;genap<=100;genap++)
    {
        if(genap%2==1)
        {
            continue;
        }
        else
        {
         printf("Nilai genap adalah %d \n",genap);
        }
        genap=genap+1;
    }
    return 0;
}
