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
    address Prev;
}ElmtList;

typedef struct {
    address First;
    address Last;
}List;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define Prev(P) (P)->Prev
#define First(L) (L).First
#define Last(L) (L).Last
#define Nil NULL

boolean ListEmpty(List L);
void CreateEmpty(List *L);
address Alokasi(infotype X);
void DeAlokasi(address *P);

boolean FSearch(List L, address P);
address Search(List L, infotype X);

void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void InsertLast(List *L, address P);
void InsVLast(List *L, infotype X);
void InsertAfter(List *L, address P, address Prec);

void DelFirst(List *L, address *P);
void DelVFirst(List *L, infotype *X);
void DelLast(List *L, address *P);
void DelVLast(List *L, infotype *X);
void DelAfter(List *L, address *Pdel, address Prec);

void PrintInfo(List L);

