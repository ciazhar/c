#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,n,i;
    sum = 0; i=0;
    printf("Program ini akan berhenti bila menginputkan angka 9999\n\n");
    printf("input bilangan : "); scanf("%d",&n);

    while (n!=9999)
    {printf("%d",n); sum= sum + n;i=i+1;
    printf("\ninput bilangan : "); scanf("%d",&n);}
    printf("jumlah angka : %d",sum);
    printf("\njumalah cacah angka : %d", i);

    return 0;
}
