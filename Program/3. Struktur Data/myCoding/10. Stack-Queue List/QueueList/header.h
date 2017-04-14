#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
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
#define Next(P) (P)->next


void CreateQueue(Queue *Q);
boolean isEmpty(Queue Q);
address Alokasi(infotype X);
void DeAlokasi(address *P);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);
void PrintQueue(Queue Q);
