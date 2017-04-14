#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    int year;
    char x[255]={};
    int num;
    char txt[50]={};
    int row;

    //printf("Input Tahun = ");scanf("%d",&year);
    //printf("Hasil = %s",isKabisat(year)?"true\n":"false\n");
    //fflush(stdin);

    //printf("\nInput Kata = ");gets(x);
    //printf("Hasil = %d",hitungVokal(x));
    //printf("\n");

    //printf("\nInput Angka = ");scanf("%d",&num);
    //printf("Hasil = %s",checkPrime(num)?"true\n":"false\n");
    //fflush(stdin);

    printf("\nInput Kalimat = ");gets(txt);
    charFrequency(txt);

    //printf("\nInput Row = ");scanf("%d",&row);
    //printDiamond(row);
}
