#include <stdio.h>
#include <stdlib.h>

main ()
{
    int pem1,pem2;
    printf("input pemain1 :"); scanf("%d",&pem1);
    printf("input pemain2 :"); scanf("%d",&pem2);

    if (pem1==1)
    {
        if (pem2==1)
        {
            printf("seri");
        }
        else if(pem2==2)
        {
            printf("pemain1 kalah");
        }
        else if (pem2==3)
        {
            printf("pemain1 menang");
        }
        else
        {
            printf("salah input");
        }
    }

    else if (pem1==2)
    {
        if (pem2==1)
        {
            printf("pemain1 menang");
        }
        else if(pem2==2)
        {
            printf("seri");
        }
        else if (pem2==3)
        {
            printf("pemain1 kalah");
        }
        else
        {
            printf("salah input");
        }
    }

    else if (pem1==2)
    {
        if (pem2==1)
        {
            printf("pemain1 menang");
        }
        else if(pem2==2)
        {
            printf("seri");
        }
        else if (pem2==3)
        {
            printf("pemain1 kalah");
        }
        else
        {
            printf("salah input");
        }
    }

    else if (pem1==3)
    {
        if (pem2==1)
        {
            printf("pemain1 kalah");
        }
        else if(pem2==2)
        {
            printf("pemain1 menang");
        }
        else if (pem2==3)
        {
            printf("seri");
        }
        else
        {
            printf("salah input");
        }
    }

    else if (pem2==1)
    {
        if (pem1==1)
        {
            printf("seri");
        }
        else if(pem1==2)
        {
            printf("pemain1 menang");
        }
        else if (pem1==3)
        {
            printf("pemain1 kalah");
        }
        else
        {
            printf("salah input");
        }
    }

    else if (pem2==2)
    {
        if (pem1==1)
        {
            printf("pemain 1 kalah");
        }
        else if(pem1==2)
        {
            printf("seri");
        }
        else if (pem1==3)
        {
            printf("pemain1 menang");
        }
        else
        {
            printf("salah input");
        }
    }

        else if (pem2==3)
        {

        if (pem1==1)
        {
            printf("pemain1 menang");
        }
        else if(pem1==2)
        {
            printf("pemain1 kalah");
        }
        else if (pem1==3)
        {
            printf("seri");
        }
        else
        {
            printf("salah input");
        }
    }
    else
    {
        printf("salah input");
    }
    return 0;

}
