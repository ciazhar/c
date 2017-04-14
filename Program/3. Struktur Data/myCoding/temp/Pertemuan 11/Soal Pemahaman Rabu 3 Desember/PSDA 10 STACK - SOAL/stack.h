#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INFO(P) (P)->INFO
#define NEXT(P) (P)->NEXT
#define TOP(L) (L).TOP
#define NIL NULL


typedef struct tElmtList *address;

typedef struct tElmtList
{
    char INFO[20];
    address NEXT;
}ElmtList;

typedef struct
{
    address TOP;
}Stack;

//=============FUNGSI DAN PROCEDURE================

void CreateEmpty (Stack *S);
void ALOKASI (address *P ,char buah[]);
void DEALOKASI (address P);

boolean IsEmpty (Stack S);
boolean IsFull (Stack S);

void PUSH (Stack *S,char buah []);
void POP (Stack *S,char buah[]);

void ShowFruits (Stack S);
void ShowKeranjang (Stack M,Stack N,Stack J,Stack S);
#endif // STACK_H_INCLUDED
