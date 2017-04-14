#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"

int main ()
{
    Stack S;
    createempty (&S);

    push (&S, 4);
    push (&S, 5);
    push (&S, 10);
    push (&S, 12);

    printf("Kondisi  STACK normal.\n");
    printstack(S);

    return 0;
}
