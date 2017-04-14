#include <stdio.h>
#include <stdlib.h>

main ()
{
    int sum=0,i=0;
    for(;;i++)
    {
        if (i<5)
        {
            printf("%d\n",i);
            sum++;
        }
        else
        {
            break;
        }
    }
    printf("%d UDINUS\n",sum);
    return 0;
}
