#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,b,c,D;
    printf("masukan nilai a :"); scanf("%d",&a);
    printf("masukan nilai b :"); scanf("%d",&b);
    printf("masukan nilai c :"); scanf("%d",&c);

    D=(b*b)-4*(a*c);
    printf("D=%d", D);

    if (D>0)
    {
        printf("akar real yang berlainan");
    }
    else if (D==0)
    {
        printf("akar yang sama (kembar), real dan rasional");
    }
    else
    {
        printf("akarnya tidak real/khayal(imajiner)");
    }
    return 0;
}
