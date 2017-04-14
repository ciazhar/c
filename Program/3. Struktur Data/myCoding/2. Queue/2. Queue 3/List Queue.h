#ifndef LIST_QUEUE_H_INCLUDED
#define LIST_QUEUE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#define Nil NULL

typedef int infotype;
typedef struct ElQ *address;
typedef struct ElQ{
    infotype info;
    address next;
}elmtqueue;
typedef struct{
    address Head;
    address Tail;
}Queue;
void CreateEmpty(Queue *Q);
void Alokasi(address *P,infotype X);
void Dealokasi(address *P);
boolean IsEmpty(Queue Q);
int NBelmt(Queue Q);
void add(Queue *Q,infotype X);
void del(Queue *Q,infotype *X);
void printinfo(Queue Q);
void pindahkedepan(Queue *Q,infotype X);


#endif // LIST_QUEUE_H_INCLUDED
