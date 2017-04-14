#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i,j;
    int sum = 0;
    i=1;
    while(i<=11)
    {
        int counter=0;
        j = 1;

        while(j<=i)
        {
            if(i % j == 0)
            {
                ++counter;
            }
            ++j;
        }

        if(counter==2)
        {
            printf(" %d ",i);
            sum+=i;
        }
        ++i;
    }
    printf("\ntotal = %d",sum);

}
