#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a,bil=0;

    for(a!=69;;a++)
    {
        scanf("%d",&a);

        if (a==69)
        {
            break;
        }
        else if (a!=69)
        {
            bil=bil+a;
            printf("%d   ",bil);
        }
    }

}
