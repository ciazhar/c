#include "stack.h"

void createempty (Stack *St,int sz)
{
    (*St).T = (int *) malloc(sz * sizeof(int));
    TOP(*St) = NIL;
    Size(*St) = sz;
}

boolean isempty (Stack st)
{
    return (TOP(st) == NIL);
}

boolean isfull (Stack st)
{
    return (Size(st)==TOP(st));
}

void poop (Stack *St , int *x)
{
    *x = InfoTop(*St);
    TOP(*St)--;
}

void push (Stack *St , int x)
{
    TOP(*St)++;
    InfoTop(*St) = x;
}

void Dealokasi(Stack *St)
{
    Size(*St) = NIL;
    free((*St).T);
}
