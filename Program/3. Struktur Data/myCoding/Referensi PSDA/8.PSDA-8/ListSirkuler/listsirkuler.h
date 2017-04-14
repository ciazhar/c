#ifndef LISTSIRKULER_H_INCLUDED
#define LISTSIRKULER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

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

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define First(L) (L).First

boolean ListEmpty(List L);
void CreateList(List *L);
address Alokasi(infotype X);
void Dealokasi(address *P);
boolean FSearch(List L, address P);
address Search(List L, infotype X);
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
void DelLast(List *L, address *P);
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);
void PrintInfo(List L);

#endif // LISTSIRKULER_H_INCLUDED
