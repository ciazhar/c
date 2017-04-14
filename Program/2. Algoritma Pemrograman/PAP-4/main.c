#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nomor 1 : Menghilangkan semua index array yang bernilai 0\n");
    ///Kamus
    int arr1[]={3,5,38,0,44,47};
    int arr2[]={3,0,44,38,0,5,47};
    int arr3[]={2,15,0,0,0,26,27,36};
    int arr4[]={15,36,27,0,0,2,26};
    int i;
    ///Algoritma
    compressArray(arr1);
    printf("arr1[] = ");
    for(i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
    compressArray(arr2);
    printf("\narr2[] = ");
    for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    compressArray(arr3);
    printf("\narr3[] = ");
    for(i=0;i<5;i++){
        printf("%d ",arr3[i]);
    }
    compressArray(arr4);
    printf("\narr4[] = ");
    for(i=0;i<5;i++){
        printf("%d ",arr4[i]);
    }
    printf("\n");

    printf("\nNomor 2 : Selection Sort Tanpa pengecekan urut\n");
    ///Kamus
    int arrr1[]={3,44,38,5,47};
    int arrr2[]={15,36,27,2,26};
    ///Algoritma
    selectionSort1(arrr1);
    printf("\n");
    selectionSort1(arrr2);

    printf("\nNomor 3 : Selection Sort dengan pengecekan urut\n");
    ///Kamus
    int arrrr1[]={3,44,38,5,47};
    int arrrr2[]={15,36,27,2,26};
    ///Algoritma
    selectionSort2(arrrr1);
    printf("\n");
    selectionSort2(arrrr2);

    printf("\nNomor 4 : Mencari median suatu array integer\n");
    ///Kamus
    int a_r1[]={3,44,38,5,47};
    int a_r2[]={15,36,27,2,26};
    ///Algoritma
    printf("Nilai median arr1: %d",getMedian(a_r1));
    printf("\nNilai median arr2: %d",getMedian(a_r2));

}
