//judul:mencetak rata-rata
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"

//kamus:
int x;
int jml=0;
float rata;
//deskripsi:
main()
{
    for (x=1;x<=20;x++)
    {
        printf("%d \n",x);
        jml=jml+x;
    }
    printf("jumlahnya %d \n",jml);
    rata=jml/x;
    printf("rata-rata adalah %.2f \n ",rata);
    return 0;
}
