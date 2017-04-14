#include <stdio.h>
#include <stdlib.h>

///ENERGI POTENSIAL
int main()
{
///KAMUS
    float m,g,h,EP;
///ALGORITMA
    printf("Masukkan Massa Benda (kg)\t\t\t: ");scanf("%f",&m);
    printf("Masukkan Gravitasi (m/s^2)\t\t\t: ");scanf("%f",&g);
    printf("Masukkan Tinggi Benda Dari Permukaan Tanah (m)\t: ");scanf("%f",&h);

    EP=m*g*h;

    printf("\nEnergi Potensial\t\t\t\t: %.2f\n",EP);

    return 0;
}
