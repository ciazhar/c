#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

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
#define Nil NULL

///
void CreateEmpty(List *L);
boolean ListEmpty(List L);
address Alokasi(infotype X);
void Dealokasi(address *P);
///
void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void InsertLast(List *L, address P);
void InsVLast(List *L, infotype X);
void InsertAfter(List *L, address P, address Prec);
///
void DelFirst(List *L, infotype *X);
void DelVFirst(List *L, address *P);
void DelLast(List *L, infotype *X);
void DelVLast(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);
///
boolean FSearch(List L, address P);
address Search(List L, infotype X);
///
void PrintInfo(List L);
