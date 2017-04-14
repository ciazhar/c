#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
printf("Masukan nilai n :"); scanf("%d",&n);

        if ((n>=5)&&(n<=6))
        {
            printf("\n(%d>=5) && (%d<=6) adalah  %s\n",n,n,((n>=5) && (n<=6))?"true":"false");
        }
        else
        {
            printf("\n(%d>=5) && (%d<=6) adalah  %s\n",n,n,((n>=5) && (n<=6))?"true":"false");
        }

    return 0;
}
