///gawan
#include <stdio.h>
#include <stdlib.h>

///deklarasi boolean
#define true 1
#define false 0
#define boolean unsigned char

///deklarasi nil
#define Nil 0

///deklarasi queue
typedef int infotype;
typedef int address;
typedef struct {
    infotype *T;
    address Head;
    address Tail;
    int MaxEl;
}Queue;
#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define MaxEl(Q) (Q).MaxEl
#define InfoHead(Q) (Q).T[(Q).Head]
#define InfoTail(Q) (Q).T[(Q).Tail]

///deklarasi fungsi prosedur
void CreateEmpty(Queue *Q, int Max);
boolean IsEmpty(Queue Q);
boolean IsFull(Queue Q);
void Add(Queue *Q, infotype X);
void Del(Queue *Q, infotype *X);
void PrintQueue(Queue Q);
int NbElmt(Queue Q);
void DeAlokasi(Queue *Q);


