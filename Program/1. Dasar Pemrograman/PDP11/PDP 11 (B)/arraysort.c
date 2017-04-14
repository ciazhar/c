#include "arraysort.h"
#include "boolean.h"

void TulisTabelInt(DataInt d,int n)
{
    printf("(");
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d", d[i]);
    }
    printf(")\n");
}

void BacaTabelInt(DataInt dataX,int n)
{
    int Ni = 20;
    if (n<=Ni)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Isi Elemen Interger ke-%d:",i+1);
            scanf("%d",&dataX[i]);
        }
    }
    else
    {
        exit(1);
    }
}

void TulisTabelInt2(DataInt dataX,int Ni)
{
    printf("(");
    int i;
    for(i=0;i<Ni;i++)
    {
        printf("%d ", dataX[i]);
    }
    printf(")\n");
}

void PMin1(DataInt d, int n,int *MIN)
{
    *MIN = d[0];
    int i;
    for (i=0;i<n;i++)
    {
        if(d[i] < *MIN)
        {
            *MIN = d[i];
        }
    }
}

void PMax1(DataInt d, int n,int *MAX)
{

}

void TulisTabelInt3(DataInt d,int n)
{
    int j = 0;
    int i,x;
	while(j<=n-2)
	{
		i=0;
		while(i<=n-2 - j)
		{
			if (d[i] > d[i+1])
			{
				x = d[i];
				d[i] = d[i+1];
				d[i+1] = x;
			}
			i++;
		}
		j++;
	}
	printf("(");
	for (i=0; i<= n-1; i++)
    printf("%d ", d[i]);
    printf(")\n");
}
