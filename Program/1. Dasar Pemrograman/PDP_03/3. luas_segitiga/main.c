#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alas,tinggi;
    float L;

    printf("Luas Segitiga\n\n");
    printf("Masukan nilai alas  : ");
    scanf("%f",&alas);
    printf("Masukan nilai tinggi: ");
    scanf("%f",&tinggi);

    L=0.5*alas*tinggi;

    printf("\n\nLuas segitiga adalah : %0.2f\n\n",L);

    return 0;
}
