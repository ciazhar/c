#include <stdio.h>
#include <stdlib.h>

///Muhmammad Hafidz
///A11.2015.09000
int main()
{
    ///Kamus
    float konstanta=2.5;
    float a,b;
    float jumlah;

    ///Judul
    printf("Program untuk menampilkan hasil penjumlahan 2 variabel masukan dan 1 konstanta\n");

    ///Input
    printf("Masukkan bilangan ke-1 : ");
    scanf("%f",&a);
    printf("Masukkan bilangan ke-2 : ");
    scanf("%f",&b);

    ///Proses
    jumlah=a+b+konstanta;

    ///Output
    printf("Jumlah 2 var %0.2f dan %0.2f dengan konstanta %0.2f adalah %0.2f",a,b,konstanta,jumlah);
}
