#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"

#define Nil 0
#define IndexMin 1
#define IndexMax 100

typedef int infotype;

typedef struct {
    infotype Info;
}ElmtList;

typedef int address;
typedef struct {
    ElmtList TabMem[IndexMax+1];
    address N;
}List;

address FirstAdd;
address LastAdd;

#define First(L) FirstAdd
#define Last(L) LastAdd
#define Next(P) (P+1)
#define Info(P) (L.TabMem[P].Info)

void CreateList(List *L);
boolean ListEmpty(List L);
address Search(List L, infotype X);
boolean FSearch(List L, address P);
void InsertFirst(List *L);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);
void InsertAfter(List *L, address P);
void InsertLast(List *L);
void InsVLast(List *L, infotype X);
void DelFirst(List *L, address *P);
void DelVFirst(List *L, infotype *X);
void DelAfter(List *L, address *P);
void DelLast(List *L, address *P);
void DelVLast(List *L, infotype *X);
int NbElmt(List L);
float Average(List L);
int Max(List L);
address AdrMax(List L);
int Min(List L);
address AdrMin(List L);
void DelAll(List *L);
void InversList(List *L);
void CopyList(List *L1, List *L2);
void Konkat(List L1, List L2, List *L3);



#endif // HEADER_H_INCLUDED
