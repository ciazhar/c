#include <stdio.h>
#include <stdlib.h>

///Kamus
int sisi,luas,keliling;
float tinggi,alas,luas_segitiga;

///Deskripsi
int main()
{
///PERSEGI
    printf("Programm Menghitung Luas & Keliling Persegi\n");
    printf("Nilai Sisi: ",sisi);
    scanf("%d",&sisi);

luas = sisi*sisi;
keliling = 4*sisi;

    printf("Luas: %d\nKeliling: %d\n\n",luas,keliling);

printf("Press Any Key To Continue");
getch();
system("cls");

///SEGITIGA
    printf("Programm Menghitung Luas Segitiga\n");

    ///INPUT
    printf("Nilai Tinggi: ",tinggi);
    scanf("%f",&tinggi);
    printf("Nilai Alas: ",alas);
    scanf("%f",&alas);

    ///PROSES
    luas_segitiga = 0.5*alas*tinggi;

    ///OUTPUT
    printf("Luas Segitiga: %.2f\n",luas_segitiga);
    return 0;
}
