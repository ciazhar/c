#include "pustaka.h"

void CreatEmpty(List *L){
    Firt(*L)=Nil;
}
boolean IsEmpty(List L){
    return (First(L)==Nil);
}
address Alokasi(infotype X){
    address P;
    P = malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
    return (P);
}
void insertFIrst(List *L,address P){
    Next(P)=First(*L);
    Firt(*L)=P;
}
void isVFirst(List *L, infotype X){
    address P;
    P=Alokasi(X);
    if(P!=Nil){
        insertFIrst(&(*L),P);
    }
}
void PrintInfo(List L){
    address P=F
}
