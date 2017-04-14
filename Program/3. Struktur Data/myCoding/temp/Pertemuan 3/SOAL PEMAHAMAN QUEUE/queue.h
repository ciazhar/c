#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#define NIL 0


typedef int addres;
typedef int infotype;

typedef struct
{
    infotype *T;
    addres HEAD;
    addres TAIL;
    int MAX;
}Queue;


#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MAX

boolean IsMax (Queue Q);
boolean IsEmpty (Queue Q);
void CreateEmpty (Queue *Q, int Max);
int NbElmt (Queue Q);
void Dealokasi (Queue *Q);
void Add (Queue *Q,int val);
void Del (Queue *Q, int *val);
void Dealokasi (Queue *Q);
void PrintQUEUE (Queue Q);

// SOAL PEMAHAMAN//
boolean Is_Kembar (Queue Q);
void Swap_Head_Tail (Queue *Q);
void All_Genap (Queue *Q);


#endif // QUEUE_H_INCLUDED
