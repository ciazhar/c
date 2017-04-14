#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("masukan nilai n: ");
    scanf("%d",&n);

        if ((n>3)&&(n<10))
        {
            printf("(%d>3) && (%d<10) adalah  %s\n",n,n,((n>3) && (n<10))?"true":"false");
        }

    return 0;
}
