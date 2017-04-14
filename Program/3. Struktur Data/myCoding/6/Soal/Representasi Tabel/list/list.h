#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define IndexMin 1
#define IndexMax 100
#define Nil 0

typedef int infotype;
typedef int address;

typedef struct {
    infotype Info;
    address Next;
} ElmtList;

typedef struct {
    address First;
} List;

ElmtList TabElmt[IndexMax+1];
address FirstAvail;

#define First(L) (L).First
#define Next(P)  TabElmt[P].Next
#define Info(P)  TabElmt[P].Info

boolean MemFull();
void InitTab();
void AllocTab(address *P);
void DeAllocTab(address P);
boolean ListEmpty(List L);
void CreateList(List *L);
void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);
int NbElmt(List L);
/*Soal Pemahaman*/
void SwapFirstLast(List *L);


#endif // LIST_H_INCLUDED
