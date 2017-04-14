#ifndef STACKLINK_H_INCLUDED
#define STACKLINK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype;
typedef struct ElmtStack *address;
typedef struct ElmtStack {
    infotype info;
    address next;
}ElmtStack;

typedef struct {
    address TOP;
}Stack;

#define InfoTop(S) (S).TOP->info
#define TOP(S) (S).TOP
#define Info(P) (P)->info
#define Next(P) (P)->next

void CreateEmpty(Stack *S);
void Alokasi(address *P, infotype X);
void Dealokasi(address *P);
boolean IsEmpty(Stack S);
void Push(Stack *S, infotype X);
void Pop(Stack *S, infotype *X);

#endif // STACKLINK_H_INCLUDED
