#include <stdio.h>
#include <stdlib.h>
main ()
{
    int a;

    printf ("masukan jumlah pembelian buku:");
    scanf ("%d", &a);

    if ((a>5)&&(a<=10))
    {
        printf ("gratis penghapus 2 biji");
    }
    else if ((a>10)&&(a<=20))
    {
        printf ("gratis bolpen 1 pack");
    }
    else if ((a>20)&&(a<=50))
    {
        printf ("gratis spidol 1 pack");
    }
    else if (a>50)
    {
        printf ("gratis buku 2 pack");
    }
    else
    {
        printf ("salah input");
    }
    return 0;
}
