#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,n;
    printf("input : ");scanf("%d",&n);
    for(j=1;j<=10;j++){printf("%d x %d = %d\n",j,n,j*n);}

    return 0;
}
