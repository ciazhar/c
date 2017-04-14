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
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelLast(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
void DelP(List *L, infotype X);
boolean FSearch(List L, address P);
address Search(List L, infotype X);
address SearchPrec(List L, infotype X);
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);
void PrintInfo(List L);
int NbElmt(List L);
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

/*Prototype Fungsi/Prosedur*/
int NilaiGanjilPertama(List L);
void SwapFirstSecond(List *L);


#endif // LIST_H_INCLUDED
