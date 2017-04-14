#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,b,c;
    printf("masukan bil. 1 :"); scanf("%d",&a);
    printf("masukan bil. 2 :"); scanf("%d",&b);
    printf("masukan bil. 3 :"); scanf("%d",&c);

    if ((a==b) || (a==c))
    {
        printf("ADA");
    }

    else if ((b==a) || (b==c))
    {
        printf("ADA");
    }

    else if ((c==a) || (c==b))
    {
        printf("ADA");
    }
    else
    {
        printf("Tidak Ada");
    }
    return 0;
}
