#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

main ()
{
    int  a,angka;
    printf("masukan angka : "); scanf("%d",&angka);

    if (angka%2==0)
    {
        for (a=angka;a<=100;a+=angka)
        {
            (printf)("%d ",a);
        }
    }
    else
    {
        printf("GANJIL");
    }
    return 0;
}
