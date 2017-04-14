#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

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

void createList(List *L); //tujuan pointer untuk mengubah isi di dalamnya
address Alokasi(InfoType X);
void IsEmpty (List L); //tidak mengubah apa apa, makanya nda make pointer
void DeAlokasi (address P);

void TambahDepan (List *L, InfoType X);
void PrintInfo (List L);


#endif // LIST_H_INCLUDED
