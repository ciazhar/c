#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct node* address;

typedef struct node{
    infotype Info;
    address Left;
    address Right;
}node;

typedef address BinTree;

typedef struct ElmtNode *addresList;
typedef struct ElmtNode {
    infotype Info;
    addresList Next;
}ElmtNode;

typedef addresList ListOfNode;

#define Info(P) (P)->Info
#define Left(P) (P)->Left
#define Right(P) (P)->Right

#define InfoList(P) (P)->Info
#define NextList(P) (P)->Next

BinTree Alokasi(infotype X);
void Dealokasi(BinTree *P);
infotype GetAkar(BinTree P);
BinTree GetLeft(BinTree P);
BinTree GetRight(BinTree P);
BinTree Tree(infotype Akar, BinTree L, BinTree R);
void MakeTree(infotype Akar, BinTree L, BinTree R, BinTree *P);
void BuildTree(BinTree *P);
boolean IsTreeEmpty(BinTree P);
boolean IsOneElmt(BinTree P);
boolean IsUnerLeft(BinTree P);
boolean IsUnerRight(BinTree P);
boolean IsBiner(BinTree P);
void PrintPreorder(BinTree P);
void PrintInorder(BinTree P);
void PrintPostorder(BinTree P);
void PrintTree(BinTree P, int h);
boolean Search(BinTree P, infotype X);
int NbElmt(BinTree P);
int NbDaun(BinTree P);
boolean IsSkewLeft(BinTree P);
boolean IsSkewRight(BinTree P);
int Level(BinTree P, infotype X);
addresList AlokListNode(infotype X);
void DealokListNode(addresList *P);
void AddDaunTerkiri(BinTree *P, infotype X);
void AddDaun(BinTree *P, infotype X, infotype Y, boolean Kiri);
void DelDaunTerkiri(BinTree *P, infotype *X);
void DelDaun(BinTree *P, infotype X);
ListOfNode MakeListDaun(BinTree P);
ListOfNode MakeListPreorder(BinTree P);
ListOfNode MakeListLevel(BinTree P, int N);
BinTree BuildBalanceTree(int n);
boolean BSearch(BinTree P, infotype X);
BinTree InsSearch(BinTree P, infotype X);
void DelBtree(BinTree *P, infotype X);
#endif // HEADER_H_INCLUDED
