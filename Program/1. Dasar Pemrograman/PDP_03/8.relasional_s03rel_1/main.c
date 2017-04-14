#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =7;

        if ((n>3)&&(n<10))
        {
            printf("(%d>3) && (%d<10) adalah  %s\n",n,n,((n>3) && (n<10))?"true":"false");
        }

    return 0;
}
