#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i;
    for (i=0;i<=5;i++)
    {
        printf("Angka %d\n",i);
    }
    break;

    int angka1, angka2, hasil=1;

    printf("Masukkan 2 Angka (x^n)= "); scanf("%d %d",&angka1,&angka2);
    int i;
    for (i=0; i < angka2 ;i++)
    {
        hasil *= angka1;
    }
    printf("Hasil dari %d^%d adalah %d",angka1,angka2,hasil);
    return 0;
}
