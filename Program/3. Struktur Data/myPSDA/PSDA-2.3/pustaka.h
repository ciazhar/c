
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#define Nil 0

typedef int infotype;
typedef int address;


typedef struct {
    infotype *T;
    address HEAD;
    address TAIL;
    int MaxEl;
}Queue;

Queue Q;
int X, Batas,menu;

#define HEAD(Q) (Q).HEAD
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define TAIL(Q) (Q).TAIL
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MaxEl

boolean IsEmpty(Queue Q);
boolean IsFull(Queue Q);
int NBElmt (Queue Q);
void CreateEmpty(Queue *Q,infotype Batas);
void DeAlokasi(Queue *Q);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);
void PrintQueue(Q);
