#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    int t;
    float phi=3.14;
    float Volume;

    printf("Aplikasi Penghitung Volume Tabung\n");
    printf("Masukkan jari-jari (r): ");
    scanf("%d", &r);
    printf("Masukkan tinggi (t): ");
    scanf("%d", &t);

    Volume = phi*r*r*t;
    printf("Volume= %f",Volume);

    return 0;
}
