#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int a,b,c,D;
    char Jenis_Akar;

    ///Judul
    printf("Program untuk menentukan jenis akar dari persamaan x=ax^2+bx+c\n");

    ///Input
    printf("Masukkan nilai a : ");
    scanf("%d",&a);
    printf("Masukkan nilai b : ");
    scanf("%d",&b);
    printf("Masukkan nilai c : ");
    scanf("%d",&c);

    ///Proses
    D=b^2-4*a*c;
    if(D>0) {printf("D adalah jenis akar berlainan");}
        else if(D<0) {printf("D adalah jenis akar imajiner");}
            else {printf("D adalah jenis akar kembar");}
}
