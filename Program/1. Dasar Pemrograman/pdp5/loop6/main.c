#include <stdio.h>
int main ()
{
    int i,max,min;
    for (i!=-99;;i++)
    {
        printf("%d",i);scanf("%d",&i);
        if (i==max)
        {
            max=i;
        }
        if (i!=-99);
           {
               break;
           }
        if(i==min);
         {
            min=i;
        }

    }
    printf("min = %d",min);
    printf("max = %d",max);
    return 0;
}
