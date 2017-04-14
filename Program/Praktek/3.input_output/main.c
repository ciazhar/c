#include <stdio.h>
#include <stdlib.h>

///Input dan Output
///Muhammad Hafidz
///A11.2015.09000
///22-09-2015


///kamus
int sisi, luas, keliling;
float alas, tinggi, luas_segitiga;

///deskripsi
int main()

{ //PERSEGI
    printf("PERSEGI\n");

    ///input
    printf("input sisi persegi : ");
    scanf("%d", &sisi);

    ///proses
    luas = sisi*sisi;
    keliling = 4*sisi;

    ///output
    printf("sisi : %d\nluas : %d\nkeliling : %d\n\n", sisi, luas, keliling);


printf("Press Any Key To Continue");
getch();
system("cls");


  //SEGITIGA
    printf("SEGITIGA\n");

    ///input
    printf("input alas : ");
    scanf("%f", &alas);
    printf("input tinggi : ");
    scanf("%f", &tinggi);

    ///proses
    luas_segitiga = 0.5*alas*tinggi;

    ///output
    printf("luas segitiga : %.2f", luas_segitiga);
    return 0;
}
