#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char

#define Nil 0

typedef int infotype;
typedef int address;

typedef struct{
    infotype *T;
    address HEAD;
    address TAIL;
    int MaxEl;
}Queue;

#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define MaxEl(Q) (Q).MaxEl
#define InfoHEAD(Q) (Q).T[(Q).HEAD]
#define InfoTAIL(Q) (Q).T[(Q).TAIL]

void CreateEmpty (Queue *Q, int Max);
boolean isEmpty (Queue Q);
boolean isFull (Queue Q);
void Add (Queue *Q, infotype X);
void Del (Queue *Q, infotype *X);
void PrintQueue (Queue Q);

/*Soal Pemahaman*/
void AddGanjil(Queue *Q, infotype X);
int MaxHeadTail(Queue Q);
boolean CariN(Queue Q, int X);

#endif // HEADER_H_INCLUDED
