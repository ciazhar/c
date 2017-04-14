#include<stdio.h>
#include<stdlib.h>
int main()
{   int i,j;
    for( i = 100,j = 1 ;  i >= 1 , j <= 100;  i-- , j++)
        printf( "i=%d dan j=%d\n",i,j );

    return(0);
}
