#include <stdio.h>
#include <stdlib.h>
#include "rumus.h"

///Muhammad Hafidz
///A11.2015.09000
///A11.4210
///Nomer Komputer 8
///Paket Soal B

int main()
{
    printf("Nomor 1 : Menentukan sebuah bilangan termasuk bilangan prima atau tidak");
    ///Kamus
    int bil;
    ///Algoritma
    printf("\nMasukkan Bilangan : ");scanf("%d",&bil);
    printf("Bilangan tersebut : %d\n",isPrima(bil));

    printf("\nNomor 2 : Mengurutkan data integer dan membagi 2");
    ///Kamus
    int arr[100]={};
    int bats;
    int i;
    ///Algoritma
    printf("\nMasukkan jumlah data : ");scanf("%d",&bats);
    for(i=0;i<bats;i++){
        printf("Masukkan data ke %d : ",i+1);scanf("%d",&arr[i]);
    }
    arrayUrutdiv2(arr,bats);

}
