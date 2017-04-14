#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int i;

    ///Proses
    for (i=1;i<=100;i++)
    {
        if (i%2==1)
            {continue;}
        else
            {printf("Nilai Genap adalah %d\n",i);}
    }
}
