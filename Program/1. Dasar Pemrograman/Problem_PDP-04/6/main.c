#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int nilai;
    char nhuruf;

    ///Judul
    printf("Program untuk mengkonversi nilai kedalam huruf\n");

    ///Input
    printf("Masukkan Nilai : ");
    scanf("%d",&nilai);

    ///Proses
    if (nilai>=0&&nilai<=20) {nhuruf='E';}
        else if (nilai>=21&&nilai<=40) {nhuruf='D';}
            else if (nilai>=41&&nilai<=60) {nhuruf='C';}
                else if (nilai>=61&&nilai<=80) {nhuruf='B';}
                    else if (nilai>80&&nilai<=100) {nhuruf='A';}
                        else {printf("Salah Input Bro :v ");}

    ///Output
    printf("Konversi Angka ke Huruf dari %d adalah %c",nilai,nhuruf);

}
