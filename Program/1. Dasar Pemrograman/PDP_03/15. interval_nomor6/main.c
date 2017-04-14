#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
printf("Masukan nilai n :"); scanf("%d",&n);

        if (((n>3)&&(n<=15))||((n>=22)&&(n<32)))
        {
            printf("\n( %d>3 )&&( %d<=15 ) || ( %d>=22 )&&( %d<32 ) adalah  %s\n",n,n,n,n,((n>3)&&(n<=15))||((n>=22)&&(n<32))?"true":"false");
        }
        else
        {
            printf("\n( %d>3 )&&( %d<=15 ) || ( %d>=22 )&&( %d<32 ) adalah  %s\n",n,n,n,n,((n>3)&&(n<=15))||((n>=22)&&(n<32))?"true":"false");
        }

    return 0;
}

