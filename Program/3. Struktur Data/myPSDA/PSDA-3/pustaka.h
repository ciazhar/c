#ifndef LISTEKSPLISIT_H_INCLUDED
#define LISTEKSPLISIT_H_INCLUDED

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

///{ ***************** TEST LIST KOSONG ***************** }
boolean ListEmpty (List L);
///{ ***************** PEMBUATAN LIST KOSONG ***************** }
void CreateList (List *L);
///{ ***************** Manajemen Memori ***************** }
address Alokasi (InfoType X);
void Dealokasi (address P);

///{ ***************** PENCARIAN SEBUAH ELEMEN LIST ***************** }
address Search (List L,InfoType X);
address SearchPrec (List L,InfoType X);
boolean FSearch (address P);

///{ ***************** PRIMITIF BERDASARKAN NILAI ***************** }
///{ *** PENAMBAHAN ELEMEN *** }
void InsVFirst (List *L,InfoType X);
void InsVLast (List *L,InfoType X);

///{ *** PENGHAPUSAN ELEMEN *** }
void DelVFirst (List *L,InfoType *X);
void DelVLast (List *L,InfoType *X);

///{ ***************** PRIMITIF BERDASARKAN ALAMAT ***************** }
///{ *** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT *** }
void InsertFirst (List *L,address P);
void InsertAfter (address P,address Prec);
void InsertLast (List *L,address P);

///{ *** PENGHAPUSAN SEBUAH ELEMEN *** }
void DelFirst (List *L,address *P);
void DelP (List *L,InfoType X);
void DelLast (List *L,address *P);
void DelAfter (address P,address Prec);

///{ ***************** PROSES SEMUA ELEMEN LIST ***************** }
void PrintInfo (List L);
int NbElmt (List L);
int MAX (List L);
address AdrMAX (List L);
int MIN (List L);
address AdrMIN (List L);
float AVERAGE (List L);

///{ ***************** PROSES TERHADAP LIST ***************** }
void DellAll (List *L);
void InversList (List *L);
List FInversList (List L);
void CopyList (List *L1, List *L2);
List FCopyList (List L);
void CPAlokList (List Lin,List *Lout);
void Konkat (List *L1,List *L2, List *L3);
void Konkat1 (List *L1,List *L2, List *L3);
void PecahList (List *L1, List *L2,List L);


#endif // LIST_H_INCLUDED
