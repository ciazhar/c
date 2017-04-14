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
    address Next;
}ElmtQueue;

typedef struct{
    address Head;
    address Tail;
}Queue;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define InfoHead(Q) (Q).Head->Info
#define InfoTail(Q) (Q).Tail->Info

void CreateEmpty (Queue *Q);
boolean isEmpty (Queue Q);
address Alokasi (infotype X);
void DeAlokasi (address P);
void AddQueue (Queue *Q, infotype X);
void DelQueue (Queue *Q, infotype *X);
void PrintQueue (Queue Q);
int NbElmt(Queue Q);

///Soal Pemahaman
int Jumlah (Queue Q);
int HasilKrgTmbh (Queue Q);

#endif // HEADER_H_INCLUDED
