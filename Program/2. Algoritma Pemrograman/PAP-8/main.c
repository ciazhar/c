/*
    Nama    : Muhammad Hafidz
    NIM     : A11.2015.09000
*/

#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    ///Kamus

    int data1[]={12,15,1,23,44,21,30};
    int data2[]={19,16,22,15,9,28,11};
    int data3[]={41,29,9,14,6,5,22};


    ///Deskripsi

    printf("\nNomor 1 : Menentukan nilai min\n");
    printf("min2(5,7)=%d\n",min2(5,7));
    printf("min2(12,3)=%d\n",min2(12,3));
    printf("min2(4,9)=%d\n",min2(4,9));
    printf("min2(9,2)=%d\n",min2(9,2));

    printf("\nNomor 2 : Menentukan nilai max\n");
    printf("max2(5,7)=%d\n",max2(5,7));
    printf("max2(12,3)=%d\n",max2(12,3));
    printf("max2(4,9)=%d\n",max2(4,9));
    printf("max2(9,2)=%d\n",max2(9,2));

    printf("\nNomor 3 : Menentukan nilai max pada array dengan rekursif\n");
    printf("recMax(data1,0,6)=%d\n",recMax(data1,0,6));
    printf("recMax(data2,0,6)=%d\n",recMax(data2,0,6));
    printf("recMax(data3,0,6)=%d\n",recMax(data3,0,6));

    printf("\nNomor 4 : Menentukan nilai min pada array dengan rekursif\n");
    printf("recMin(data1,0,6)=%d\n",recMin(data1,0,6));
    printf("recMin(data2,0,6)=%d\n",recMin(data2,0,6));
    printf("recMin(data3,0,6)=%d\n",recMin(data3,0,6));

    printf("\nNomor 5 : Mencetak isi array dengan rekursif\n");
    printf("recPrintAll(data1,0,6)\n");
    recPrintAll(data1,0,6);
    printf("recPrintAll(data2,0,6)\n");
    recPrintAll(data2,0,6);
    printf("recPrintAll(data3,0,6)\n");
    recPrintAll(data3,0,6);

    printf("\nNomor 6 : Mencari rata-rata array dengan rekursif\n");
    printf("recMean(data1,0,6)= ");recMean(data1,0,6);
    printf("\nrecMean(data2,0,6)= ");recMean(data2,0,6);
    printf("\nrecMean(data3,0,6)= ");recMean(data3,0,6);
    printf("\n");

    printf("\nNomor 7 : Mengurutkan array menggunakan selection sort dengan rekursif\n");
    printf("recSelectionSort(data1,0,6)\n");
    recSelectionSort(data1,6);
    printf("recSelectionSort(data2,0,6)\n");
    recSelectionSort(data2,6);
    printf("recSelectionSort(data3,0,6)\n");
    recSelectionSort(data3,6);

    return 0;
}
