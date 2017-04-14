#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Input: ");
    scanf("%d",&a);

    if (a>0)
    {
        if(a%2==0)
        {
            printf("Positif-Genap");
        }else printf("Positif-Ganjil");
    } else if (a>0)
    {
        if(a%2==0)
        {
            printf("Negatif-Genap");
        }else printf("Negatif-Ganjil");
    } else printf("Itu 0");
    return 0;
}
