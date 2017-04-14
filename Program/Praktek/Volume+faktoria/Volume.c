#include <stdio.h>
#include <stdlib.h>

void volume(int p, int l, int t, int *hasil);

int main()
{
    int p,l,t,hasil;
    printf("Input Panjang : "); scanf("%d",&p);
    printf("Input Lebar : "); scanf("%d",&l);
    printf("Input tinggi : "); scanf("%d",&t);

    volume(p,l,t,&hasil);

    printf("Hasil = %d",hasil);
    return 0;
}

void volume(int p, int l, int t, int *hasil)
{
     (*hasil)=p*l*t;
}


