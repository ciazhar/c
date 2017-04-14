#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int i,j,stop;

    printf("Input Stop : ");scanf("%d",&stop);

///Naik Keatas
    for(i=1;i<=stop;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

///Turun Kebawah
     for(i=1;i<=stop;i++)
    {
        for(j=i;j<=stop;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
