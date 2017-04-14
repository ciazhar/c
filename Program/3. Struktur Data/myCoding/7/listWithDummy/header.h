#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    infotype Info;
    infotype Next;

}ElmtList;
typedef struct{
    address First;
    address Last;
}List;
address dummy;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define First(L) (L).First
#define Last(L) (L).Last

void CreateEmpty(List *L);
boolean isEmpty(List L);
address Alokasi(infotype X);
void InsertFirst(List *L, address P);
void InsVFirst(List *L, infotype X);
void PrintInfo(List L);
