#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L, r;
    float phi = 3.14;

    printf("Masukan Jari-jari: ");
    scanf("%f",&r);
    printf("\n\n");

    L = phi*r*r;

    printf("Luas Lingkarannya adalah: %0.2f",L);
    printf("\n\n");
    return 0;
}
