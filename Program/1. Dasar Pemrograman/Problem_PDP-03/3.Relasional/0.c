#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    int n;
    ///Proses
    printf("masukkan n:");
    scanf("%d", &n);

    printf("3<%d<10 adalah %s",n,((n>3)&&(n<10))?"true":"false");

}
