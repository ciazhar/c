#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define IndexMin 1
#define IndexMax 100
#define Nil 0

typedef int infotype;
typedef int address;

typedef struct{
    infotype Info;
}ElmtList;

typedef struct{
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
void InsertFirst(List *L);
void InsVFirst(List *L, infotype X);
void InsertFirst(List *L);
void InsertLast(List *L, address P);
void InsVLast(List *L, infotype X);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);
void ReverseList(List L);

#endif // HEADER_H_INCLUDED
