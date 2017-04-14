#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("input : ");
    scanf("%d", &a);

    if(a>0)
    {
        if (a%2==0)
        {
            printf("Positif - Genap");
        }
        else
        {
            printf("Positif - Ganjil");
        }
    }
    else if (a<0)
    {
        if (a%2==0)
        {
            printf("Negatif - Genap");
        }
        else
        {
            printf("Negatif - Ganjil");
        }
    }
    else
    {
        printf("itu 0");
    }
}
