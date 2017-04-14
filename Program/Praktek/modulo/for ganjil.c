#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,b;

    printf("masukan batas akhir : "); scanf("%d",&b);

    for (a=1;a<=b;a+=2)
    {
        printf("%d\n",a);
    }
}
