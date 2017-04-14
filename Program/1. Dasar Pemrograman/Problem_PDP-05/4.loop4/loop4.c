#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int i;
    int jml=0;
    float rata;

    ///Proses
    for (i=1;i<=20;i++)
    {
        printf("%d\n",i);
        jml=jml+i;
        rata=jml/i;
    }

    printf("jumlah\t\t= %d\n",jml);
    printf("rata-rata\t= %0.2f\n",rata);
}
