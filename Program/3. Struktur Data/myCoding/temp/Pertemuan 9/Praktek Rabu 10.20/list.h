#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define INFO(P) (P)->Info
#define NEXT(P) (P)->NEXT
#define FIRST(L) (L).FIRST
#define LAST(L) (L).LAST

#define NIL NULL

typedef int InfoType;
typedef struct tElmtList *address;

typedef struct tElmtList
{
    InfoType Info;
    address NEXT;
}ElmtList;

typedef struct
{
    address FIRST;
    address LAST;
}List;

//////////////////////PRIMITIF-PRIMITIF LIST////////////////////////////
/*1*/void createList (List *L);
/*2*/boolean IsEmpty (List L);
/*3*/address ALOKASI (InfoType X);
/*4*/void DEALOKASI (address P);
//////////////////////PENCARIAN SEBUAH ELEMEN LIST//////////////////
/*5*/boolean Search_Elmt (address P);
/*6*/address GetAddres (List L,InfoType X);
//////////////////////PRIMITIF BERDASARKAN NILAI//////////////////////////////////
/*7*/void InsVFirst (List *L,InfoType X);
/*8*/void InsVLast (List *L,InfoType X);
/*9*/void DelVFirst (List *L,InfoType *X);
/*10*/void DelVLast (List *L,InfoType *X);
////////////////////////////////////////////////////////
/*13*/void DelAfter (address P,address Prec);
/*14*/void Insert_After (List *L,InfoType X,InfoType DATA);
////////////////////////////////////////
/*15*/void ShowData (List L);
/*16*/void DelAfter (address P,address Prec);
/*17*/ void Insert_After (List *L,InfoType X,InfoType DATA);
////////////////////////////////////////


#endif // LIST_H_INCLUDED
