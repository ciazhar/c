#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop Persegi\n");

    int i,j,sisi;

    printf("Masukkan Sisi : "); scanf("%d",&sisi);
    for(i=1;i<=sisi;i++)
    {
        for(j=1;j<=sisi;j++)
        {
            printf("# ");
        }
        printf("\n");
    }



    return 0;
}
