#include <stdio.h>
#include <stdlib.h>

main ()
{
    float a,b,c,d;
    float e;

    printf("masukan nilai a:"); scanf("%f", &a);
    printf("masukan nilai b:"); scanf("%f", &b);
    printf("masukan nilai c:"); scanf("%f", &c);
    printf("masukan nilai d:"); scanf("%f", &d);

    e=(a+b+c+d)/4;

    printf("\n\n");

    if (a>b&&a>c&&a>d)
    {
        printf("Nilai Maximum:%0.1f", a);
    }

    else if(b>a&&b>c&&b>d)
    {
        printf("Nilai Maximum:%0.1f", b);
    }

    else if(c>a&&c>b&&c>d)
    {
        printf("Nilai Maximum:%0.1f", c);
    }

    else
    {
        printf("Nilai Maximum:%0.1f", d);
    }

printf("\n\n");

    if (a<b&&a<c&&a,d)
    {
        printf("Nilai Minimum:%0.1f", a);
    }

    else if(b<a&&b<c&&b<d)
    {
        printf("Nilai Minimum:%0.1f", b);
    }

    else if(c<a&&c<b&&c<d)
    {
        printf("Nilai Minimum:%0.1f", c);
    }

    else
    {
        printf("Nilai Minimum:%0.1f", d);
    }

    printf("\n\n");

    printf("Rata2 :%0.2f", e);
}
