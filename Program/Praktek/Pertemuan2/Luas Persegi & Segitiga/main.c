#include <stdio.h>
#include <stdlib.h>

   ///judul Program Penghitung Luas & Keliling Persegi
   ///oleh Hussein Faisol
   ///22-9-2015
   #include<stdio.h>

   ///kamus
   int sisi,luas;
   int keliling;

   float alas,tinggi,luas_segitiga,keliling_segitiga;

   ///deskripsi
   int main() {

    ///PERSEGI
        sisi = 5;
        printf("nilai sisi: %d\n",sisi);

        keliling = 4*sisi;
        luas = sisi*sisi;

        printf("nilai keliling : %d\nnilai luas : %d\n",keliling,luas);

    ///SEGITIGA
        alas = 3;
        tinggi = 5;
        printf("nilai alas: %.2f\nnilai tinggi: %.2f\n",alas,tinggi);

        luas_segitiga = 0.5*alas*tinggi;
        keliling_segitiga = ((0.5*alas)*(0.5*alas)+tinggi*tinggi);
        printf("nilai luas segitiga: %.2f\nnilai keliling segitiga: %.2f",luas_segitiga,keliling_segitiga);

    return 0;
}
