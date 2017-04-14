#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    infotype Info;
    address Next;
}ElmtList;

typedef address List;

#define Nil NULL
#define INFO(P) P->Info
#define NEXT(P) P->Next


void CreateEmpty(List *L);
boolean IsEmpty(List L);
boolean IsOneElmt(List L);
address Alokasi(infotype X);
void Konso(List *L,infotype X);
infotype FirstElmt(List L);
List Tail(List L);
void CetakList(List L);



#endif // HEADER_H_INCLUDED
