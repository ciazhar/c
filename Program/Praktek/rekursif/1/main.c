/**
NIM         = A11.2012.07228
Nama        = ASW
Tempat, Tgl = Lab. Das, 11-5-2016
**/
#include "pustaka.h"
int main()
{
    int x,y;
    int a[]={5,10,7,8,9};
    int n=4;

    printf("Apakah angka 7 ada? %d\n\n", cariX(a,7,n));
    printf("Max array = %d\n", RecMax(a,0,n));
    printf("Max array = %d\n\n", maxRec(a,0,n));

    /*printf("Masukkan angka = ");
    scanf("%d", &x);

    printf("Masukkan pemangkatan = ");
    scanf("%d", &y);
    printf("%d ^ %d = %d\n\n",x,y,pangkat(x,y));
    */
    return 0;
}
