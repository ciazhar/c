#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ujian\n");

    int i,j;
    int stoph,makul;
    char ujian[20];

    printf("Berapa Lama Hari Ujian : "); scanf("%d",&stoph);

    for(i=1;i<=stoph;i++)
    {
        printf("\n# Hari Ke-%d #\n",i);
        printf("Berapa Mata Kuliah Ujian : "); scanf("%d",&makul);

        fflush(stdin);
        for (j=1;j<=makul;j++)
        {
            printf("Mata Kuliah Ujian Ke-%d : ",j); gets(ujian);
        }
    }


    return 0;
}
