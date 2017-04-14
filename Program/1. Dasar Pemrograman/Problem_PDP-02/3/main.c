#include <stdio.h>
#include <stdlib.h>

///MUHAMMAD HAFIDZ
///A11.2015.09000
///MENGHITUNG LUAS TRAPESIUM

int main()
{
    //KAMUS
    float L; //Luas Trapesium
    float a; //Sisi Sejajar 1
    float b; //Sisi Sejajar 2
    float h; //Tinggi Trapesium

    //PROSES
    printf("Masukkan panjang sisi sejajar dan tinggi trapesium : ");
    scanf("%f %f %f", &a, &b, &h);
    L=(a+b)*h/2;

    //OUTPUT
    printf("Luas Trapesium : %0.2f", L);
}
