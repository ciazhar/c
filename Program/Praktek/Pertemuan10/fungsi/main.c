#include <stdio.h>
#include <stdlib.h>

float segitiga(float alas, float tinggi)
{
    int L;
    L=0.5*alas*tinggi;
    return L;
}

int main()
{
    float alas,tinggi;

    printf("Alas : "); scanf("%f",&alas);
    printf("Tinggi : "); scanf("%f",&tinggi);
    printf("Luas = %f",segitiga(alas,tinggi));
    return 0;
}
