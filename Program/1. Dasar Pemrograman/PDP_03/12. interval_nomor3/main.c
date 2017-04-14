#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
printf("Masukan nilai n :"); scanf("%d",&n);

        if ((n>3)&&(n<7))
        {
            printf("\n( %d>3 ) && ( %d<7 ) adalah  %s\n",n,n,((n>3) && (n<7))?"true":"false");
        }
        else
        {
            printf("\n( %d>3 ) && ( %d<7 ) adalah  %s\n",n,n,((n>3) && (n<7))?"true":"false");
        }

    return 0;
}
