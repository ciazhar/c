/*
    Muhammad Hafidz
    A11.2015.09000
*/

#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomor 1 : swap menggunakan pointer\n");
    ///Kamus
    int a=5,b=6,c=7,d=8;
    int e=10,f=11,g=12,h=13;

    ///Deskripsi
    swapValue(&a,&b);
    printf("swapValue(&a,&b); -> ");
    printf("a == %d; , ",a);
    printf("b == %d;",b);
    printf("\n");
    swapValue(&c,&d);
    printf("swapValue(&c,&d); -> ");
    printf("c == %d; , ",c);
    printf("d == %d;",d);
    printf("\n");
    swapValue(&e,&f);
    printf("swapValue(&e,&f); -> ");
    printf("e == %d; , ",e);
    printf("f == %d;",f);
    printf("\n");
    swapValue(&g,&h);
    printf("swapValue(&g,&h); -> ");
    printf("g == %d; , ",g);
    printf("h == %d;",h);
    printf("\n");

    printf("\nNomor2 : Penjumlahan dengan pointer\n");
    ///Deskripsi
    changeValue(&a,5,9);
    printf("changeValue(&a,5,9) -> ");
    printf("a == %d\n",a);
    changeValue(&b,7,7);
    printf("changeValue(&b,7,7) -> ");
    printf("b == %d\n",b);
    changeValue(&c,6,5);
    printf("changeValue(&c,6,5) -> ");
    printf("c == %d\n",c);
    changeValue(&d,2,9);
    printf("changeValue(&d,2,9) -> ");
    printf("d == %d\n",d);

    printf("\nNomor3 : inialisasi array dan mengisi array sesuai urutan dari 1 - size array\n");
    ///Kamus
    int *arr1, *arr2, *arr3, *arr4;
    arr1=arr2=arr3=arr4=malloc(sizeof(*arr1));
    ///Deskripsi
    printf("initDynArray(&arr1,6); -> arr1 = {");
    initDynArray(&arr1,6);
    printf("}\n");
    printf("initDynArray(&arr2,4); -> arr2 = {");
    initDynArray(&arr2,4);
    printf("}\n");
    printf("initDynArray(&arr3,5); -> arr3 = {");
    initDynArray(&arr3,5);
    printf("}\n");
    printf("initDynArray(&arr4,3); -> arr4 = {");
    initDynArray(&arr4,3);
    printf("}\n");

    printf("\nNomor4 : mencetak nilai array\n");
    ///Kamus
    int ar1[]={1,2,3,4,5};
    int ar2[]={6,7,8,9,10};
    int ar3[]={21,22,23,24,25};
    int ar4[]={31,32,33,34,35};
    ///Deskripsi
    printf("printArray(&ar1,5);\n");
    printArray(&ar1,5);
    printf("\n");
    printf("printArray(&ar2,5);\n");
    printArray(&ar2,5);
    printf("\n");
    printf("printArray(&ar3,5);\n");
    printArray(&ar3,5);
    printf("\n");
    printf("printArray(&ar4,5);\n");
    printArray(&ar4,5);
    printf("\n");

    printf("\nNomor5 : mencetak rata-rata array\n");
    ///Kamus
    float aa,bb,cc,dd;
    int arrr1[]={1,2,3,4,5};
    int arrr2[]={6,7,8,9,10};
    int arrr3[]={11,12,13,14,15};
    int arrr4[]={16,17,18,19,20};
    ///Deskripsi
    printf("putAverage(&a,{1,2,3,4,5},5);\t\t-> a == ");
    putAverage(&aa,arrr1,5);
    printf("putAverage(&b,{6,7,8,9,10},5);\t\t-> b == ");
    putAverage(&bb,arrr2,5);
    printf("putAverage(&c,{11,12,13,14,15},5);\t-> c == ");
    putAverage(&cc,arrr3,5);
    printf("putAverage(&d,{16,17,18,19,20},5);\t-> d == ");
    putAverage(&dd,arrr4,5);
}
