#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define indexMin 1
#define indexMax 100
#define nil 0

typedef int infotype;
typedef int address;
typedef struct {
    infotype info;
    address next;
}elmtList;

elmtList tabElmt[indexMax+1];
address firsAvail;

#define first(L) (L).first
#define info(P) tabElmt[P].info
#define next(P) tabElmt[p].next

void createList(List *L);
boolean memFull();
boolean listEmpty(List L);
void initTabel();
void allocTab(address *P);
void deAllocTab(address P);
void insertFirst(List *L, address P);
void insVFirst(List *L, infotype X);
void printInfo(List L);


#endif // PUSTAKA_H_INCLUDED
