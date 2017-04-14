#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,bil,hasil=1;
    printf("isi nilai : "); scanf("%d",&bil);

    for(a=bil;a>=1;a--)
    {
        hasil=hasil*a;
    }
    printf ("%d",hasil);

    return 0;
}
