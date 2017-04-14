#include <stdio.h>
#include <stdlib.h>

///MUHAMMAD HAFIDZ
///A11.2015.09000
///MENGHITUNG ARUS LISTRIK

int main()
{
    //KAMUS
    float V; //Tegangan Listrik (Volt)
    float I; //Arus Listrik (Ampere)
    float R; //Hambatan (Ohm)

    //PROSES
    printf("Masukkan Besar Arus dan Hambatan : ");
    scanf("%f %f", &I, &R);
    V=I*R;

    //OUTPUT
    printf("Besar Tegangan Listrik : %2f", V);
}
