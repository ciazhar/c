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
    infotype X;

    printf("create empty\n");
    CreateEmpty(&S, 10);
    printStack(S);
    printf("destruct\n");
    Destruct(&S);
    printStack(S);
    printf("create empty lagi\n");
    CreateEmpty(&S,10);
    printStack(S);
    printf("push\n");
    Push(&S, 29);
    Push(&S, 11);
    Push(&S, 42);
    printStack(S);
    printf("pop\n");
    Pop(&S, X);
    Pop(&S, X);
    printStack(S);
    printf("Apakah stack kosong? %d\n",IsEmpty(S));
    printf("Apakah stack penuh ? %d",IsFull(S));
    return 0;
}
