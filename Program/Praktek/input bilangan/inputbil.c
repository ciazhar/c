#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,bilawal,bilakhir,bilawal1;
    printf ("masukan bilangan awal :");
    scanf ("%d",&bilawal);
    printf ("masukan bilangan akhir :");
    scanf ("%d",&bilakhir);

    bilawal1=bilawal+1;

    for (a=bilawal1;a<=bilakhir;a+=2)
    {
        printf (" %d",a);
    }

    return 0;
}
