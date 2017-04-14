#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uts,uas,tgs,utsp,uasp,tgsp,nilai;
    printf ("nilai uts :" );
    scanf  ("%d",&uts);
    printf ("nilai uas :");
    scanf ("%d",&uas);
    printf ("nilai tgs :");
    scanf ("%d",&tgs);

    utsp=uts*10/100;
    uasp=uas*10/100;
    tgsp=tgs*30/100;
    nilai=utsp+uasp+tgsp;

    printf ("\n nilai uts =%d \n",utsp);
    printf ("nilai uas =%d \n",uasp);
    printf ("nilai tgs =%d \n",tgsp);

    if ((nilai>=20)&&(nilai<=50))
    {
        printf("lulus, ");

        if ((nilai>=40)&&(nilai<=50))
        {
            printf ("grade a");
        }

        else if ((nilai>=30)&&(nilai<=39))
        {
            printf ("grade b");
        }

        else
        {
            printf ("grade c");
        }
    }
    else if ((nilai>=0)&&(nilai<=19))
    {
        printf ("tidak lulus, ");

        if ((nilai>=10)&&(nilai<=19))
        {
           printf ("grade d") ;
        }
        else
        {
            printf ("grade e");
        }

    }

    else
    {
        printf("salah input");
    }

    return 0;

}
