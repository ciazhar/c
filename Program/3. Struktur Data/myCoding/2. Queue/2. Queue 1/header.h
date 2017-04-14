#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include "stdio.h"
#include "stdlib.h"
#include "boolean.h"

#define nil 0

typedef int infotype;
typedef int address;

typedef struct
{
    infotype *T;
    address HEAD;
    address TAIL;
    int MaxEl;

}Queue;

#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define infoHEAD(Q) (Q).T[(Q).HEAD]
#define infoTAIL(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MaxEl

boolean IsEmpty (Queue Q);
boolean IsFull (Queue Q);
int NBElmt(Queue Q);
void CreateEmpty (Queue *Q,int Max);
void DeAlokasi(Queue *Q);
void Add (Queue *Q, int X);
void Del (Queue *Q, int *X);
void CetakQueue(Queue Q);

/*Soal Pemahaman*/

void InputGenap10(Queue *Q);
void TambahHeadTail(Queue Q);


#endif // HEADER_H_INCLUDED
