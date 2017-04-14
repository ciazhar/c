#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

int main()
{
    boolean p1=true;boolean q1=false;

    printf("p\ \t q\ \t p^q\n");
    printf("%d \t %d \t %d", p1,q1,p1&&q1);
    printf("\n");

    return 0;
}
