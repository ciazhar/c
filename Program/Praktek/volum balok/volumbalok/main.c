#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,l,t, hasil;
    printf("input panjang");scanf("%d",&p);
    printf("input lebar");scanf("%d",&l);
    printf("input tinggi");scanf("%d",&t);
    hasil=VolumBalok(p,l,t);
    printf("hasil=%d",hasil);
    return 0;
}
