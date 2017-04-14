#ifndef LIST_LINEAR_H_INCLUDED
#define LIST_LINEAR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "boolean.h"

#define NIL NULL

typedef int InfoType;
typedef struct tElmtList *address;
typedef struct tElmtList{
    InfoType info;
    address next;
}ElmtList;
typedef address List;

boolean ListEmpty(List L);
///{ ***************** TEST LIST KOSONG ***************** }
void CreateList(List *L);
///{ ***************** Manajemen Memori ***************** }
address Alokasi (InfoType X);
void Dealokasi(address *P);

///{ ***************** PENCARIAN SEBUAH ELEMEN LIST ***************** }
address Search(List L,InfoType X);
boolean FSearch(List L,address P);
address SearchPrec(List L,InfoType X);

///{ ***************** PRIMITIF BERDASARKAN NILAI ***************** }
///{ *** PENAMBAHAN ELEMEN *** }
void InsVFirst(List *L,InfoType X);
void InsVLast(List *L,InfoType X);
///{ *** PENGHAPUSAN ELEMEN *** }
void DelVFirst(List *L,InfoType *X);
void DelVLast(List *L,InfoType *X);

///{ ***************** PRIMITIF BERDASARKAN ALAMAT ***************** }
///{ *** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT *** }
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P,address prec);
void InsertLast(List *L, address P);
///{ *** PENGHAPUSAN SEBUAH ELEMEN *** }
void DelFirst(List *L,address *P);
void DelP(List *L,InfoType X);

void DelPe(List *L,InfoType X);
void DelLast(List *L, address *p);
void DelAfter(List *L, address *pdel, address prec);

///{ ***************** PROSES SEMUA ELEMEN LIST ***************** }
void PrintInfo (List L);
int NbElmt(List L);
InfoType MAX(List L);
address AdrMax(List L);
InfoType MIN(List L);
address AdrMin(List L);
float AVERAGE (List L);
///{ ***************** PROSES TERHADAP LIST ***************** }
void DelAll(List *L);
void InversList(List *L);
List FInversList(List L);
void CopyList(List*L1,List*L2);
List FCopyList(List L);
void CPAlokList(List Lin,List *Lout);
void Konkat (List L1,List L2, List *L3);
void Konkat1 (List *L1,List *L2,List *L3);
void PecahList (List *L1, List *L2,List L);
address last(List L);
#endif // LIST_LINEAR_H_INCLUDED
