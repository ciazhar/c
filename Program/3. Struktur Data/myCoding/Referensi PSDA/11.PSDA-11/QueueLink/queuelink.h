#ifndef QUEUELINK_H_INCLUDED
#define QUEUELINK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype; /* deklarasi infotype */

typedef struct ElmtQueue *address;
typedef struct ElmtQueue {
    infotype info;
    address next;
}ElmtQueue;

typedef struct {
    address HEAD;
    address TAIL;
}Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).HEAD->info
#define InfoTail(Q) (Q).TAIL->info
#define Info(P) (P)->info
#define Next(P) (P)->next

void Alokasi(address *P, infotype X);
void Dealokasi(address *P);
boolean IsEmpty(Queue Q);
int NbElmt(Queue Q);
void CreateEmpty(Queue *Q);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);

#endif // QUEUELINK_H_INCLUDED
