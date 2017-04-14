#include "stack.h"

void createempty (Stack *St)
    {
        TOP(*St) = nil;
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

int pop (Stack *St , int *x)
    {
        *x = InfoTop(*St);
        TOP(*St)--;
    }

void printstack (Stack S)
    {
       int index;
       index = TOP (S);
       printf ("***\n");
       while (index!=0)
        {
            printf("| %d |\n",S.T[index]);
            index--;
        }
        printf ("***\n");
    }
boolean IsTopGanjil(Stack St)
    {
        return (TOP(St)%2 !=0);
    }
//void printGanjil (Stack *St, int x);

