/*
    Nama                : MHZ
    Tanggal Pembuatan   : 6 April 2016
    Materi              : Binnary Search
*/

#include "pustaka.h"

int main()
{
    int data[]={57,32,75,23,6,84,2};
    n=sizeof(data)/sizeof(int);
    int i,input;
    ///^^^^ temene strlen

    ///printf("Angka 9 ada di indeks ke-%d",BinarySearch(data,9));

    printf("Array Sebelum Sort\n");
    for(i=0;i<n;i++){
        printf("%d, ",data[i]);
    }
    selectionSort1(data);
    printf("\nMasukkan angka : ");scanf("%d",&input);
    BinarySearchProsedur(data,input);
    return 0;
}
