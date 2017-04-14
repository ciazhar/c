#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct tnode* address;

typedef struct tnode{
    infotype info;
    address left;
    address right;
}tnode;

typedef address BinTree;

#define info(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right

void CreateEmpty(BinTree *P);
address Alokasi(int X);
infotype GetAkar(BinTree P);
infotype GetLeft(BinTree P);
infotype GetRight(BinTree P);
boolean IsEmpty(BinTree P);
void DeAlokasi(address P);
void InsertNode(BinTree *P,infotype X);
void PrintInOrder(BinTree P);
void PrintPreOrder(BinTree P);
void PrintPostOrder(BinTree P);

#endif // HEADER_H_INCLUDED
