#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
printf("Masukan nilai x:"); scanf("%d",&x);

        if ((x<10)&&(x>-1))
        {
            printf("\n(%d<10) && (%d>-1) adalah  %s\n",x,x,((x<10) && (x>-1))?"true":"false");
        }
        else
        {
            printf("\n(%d<10) && (%d>-1) adalah  %s\n",x,x,((x<10) && (x>-1))?"true":"false");
        }

    return 0;
}
