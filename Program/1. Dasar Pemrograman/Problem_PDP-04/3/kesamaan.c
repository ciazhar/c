#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int a,b,c;

    ///Judul
    printf("Program untuk mememeriksa ada atau tidaknya masukan yang sama\n");

    ///Input
    printf("Masukkan bilangan ke-1 : ");
    scanf("%d", &a);
    printf("Masukkan bilangan ke-2 : ");
    scanf("%d", &b);
    printf("Masukkan bilangan ke-3 : ");
    scanf("%d", &c);

    ///Proses & Output
    if(a==b||b==c||a==c) {printf("ADA");}
        else {printf("TIDAK ADA");}
}
