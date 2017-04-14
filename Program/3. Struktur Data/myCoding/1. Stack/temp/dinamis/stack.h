#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>
#define NIL 0

typedef int infotype;
typedef int addres;

typedef struct
{
    infotype *T;
    addres TOP;
    int size;
}Stack;

void createempty (Stack *St,int sz);
boolean isempty (Stack st);
boolean isfull (Stack st);
void poop (Stack *St , int *x);
void push (Stack *St , int x);
void Dealokasi(Stack *St);

#define TOP(S) (S).TOP
#define Size(S) (S).size
#define InfoTop(S) (S).T[(S).TOP]

#endif // STACK_H_INCLUDED
