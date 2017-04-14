#ifndef PRIORQUEUE_H_INCLUDED
#define PRIORQUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype;
typedef struct ElmtQueue *address;
typedef struct ElmtQueue {
    infotype Info;
    int Prio;
    address Next;
}ElmtQueue;

typedef struct {
    address HEAD;
    address TAIL;
}Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define Info(P) (P)->Info
#define Prio(P) (P)->Prio
#define Next(P) (P)->Next

void Alokasi(address *P, infotype X, int Pr);
void Dealokasi(address *P);
boolean IsEmpty(Queue Q);
int NbElmt(Queue Q);
void CreateEmpty(Queue *Q);
void Add(Queue *Q, infotype X, int Pr);
void Del(Queue *Q, infotype *X, int Pr);
void PrintQueue(Queue Q);

#endif // PRIORQUEUE_H_INCLUDED
