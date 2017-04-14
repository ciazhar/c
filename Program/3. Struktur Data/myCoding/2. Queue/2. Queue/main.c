#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    Queue Q;
    CreateEmpty(&Q,8);
    Add(&Q,6);
    Add(&Q,7);
    Add(&Q,8);
    Add(&Q,9);
    PrintQueue(Q);
    return 0;
}
