#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil 0

typedef int infotype;
typedef int address;

typedef struct
{
    infotype *T;
    address HEAD;
    address TAIL;
    int MaxEl;
}Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define MaxEl(Q) (Q).MaxEl
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]

Queue f;
int i,pilihan,jmlelm,c,elmt;

boolean IsEmpty(Queue Q);
boolean IsFull(Queue Q);
int NBElmt(Queue Q);
void CreateEmpty(Queue *Q,int Max);
void DeAlokasi(Queue *Q);
void Add(Queue *Q,infotype X);
void Del(Queue *Q,infotype *X);
void tampil();

#endif // QUEUE_H_INCLUDED
