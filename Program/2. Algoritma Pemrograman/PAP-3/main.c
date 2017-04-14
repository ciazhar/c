#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomer 1 : Mengembalikan jumlah inddeks array yang terisi\n");
    ///Kamus
    int a1[10]={};
    int a2[10]={};
    int a3[10]={};
    int a4[10]={};
    ///Algoritma
    a1[0]=1;a1[1]=2;a1[2]=3;a1[3]=4;a1[4]=5;a1[5]=6;
    a2[0]=1;a2[1]=2;a2[2]=3;a2[3]=4;
    a3[0]=2;a3[1]=4;a3[2]=9;a3[3]=5;a3[4]=1;
    a4[0]=2;a4[1]=8;a4[2]=5;
    printf("\nIndeks a1 ada %d",countArray(a1));
    printf("\nIndeks a2 ada %d",countArray(a2));
    printf("\nIndeks a3 ada %d",countArray(a3));
    printf("\nIndeks a4 ada %d",countArray(a4));

    printf("\n\nNomer 2 : Mengembalikan nilai true jika larik integer terurut ascending\n");
    ///Kamus
    int arr1[]={3,5,38,44,47};
    int arr2[]={3,44,38,5,47};
    int arr3[]={2,15,26,27,36};
    int arr4[]={15,36,27,2,26};
    ///Algoritma
    printf("\nUrutan arr1 : %s",cekUrut(arr1)?"true":"false");
    printf("\nUrutan arr2 : %s",cekUrut(arr2)?"true":"false");
    printf("\nUrutan arr3 : %s",cekUrut(arr3)?"true":"false");
    printf("\nUrutan arr4 : %s",cekUrut(arr4)?"true":"false");

    printf("\n\nNomer 3 : Mengurutkan dengan Bubble Sort tanpa cek keurutan\n");
    ///Kamus
    int arrr1[]={3,44,38,5,47};
    int arrr2[]={15,36,27,2,26};
    ///Algoritma
    printf("Alur Buble SOrt Array 1 : \n");
    bubbleSort1(arrr1);
    printf("Alur Buble SOrt Array 2 : \n");
    bubbleSort1(arrr2);

    printf("\n\nNomer 4 : Mengurutkan dengan Bubble Sort dengan cek keurutan\n");
    ///Kamus
    int arrrr1[]={3,44,38,5,47};
    int arrrr2[]={15,36,27,2,26};
    ///Algoritma
    printf("Alur Buble SOrt Array 1 w/ check: \n");
    bubbleSort2(arrrr1);
    printf("Alur Buble SOrt Array 2 w/ check: \n");
    bubbleSort2(arrrr2);
}
