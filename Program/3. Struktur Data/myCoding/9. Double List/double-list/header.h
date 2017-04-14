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
void CreatList(List *L);
address Alokasi(infotype X);
void DeAlokasi(address *P);
void InsertFirst(List *L, address P);
void DeleteFirst(List *L, address *P);
void PrintInfo(List L);

