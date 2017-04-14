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
void InsVFirst(List *L, infotype X);
void InsertFirst(List *L, address P);
void PrintInfo(List L);
int NBElmt(List L);
float Average(List L);

/*Soal*/
int JumGanjil(List L);
void GantiLast (List *L, infotype X);
boolean NilaiTengahGenap (List L);
#endif // LISTEKS_H_INCLUDED
