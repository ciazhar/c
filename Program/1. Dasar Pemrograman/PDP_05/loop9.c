//judul:algoritma
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x,y,jml;
y=0;
jml=0;

//deskripsi:
main()
{
    for (x!=9999;;x++)
    {
        printf("Input bil = ",x);scanf("%d",&x);
        printf("%d\n",x);
        y=y+1;
        jml=jml+x;
        if (x==9999)
        {
            jml=jml-9999;
            y=y-1;
            break;
        }

    }
    printf("\njumlah bilangan = %d\n",jml);
    printf("\njumlah cacah angka = %d",y);

    return 0;
}
