#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=100;i++){if(i%2==1) continue; printf("Nilai genap adalah %d \n",i);}
    return 0;
}
