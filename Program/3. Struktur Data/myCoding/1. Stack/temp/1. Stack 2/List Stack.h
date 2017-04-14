#ifndef LIST_STACK_H_INCLUDED
#define LIST_STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#define Nil NULL
typedef int infotype;
typedef struct ElS *address;
typedef struct ElS{
    infotype info;
    address next;
}elmtstack;
typedef struct{
    address TOP;
}Stack;
void CreateEmpty(Stack *S);
void Alokasi(address *P,infotype X);
void Dealokasi(address *P);
boolean IsEmpty(Stack S);
boolean IsFull(Stack S);
void Push (Stack *S,infotype X);
void Pop (Stack *S,infotype *X);
void printinfo(Stack S);
int nbelmt(Stack S);
int jumlahganjil(Stack S);
int sisastack(Stack S,int X);
#endif // LIST_STACK_H_INCLUDED
