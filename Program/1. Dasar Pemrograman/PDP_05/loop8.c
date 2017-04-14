//judul:algoritma
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x,y;
y=0;

//deskripsi:
main()
{
    for (x!=9999;;x++)
    {
        printf("Masukkan nilai Anda = ",x);scanf("%d",&x);
        printf("%d\n",x);
        y=y+1;

        if (x==9999)
        {
            y=y-1;
            break;
        }

    }
    printf("\njumlah bilangan = %d",y);

    return 0;
}
