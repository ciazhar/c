#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define Nil NULL
typedef struct TNode  *address;
typedef struct TNode{
    char Nama[10];
    address Posisi;
    address Pemain;
};TNode;

typedef struct List{
    address Head;
}List;

#define Name(P) (P)->Nama
#define Posisi(P) (P)->Posisi
#define Pemain(P) (P)->Pemain
#define Head(L) (L).Head

void CreateEmpty (List *L);
address Alokasi(List *L, char Nama[]);

#endif // HEADER_H_INCLUDED
