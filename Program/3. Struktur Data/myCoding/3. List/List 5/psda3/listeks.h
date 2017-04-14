#ifndef LISTEKS_H_INCLUDED
#define LISTEKS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL

typedef int infotype;

typedef struct ElmtList *address;

typedef struct ElmtList {
    infotype Info;
    address Next;
}ElmtList;

typedef struct {
    address First;
}List;

#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define First(L) (L).First

boolean ListEmpty(List L);
void CreateList(List *L);
address Alokasi(infotype X);
void Dealokasi(address *P);
address Search(List L, infotype X);
boolean FSearch(List L, address P);
address SearchPrec(List L, infotype X);
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelP(List *L, infotype X);
void DelLast(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
void PrintInfo(List L);
int NBElmt(List L);
infotype Max(List L);
address AdrMax(List L);
infotype Min(List L);
address AdrMin(List L);
float Average(List L);
void DelAll(List *L);
void InversList(List *L);
List FInversList(List L);
void CopyList(List *L1, List *L2);
List FCopyList(List L);
void CpAlokList(List Lin, List *Lout);
void Konkat(List L1, List L2, List *L3);
void Konkat1(List *L1, List *L2, List *L3);
void PecahList(List *L1, List *L2, List L);

/*Soal*/
int DiffList(List L);
int JumGenap(List L);
#endif // LISTEKS_H_INCLUDED
