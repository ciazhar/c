#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define NIL 0
#define IndexMin 1
#define IndexMax 100

typedef int InfoType;
typedef int address;
typedef struct tElmtList
{
    InfoType INFO;
    address NEXT;
}ElmtList;
typedef struct
{
    address FIRST;
}List;
#define FIRST(L) (L).FIRST
#define NEXT(P) TabElmt[P].NEXT
#define INFO(P) TabElmt[P].INFO

ElmtList TabElmt[IndexMax];
address FirstAvail;
List L;

boolean MemFull();
void IniTabel ();
void CreateList (List *L);
boolean IsEmpty (List L);
void AllocTab (address *P);
void DeAllocTab(address P);
void InsVFirst (List *L,InfoType X);
void First (List *L,address P);
void After (address P,address Prec);
void Last (List *L,address P);
void InsVLast (List *L,InfoType X);
void DelVFirst (List *L,InfoType *X);
void Del_Last (List *L,address *P);
void ShowData (List L);
void Del_First (List *L,address *P);
void DelVLast (List *L,InfoType *X);
void DelP (List *L,InfoType X);
void DelAfter (address P,address Prec);
void DellAll (List *L);
void InversList (List *L);
List FInversList (List L);
void CopyList (List *L1, List *L2);
List FCopyList (List L);
void CPAlokList (List Lin,List *Lout);
void CONCAT (List *L1,List *L2, List *L3);
void CONCAT_DEL (List *L1,List *L2, List *L3);

int NbElmt (List L);
int MAX (List L);
address AdrMAX (List L);
int MIN (List L);
float AVERAGE (List L);

address AdrMIN (List L);
address Search_Add (List L,InfoType X);
address SearchPrec (List L,InfoType X);
boolean Search (address P);
void PecahList (List *L1, List *L2,List L);

#endif // LIST_H_INCLUDED
