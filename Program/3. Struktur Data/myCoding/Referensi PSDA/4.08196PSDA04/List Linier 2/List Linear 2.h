#ifndef LIST_LINEAR_H_INCLUDED
#define LIST_LINEAR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "boolean.h"
#define NIL NULL

typedef int infotype;
typedef struct telmt *address;
typedef struct telmt{
    infotype info;
    address next;
}elmtlist;
typedef address List;
boolean ListEmpty(List L);
void CreateList(List *L);
void Dealokasi(address *P);
address Alokasi (infotype X);
address Search(List L,infotype X);
boolean FSearch(List L,address P);
address SearchPrec(List L,infotype X);

void insvfirst(List *L,infotype X);
void insvlast(List *L,infotype X);

void delvfirst(List *L,infotype *X);
void delvlast(List *L,infotype *X);

void insertfirst(List *L, address P);
void insertafter(List *L, address P,address prec);
void insertlast(List *L, address P);

void delfirst(List *L,address *P);
void delp(List *L,infotype X);
void delpe(List *L,infotype X);
void dellast(List *L, address *p);
void delafter(List *L, address *pdel, address prec);

void printinfo (List L);
int nbelmt(List L);

infotype Max(List L);
address adrmax(List L);
infotype Min (List L);
address adrmin(List L);
float average (List L);

void delall(List *L);
void inverselist(List *L);
List finverselist(List L);
void copylist(List*L1,List*L2);
List fcopylist(List L);
void cpaloklist(List Lin,List *Lout);
void konkat (List L1,List L2, List *L3);
void konkat1 (List *L1,List *L2,List *L3);
void pecahlist (List *L1, List *L2,List L);
address last(List L);
#endif // LIST_LINEAR_H_INCLUDED
