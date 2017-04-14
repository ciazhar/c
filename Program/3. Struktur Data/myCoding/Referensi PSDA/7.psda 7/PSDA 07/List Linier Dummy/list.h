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


address DUMMY;
address LAST_ADDRESS;

//////////////////////PRIMITIF-PRIMITIF LIST////////////////////////////
/*1*/void createList (List *L);
/*2*/boolean IsEmpty (List L);
/*3*/address ALOKASI (InfoType X);
/*4*/void DEALOKASI (address P);
//////////////////////PENCARIAN SEBUAH ELEMEN LIST//////////////////
/*5*/address Search_Add (List L,InfoType X);
/*6*/boolean FSearch (List L,address P);
//////////////////////PRIMITIF BERDASARKAN NILAI//////////////////////////////////
/*7*/void InsVFirst (List *L,InfoType X);
/*8*/void InsVLast (List *L,InfoType X);
/*9*/void DelVFirst (List *L,InfoType *X);
/*10*/void DelVLast (List *L,InfoType *X);
////////////////////////////////////////////////////////
/*11*/void First (List *L,address P);
/*12*/void Last (List *L,address P);
/*13*/void Del_First (List *L,address *P);
/*14*/void Del_Last (List *L,address *P);
void DelAfter (address P,address Prec);
void Insert_After (List *L,InfoType X,InfoType DATA);
////////////////////////////////////////
/*15*/void ShowData (List L);
////////////////////////////////////////


#endif // LIST_H_INCLUDED
