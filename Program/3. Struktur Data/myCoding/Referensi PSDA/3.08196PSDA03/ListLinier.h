#ifndef LISTLINIER_H_INCLUDED
#define LISTLINIER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define INFO(P) (P)->Info
#define NEXT(P) (P)->NEXT
#define FIRST(L) (L).FIRST

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
}List;

void createList (List *L);
address ALOKASI (InfoType X);
void First (List *L,address P);
void InsVFirst (List *L,InfoType X);
void InsVFirstGanjil (List *L,InfoType X);
void ShowData (List L);
int JumEl (List L);

#endif // LISTLINIER_H_INCLUDED
