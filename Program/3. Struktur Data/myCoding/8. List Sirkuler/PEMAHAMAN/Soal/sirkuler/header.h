#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct ElmtList *address;
typedef struct ElmtList{
    infotype Info;
    address Next;
}ElmtList;
typedef struct{
    address First;
}List;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define First(L) (L).First

void CreateEmpty (List *L);
boolean isEmpty (List L);
boolean isOneElmt(List L);
address Alokasi(infotype X);
void InsertFirst(List *L, infotype X);
void InsertLast(List *L, infotype X);
void DelFirst(List *L, infotype *X);
void DelLast(List *L, infotype *X);
void PrintList (List L);
int NbElmt(List L);
///Soal Pemahaman
int PrintBeforeLast(List L);
boolean ListGenap(List L);
void kalitengah(List *L, infotype X);

#endif // HEADER_H_INCLUDED
