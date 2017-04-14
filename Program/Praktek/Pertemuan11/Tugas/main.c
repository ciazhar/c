#include <stdio.h>
#include <stdlib.h>
#include "tanggal.h"


int main()
{
    int d1,m1,y1,d2,m2,y2;
    printf("Masukkan Tanggal pertama (D M Y): "); scanf("%d %d %d",&d1,&m1,&y1);
    printf("Masukkan Tanggal kedua (D M Y)\t: "); scanf("%d %d %d",&d2,&m2,&y2);

    HitungSelisihHari(d1,m1,y1,d2,m2,y2);

    return 0;
}
