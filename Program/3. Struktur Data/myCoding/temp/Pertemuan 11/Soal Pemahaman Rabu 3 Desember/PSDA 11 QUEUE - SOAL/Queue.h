#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL

typedef int infotype;
typedef struct tElmtQueue *address;

typedef struct tElmtQueue
{
    char buah[20];
    address Next;
}ElmtQueue;

typedef struct
{
    address HEAD;
    address TAIL;
}Queue;

#define HEAD(Q) ((Q).HEAD)
#define TAIL(Q) ((Q).TAIL)
#define NEXT(P) (P)->Next
#define ISI_BUAH(P) (P)->buah


void CreateEmpty(Queue *Q);

void Alokasi(address *P,char buah[]);

boolean IsEmpty(Queue Q);

void Add(Queue *Q,char buah[]);

void PrintInfo(Queue Q);


#endif // QUEUE_H_INCLUDED
