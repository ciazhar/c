#ifndef LISTIMPLISIT_H_INCLUDED
#define LISTIMPLISIT_H_INCLUDED

#include "boolean.h"

#include <stdio.h>
#include <stdlib.h>


typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    infotype info;
    address next;
}ElmtList;

typedef address List;


#define info(P) (P)->info
#define next(P) (P)->next
#define First(L) (L)
#define Nil NULL

address alokasi(infotype x);
void dealokasi(address *P);
boolean IsEmpty(List L);
void CreateList(List *L);
void InsVFirst(List *L, infotype x);
void InsertFirst(List *L, address p);
void InsertAfter(List *L, address p, address prec);
void InsVLast(List *L, infotype x);
void InsertLast(List *L, address p);
void DelVFirst(List *L, infotype x);
void DelFirst(List *L, address *p);
void DelAfter(List *L, address *Pdel, address prec);
void DelVLast(List *L, infotype *x);
void DelLast(List *L, address *p);
address Search(List L, infotype x);
boolean FSearch(List L, address p);
void DelP(List *L, infotype x);
void DelAll(List *L);
void PrintInfo(List L);
int NBElmt(List L);
infotype Max(List L);
address AdrMax(List L);
infotype Min(List L);
address AdrMin(List L);
float Average(List L);
void InversList(List *L);
List FInversList(List L);
void CopyList(List *L1, List *L2);
List FCopyList(List L);
void CpAlokList(List Lin, List *Lout);
void Konkat(List L1, List L2, List *L3);
void Konkat1(List *L1, List *L2, List *L3);
void PecahList(List *L1, List *L2, List L);

#endif // LISTIMPLISIT_H_INCLUDED
