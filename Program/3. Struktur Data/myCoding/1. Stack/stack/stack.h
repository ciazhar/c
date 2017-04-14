#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "boolean.h"
#define idxmax 10
#define nil 0

typedef int InfoType;
typedef int addres;

typedef struct
{
    InfoType T[idxmax+1];
    addres TOP;
}Stack;


void createempty (Stack *St);
boolean isempty (Stack St);
boolean isfull (Stack St);
void push (Stack *St ,int x);
int pop (Stack *St , int *x);
void printstack (Stack S);

int poop;
int psh;


boolean IsGenap (Stack St);
void PrintGanjil (Stack *St, int x);
void SumGanjilGenap (Stack *S);

#define TOP(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]

#endif // STACK_H_INCLUDED
