#include "stack.h"

void createempty (Stack *St)
{
    //TOP(*St) = nil;
    (*St).TOP=nil;

    InfoType P;

    for(P=1;P<=idxmax;P++)
    {
        (*St).T[P] = 0;
    }

}

boolean isempty (Stack St)
{

    return (TOP(St) == nil);
}

boolean isfull (Stack St)
{
    return (TOP(St) == idxmax);
}

void push (Stack *St ,int x)
{

    TOP(*St)++;
    InfoTop(*St) = x;
}

void pop (Stack *St , int *x)
{
    *x = InfoTop(*St);
    InfoTop(*St) = 0;
    TOP(*St)--;
}

int NbElmt (Stack St)
{
    return TOP(St);
}

void printStack(Stack St)
{
    addres P;

    for(P=TOP(St);P>=1;P--)
    {
        printf("|_%d_|\n",St.T[P]);
    }
}

void Show_Pilar(Stack P1, Stack P2, Stack P3)
{
     addres P;

    for(P=3;P>=1;P--)
    {
        printf("|_%d_|\t\t |_%d_|\t\t |_%d_|\n",P1.T[P],P2.T[P],P3.T[P]);
    }
    puts("------\t\t ------\t\t ------");
    puts("Pilar 1\t\t Pilar 2\t Pilar 3\n\n");
}
