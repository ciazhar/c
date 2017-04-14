#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i,j,n,m; //n hari ujiannya, m berapa banyak ujian
    char ujian[10];
    printf("berapa hari ujian? ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("hari ke %d", i);
        printf("\nhari ke-%d ujiannya berapa? ");
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
          printf("hari ke-%d ujiannya = ",i);
          fflush(stdin);
          scanf("%s",&ujian);
        }
    }
}
