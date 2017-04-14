#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i[102]; int j;

    for (j = 1; j <= 100; j++) {i[j] = 101-j;};

    for (j = 1; j <= 100; j++) {
    printf ("i=%d dan j=%d \n", i[j], j);};
    return 0;
}
