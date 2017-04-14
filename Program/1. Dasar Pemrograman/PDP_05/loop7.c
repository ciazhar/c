//judul:algoritma
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x,jml;
jml=0;

//deskripsi:
main()
{
     for (x!=9999;;x++)
    {
        printf("Masukkan nilai Anda = ",x);scanf("%d",&x);
        printf("%d\n",x);
        jml=jml+x;

        if (x==9999)
        {
         jml=jml-9999;
         break;
        }

    }
    printf("\njumlah bilangan = %d",jml);

    return 0;
}
