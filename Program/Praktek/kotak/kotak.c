#include<stdio.h>
#include<stdlib.h>

int p,l;
int i=1,j=1;
int main()
{
    scanf(" %d %d",&p,&l);
    for(i=1;i<=p;i++)
    {
        printf("*");
    }
    printf("\n");
    i=1;
    for(j=1;j<=l-2;j++)
    {
        printf("*");
        for(i=1;i<=p-2;i++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    i=1;
    for(i=1;i<=p;i++)
    {
        printf("*");
    }
}
