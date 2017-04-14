#include <stdlib.h>
#include <stdio.h>

main ()
{
    int i,j;

    for (i=1;i<=5;i++)
    {
        printf ("i=%d\n",i);
        for (j=1;j<=5;j++)
               printf ("       j=%d\n", j);
    }
    return 0;
}
