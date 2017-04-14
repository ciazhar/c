#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,sum;
    float av;
    sum=0;
    for (i=1;i<=20;i++)

    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("jumlahnya = %d\n",sum);
    av= sum/i;
    printf("Rata-rata = %0.2f",av);
    return 0;
}
