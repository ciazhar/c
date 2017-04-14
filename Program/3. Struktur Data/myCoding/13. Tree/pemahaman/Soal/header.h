#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype;
typedef struct ElmtQueue *address;
typedef struct ElmtQueue{
    infotype Info;
    int Prio;
    address Next;
}ElmtQueue;

typedef struct{
    address Head;
    address Tail;
}Queue;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define Prio(P) (P)->Prio
#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define InfoHead(Q) (Q).Head->Info
#define InfoTail(Q) (Q).Tail->Info

void CreateEmpty (Queue *Q);
boolean IsEmpty (Queue Q);
address Alokasi (infotype X);
void DeAlokasi (address P);
void InsertAfter (Queue *Q, address P, address A);
void AddQueue (Queue *Q, infotype X, int pri);
void DelQueue (Queue *Q, infotype *X);
void PrintInfo (Queue Q);
/// Soal Pemahaman ///
int SumGenapInfoPrio(Queue Q);
int SumGanjilInfoPrio(Queue Q);
#endif // HEADER_H_INCLUDED
