#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j;
    for (i=1;i<=7;i++)
    {
        printf("Looping yang ke %d\n",i);

        for (j=1;j<=10;j++)
        {
            printf("-angka %d-\n",j);
        }
    }

    return 0;
}
