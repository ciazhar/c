#include <stdio.h>
#include <stdlib.h>

#include "pustaka.h"
#include "boolean.h"

/*
    Muhammad Hafidz
    A11.2015.09000
*/
int main()
{
    Stack S;
    infotype X=10;
    CreateEmpty(&S, 10);
    //Destruct(&S);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    Push(&S, 10);
    printStack(S);

    Pop(&S, &X);
    printStack(S);

    printf("Apakah stack kosong? %d\n",IsEmpty(S));
    printf("Apakah stack penuh ? %d",IsFull(S));
    return 0;
}
