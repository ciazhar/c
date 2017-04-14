#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L1,L2,L3;
    float r1,r2;
    float phi = 3.14;
    printf("Menghitung selisih Luas Lingkaran : \n");
    printf("\n");
    printf("Masukan Jari-jari untuk mengukur luas 1 : ");
    scanf("%f",&r1);

    printf("Masukan Jari-jari untuk mengukur luas 2 : ");
    scanf("%f",&r2);
    printf("\n");

     L1 = phi*r1*r1;
     L2 = phi*r2*r2;
    if (L1>L2)
    {
        L3=L1-L2;
    }
    else
    {
        L3=L2-L1;

    }


    printf("Luas lingkaran 1: %0.2f\n",L1);
    printf("Luas Lingkaran 2: %0.2f\n",L2);
    printf("selisih Luas Lingkarannya adalah : %0.2f",L3);

    return 0;
}
