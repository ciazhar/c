#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define NIL NULL

typedef int infotype;
typedef struct tNode *address;

typedef struct tNode
{
    infotype Info;
    address Left;
    address Right;
}Node;

typedef address BinTree;

#define INFO(P) (P)->Info
#define LEFT(P) (P)->Left
#define RIGHT(P) (P)->Right

//***** SELEKTOR *****//
infotype GetAkar (BinTree P);
BinTree GetLeft (BinTree P);
BinTree GetRight (BinTree P);

//***** KONSTRUKTOR *****//
BinTree TREE (infotype X , BinTree T);
address ALOKASI (infotype X);
void MakeTree (BinTree *T,infotype X);
//***** PREDIKAT *****//
boolean IsTreeEmpty (BinTree P);
boolean IsOneElmt (BinTree P);
boolean IsUnerLeft (BinTree P);
boolean IsUnerRight (BinTree P);
boolean IsBiner (BinTree P);

//***** TRAVERSAL *****//
void PrintPreOrder (BinTree P);
void PrintInOrder (BinTree P);
void PrintPostOrder (BinTree P);

//***** SEARCHING *****//
boolean Search (BinTree P , infotype X);

//***** FUNGSI FUNGSI LAIN *****//
int NbElmt (BinTree P);
int NbDaun (BinTree P);
boolean IsSkewLeft (BinTree P);
boolean IsSkewRight (BinTree P);
int Level (BinTree P);
void mirror (BinTree P);
boolean path (BinTree P , int N);

//*************SOAL PEMAHAMAN *****************//

void addDaunKiri (BinTree *T , infotype X);
void InserAfter (BinTree *T,infotype value,infotype NODE);
#endif // HEADER_H_INCLUDED
