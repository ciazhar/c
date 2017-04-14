#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
printf("Masukan nilai n :"); scanf("%d",&n);

        if ((n>=5)&&(n<25))
        {
            printf("\n( %d>=5 ) && ( %d<25 ) adalah  %s\n",n,n,((n>=5) && (n<25))?"true":"false");
        }
        else
        {
            printf("\n( %d>=5 ) && ( %d<25 ) adalah  %s\n",n,n,((n>=5) && (n<25))?"true":"false");
        }

    return 0;
}
