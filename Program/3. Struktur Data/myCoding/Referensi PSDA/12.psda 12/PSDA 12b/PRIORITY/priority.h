#ifndef PRIORITY_H_INCLUDED
#define PRIORITY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define NEXT(P) (P)->NEXT
#define INFO(P) (P)->INFO
#define PRIO(P) (P)->PRIORITY
#define NIL NULL

typedef int InfoType;
typedef struct tElemen *address;

typedef struct tElemen
{
    address NEXT;
    int PRIORITY;
    InfoType INFO;
}Elemen;

typedef struct
{
    address HEAD;
    address TAIL;
}P_QUEUE;

void ALOKASI (address *P,InfoType X);
void DEALOKASI (address P);

boolean IsEmpty (P_QUEUE Q);
int NbElmt (P_QUEUE Q);

void CreateEmpty (P_QUEUE *Q);

void Add (P_QUEUE *Q,InfoType X,int PRI);
void Del (P_QUEUE *Q,InfoType *X);

void Show_Data (P_QUEUE Q);

#endif // PRIORITY_H_INCLUDED
