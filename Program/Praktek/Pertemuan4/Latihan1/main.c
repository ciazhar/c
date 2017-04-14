#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int a, b, c;
    int total;

    //ALGORITMA
    printf("Masukkan Nilai a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Nilai a: %d\nNilai b: %d\nNilai c: %d\n",a,b,c);
    total=a+b+c;
    printf ("Total = %d",total);
    return 0;
}
