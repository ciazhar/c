#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int kuantitas,harga,total;

    ///Judul
    printf("Program untuk menghitung diskon dari suatu produk yang dipesan\n");

    ///Input
    printf("Masukkan Jumlah Pembelian Boneka Balon Gajah : ");
    scanf("%d", &kuantitas);

    ///Proses
    if (kuantitas==1) {harga=30;}
        else if (kuantitas>=2&&kuantitas<=10) {harga=25;}
            else if (kuantitas>=11&&kuantitas<=50) {harga=20;}
                else if (kuantitas>50) {harga=10;}
                    else {harga=0;}
    total=kuantitas*harga;

    ///Output
    printf("Jadi Harga Balon Setelah Di Diskon Adalah : Rp.%d",total);


}
