#include <stdio.h>
#include <stdlib.h>

///SEGITIGA
int main()
{
///KAMUS
    int a,b,c;
///ALGORITMA
    printf("Masukkan Panjang Ke-1: ");scanf("%d",&a);
    printf("Masukkan Panjang Ke-2: ");scanf("%d",&b);
    printf("Masukkan Panjang Ke-3: ");scanf("%d",&c);

    if(a>b&&a>c)
    {
        if((b+c)>a)
        printf("\nDapat Membentuk Segitiga\n");
        else printf("\nTidak Dapat Membentuk Segitiga\n");
    }else if(b>a&&b>c)
    {
        if((a+c)>b)
        printf("\nDapat Membentuk Segitiga\n");
        else printf("\nTidak Dapat Membentuk Segitiga\n");
    }else if(c>a&&c>b)
    {
        if((b+a)>c)
        printf("\nDapat Membentuk Segitiga\n");
        else printf("\nTidak Dapat Membentuk Segitiga\n");
    }else printf("\nTidak Dapat Membentuk Segitiga\n");
    return 0;
}
