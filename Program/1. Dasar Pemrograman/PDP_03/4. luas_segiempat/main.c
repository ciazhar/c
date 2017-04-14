#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,l,L;
    printf("Menghitung Luas Segiempat\n\n");
    printf("Masukan panjangnya  : ");
    scanf("%f",&p);
    printf("Masukan lebarnyanya : ");
    scanf("%f",&l);
    printf("\n");

    L   =p*l;
    printf("luas segiempat=%0.2f",L);
    return 0;

}
