#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nested For\n");

    int i,j,m,n;

    printf("Nilai Berhenti: "); scanf("%d",&m);
    printf("Loop Berhenti : "); scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Loop Ke-%d\n",i);

        for(j=1;j<=m;j++)
        {
            printf("%d\n",j);
        }
    }



    return 0;
}
