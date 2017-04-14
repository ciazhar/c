#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil 0

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList
{
    infotype Info;
    address Prev;
    address Next;
} ElmtList;

typedef struct
{
    address First;
    address Last;
} List;

#define FIRST(L) (L).First
#define LAST(L) (L).Last
#define INFO(P) (P)->Info
#define NEXT(P) (P)->Next
#define PREV(P) (P)->Prev

boolean ListEmpty(List L);
void CreateList(List *L);
address Alokasi(infotype X);
void Dealokasi(address *P);

address GetAddress(List L, infotype X);
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
void DelLast(List *L, address *P);
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);
void PrintInfo(List L);



#endif // HEADER_H_INCLUDED
