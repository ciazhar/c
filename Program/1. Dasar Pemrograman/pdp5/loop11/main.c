#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,k;
    for (i=1;i<=7;i++)
    {
        printf("\ninput ke: %d\n",i);

        for (j=1;j<=10;j++)
        {
            k=j*i;
            printf("%d x %d = %d\n",j,i,k);
        }
    }

    return 0;
}
