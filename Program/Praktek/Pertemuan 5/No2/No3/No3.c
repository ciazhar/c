#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alas1,alas2,tinggi1,tinggi2,luas1,luas2,luas3;

    printf("masukan alas segitiga1: ");
    scanf("%f", &alas1);
    printf("masukan alas segitiga2: ");
    scanf("%f", &alas2);
    printf("\n");

    printf("masukan tinggi segitiga1: ");
    scanf("%f", &tinggi1);
    printf("masukan tinggi segitiga2: ");
    scanf("%f", &tinggi2);
    printf("\n");

    luas1=alas1*tinggi1/2;
    printf("luas segitiga 1 adalah %0.2f", luas1);
    printf("\n");

    luas2=alas2*tinggi2/2;
    printf("luas segitiga 2 adalah %0.2f", luas2);
    printf("\n");

    luas3=luas2-luas1;
    printf("selisih segitiga adalah %0.2f", luas3);
}
