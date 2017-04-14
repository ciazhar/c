#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,b,c,d,jum,jum2,jum3,jum4;
    printf ("masukan nilai : "); scanf ("%d %d %d %d",&a,&b,&c,&d);

    if ((a%2==0)&&(b%2==0)&&(c%2==0)&&(d%2==0))
    {
        jum=a+b+c+d;
        printf ("%d",jum);
    }
    else if ((b%2==0)&&(c%2==0)&&(d%2==0))
    {
        jum2=b+c+d;
        printf ("%d",jum2);
    }
    else if ((a%2==0)&&(b%2==0)&&(d%2==0))
    {
        jum3=a+b+d;
        printf ("%d",jum3);
    }
    else if ((a%2==0)&&(b%2==0)&&(c%2==0))
    {
        jum4=a+b+c;
        printf ("%d",jum4);
    }
    return 0;
}
