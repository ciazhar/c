#include <stdio.h>
#include <stdlib.h>

///Tipe data dan variabel
///Muhammad Hafidz
///A11.2015.09000
///22-09-2015

///kamus
int sisi, luas;
int keliling;

float alas, tinggi, luas_segitiga;

///deskripsi
int main()
{
//PERSEGI
    ///deklarasi
    sisi = 5;
    printf("nilai sisi : %d\n", sisi);

    ///proses
    keliling = 4*sisi;
    luas = sisi*sisi;

    ///output
    printf("nilai keliling : %d\nnilai luas : %d\n", keliling, luas);

//SEGITIGA
    ///deklarasi
    alas = 3;
    tinggi = 5;

    ///proses
    luas_segitiga = 0.5*alas*tinggi;

    ///output
    printf("alas : %.2f\ntinggi : %.2f\nluas_segitiga : %.2f", alas, tinggi, luas_segitiga);


}

