#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,jum;
    float rata;
    jum=0;
    for(i=1;i<=20;i++){ printf("%d\n",i);jum=i+jum;}
    printf("jumlah    = %d\n",jum);
    rata=jum/i;
    printf("rata-rata = %.2f",rata);
    return 0;
}
