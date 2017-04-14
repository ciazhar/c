#include <stdio.h>
int main ()
{
    int i;

    do
    {
        printf("Masukkan nilai Anda = ",i);scanf("%d",&i);
        i+=0;

        if (i==1)
        {
            printf ("adalah one\n");
        }

        else if (i==2)
        {
            printf ("adalah two\n");
        }

        else if (i==3)
        {
            printf ("adalah three\n");
        }

        else if (i==4)
        {
            printf ("adalah four\n");
        }

        else if (i==5)
        {
            printf ("adalah five\n");
        }

        else if (i==6)
        {
            printf ("adalah six\n");
        }

        else if (i==7)
        {
            printf ("adalah seven\n");
        }

        else if (i==8)
        {
            printf ("adalah eight\n");
        }
        else if (i==9)
        {
            printf ("adalah nine\n");
        }

    }
    while (i<=9);
    return 0;
}
