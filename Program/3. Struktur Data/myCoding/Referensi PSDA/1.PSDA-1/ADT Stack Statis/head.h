#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include "boolean.h"

#define nil 0
#define MaxEl 10

typedef int infotype;
typedef int address;

typedef struct
{
    infotype T[MaxEl+1];
    address Top;
}Stack;

#define InfoTop(S) (S).T[(S).Top]
#define TOP(S) (S).Top

void CreateEmpty (Stack *S);
boolean IsEmpty (Stack S);
boolean IsFull (Stack S);
void Push (Stack *S, infotype X);
void Pop (Stack *S, infotype *X);

#endif // HEAD_H_INCLUDED
