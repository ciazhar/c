#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL

typedef int infotype;
typedef struct tElmtQueue *address;

typedef struct tElmtQueue {
    infotype Info;
    address Next;
}ElmtQueue;

typedef struct {
    address HEAD;
    address TAIL;
}Queue;

#define HEAD(Q)     (Q).HEAD
#define TAIL(Q)     (Q).TAIL
#define InfoHead(Q) (Q).HEAD->Info
#define InfoTail(Q) (Q).TAIL->Info
#define Info(P)     (P)->Info
#define Next(P)     (P)->Next
address Alokasi(infotype x);
void Dealokasi(address *x);
boolean IsEmpty(Queue Q);
int NbElmt(Queue Q);
void PrintQueue(Queue Q);
void CreateEmpty(Queue *Q);
void AddV(Queue *Q, address x);
void Add(Queue *Q, infotype x);
void DelV(Queue *Q, address *x);
void Del(Queue *Q, infotype *x);

#endif // CONTAINER_H_INCLUDED
