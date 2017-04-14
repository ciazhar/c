/*
    Nama    : Muhammad Hafidz
    NIM     : A11.2015.09000
*/

#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomor 1 : Penjumlahan\n");
    printf(" => %d\n",addRec(5,6));
    printf(" => %d\n",addRec(9,3));
    printf(" => %d\n",addRec(7,4));
    printf(" => %d\n",addRec(8,1));
    printf("\nNomor 2 : Pengurangan\n");
    printf(" => %d\n",subRec(9,2));
    printf(" => %d\n",subRec(7,4));
    printf(" => %d\n",subRec(2,5));
    printf(" => %d\n",subRec(5,5));
    printf("\nNomor 3 : Perkalian\n");
    printf(" => %d\n",mulRec(9,2));
    printf(" => %d\n",mulRec(7,4));
    printf(" => %d\n",mulRec(2,5));
    printf(" => %d\n",mulRec(5,5));
    printf("\nNomor 4 : Pembagian\n");
    printf(" => %d\n",divRec(20,5));
    printf(" => %d\n",divRec(30,5));
    printf("\nNomor 5 : Pemangkatan\n");
    printf(" => %d\n",powRec(2,5));
    printf(" => %d\n",powRec(5,2));
    printf(" => %d\n",powRec(6,4));
    printf(" => %d\n",powRec(5,5));
    printf("\nNomor 6 : Faktorial\n");
    printf(" => %d\n",factorial(5));
    printf(" => %d\n",factorial(7));
    printf("\nNomor 7 : Fibonacci\n");
    fibonacci(5);
    printf("\n");
    fibonacci(8);
    printf("\n");
    fibonacci(10);
    printf("\n");
    fibonacci(2);
    printf("\n");
    printf("\nNomor 8 : Penjumlahan Array\n");
    int data1[]={2,5,7,9,12,16,NULL};
    int data2[]={3,5,6,8,1,8,NULL};
    int data3[]={5,82,33,55,22,NULL};
    int data4[]={9,8,7,6,5,4,3,2,1,NULL};
    printf("%d\n",sumTransversal(data1,0));
    printf("%d\n",sumTransversal(data2,0));
    printf("%d\n",sumTransversal(data3,0));
    printf("%d",sumTransversal(data4,0));
}
