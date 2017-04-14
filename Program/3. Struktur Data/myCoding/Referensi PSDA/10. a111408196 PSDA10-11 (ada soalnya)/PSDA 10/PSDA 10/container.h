#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL
typedef int infotype;
typedef struct tElmtStack *address;

typedef struct tElmtStack {
    infotype Info;
    address Next;
}ElmtStack;

typedef struct {
    address TOP;
}Stack;

#define Top(S)      (S).TOP
#define InfoTop(S)  (S).TOP->Info
#define Next(P)     (P)->Next
#define Info(P)     (P)->Info
boolean IsEmpty(Stack S);
void PrintStack(Stack S);
address Alokasi(infotype x);
void Dealokasi(address *x);
void CreateEmpty(Stack *S);
void PushV(Stack *S, address x);
void Push(Stack *S, infotype x);
void PopV(Stack *S, address *x);
void Pop(Stack *S, infotype *x);
int jumlahgenap (Stack S);
int sisastack(Stack S, int X);
int JumBilJil (Stack S);

#endif
