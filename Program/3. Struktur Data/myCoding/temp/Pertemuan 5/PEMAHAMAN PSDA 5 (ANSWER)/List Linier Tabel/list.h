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

ElmtList TabElmt[IndexMax];
address FirstAvail;
List L;
////////////////////////////////////////
/*1*/void createList (List *L);
/*2*/boolean IsEmpty (List L);
     boolean MemFull();
/*3*/void AllocTab (address *P);
/*4*/void DeAllocTab(address P);
     void IniTabel ();
////////////////////////////////////////
/*5*/void InsVFirst (List *L,InfoType X);
/*6*/void First (List *L,address P);
////////////////////////////////////////
/*7*/void After (address P,address Prec);
/*8*/void Last (List *L,address P);
/*9*/void InsVLast (List *L,InfoType X);
////////////////////////////////////////
/*10*/void ShowData (List L);
/*11*/int NbElmt (List L);
/*12*/int MAX (List L);
/*13*/address AdrMAX (List L);
/*14*/int MIN (List L);
/*15*/address AdrMIN (List L);
/*16*/
////////////////////////////////////////
/*17*/void DellAll (List *L);
/*18*/void InversList (List *L);
/*19*/List FInversList (List L);
/*20*/void CopyList (List *L1, List *L2);
/*21*/List FCopyList (List L);
/*22*/void CPAlokList (List Lin,List *Lout);
/*23*/void CONCAT (List *L1,List *L2, List *L3);
/*24*/void CONCAT_DEL (List *L1,List *L2, List *L3);
////////////////////////////////////////
/*25*/void Del_First (List *L,address *P);
/*26*/void DelVFirst (List *L,InfoType *X);
/*27*/void Del_Last (List *L,address *P);
/*28*/void DelVLast (List *L,InfoType *X);
/*29*/void DelP (List *L,InfoType X);
/*30*/void DelAfter (address P,address Prec);
////////////////////////////////////////
/*31*/address Search_Add (List L,InfoType X);
/*32*/address SearchPrec (List L,InfoType X);
/*33*/boolean Search (address P);
/*34*/void PecahList (List *L1, List *L2,List L);
////////////////////////////////////////
void Manipulation_List (List *L);
void DepanBlakang (List *L);
///////////////////////////////////////
#define FIRST(L) (L).FIRST
#define NEXT(P) TabElmt[P].NEXT
#define INFO(P) TabElmt[P].INFO

#endif // LIST_H_INCLUDED
