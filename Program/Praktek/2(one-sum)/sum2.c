#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=2;
    int N;
    int sum=0;

    printf("masukan N="); scanf("%d",&N);

    do
    {
        printf("%d\n",i);
        sum=sum+i;
        i+=2;
    }

    while (i<=N);



    printf("jumlahnya %d\n",sum);
    return 0;
}
