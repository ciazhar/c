#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,N,sum;

    printf("masukan N="); scanf("%d",&N);
    sum=0;

    for (i=2;i<=N;i+=2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("jumlahnya %d\n",sum);
    return 0;
}
