#include <stdio.h>
#include <stdlib.h>
main ()
{
    int a,b,c,d;
    printf ("masukan nilai = "); scanf ("%d %d %d %d",&a,&b,&c,&d);

    printf ("%d%d%d%d\n",d,c,b,a);
    printf ("%d%d%d\n",c,b,a);
    printf ("%d%d\n",b,a);
    printf ("%d",a);

    return 0;
}
