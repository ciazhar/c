//judul:break
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
int x;

//deskripsi:
main()
{
    printf("program ini akan berhenti jika anda menginputkan angka -99 \n");
    for(x!=-99;;x++)
    {
        printf("masukkan nilai anda=");scanf("%d",& x);
        if (x==-99)
        {
            break;
        }
    }
    return 0;
}
