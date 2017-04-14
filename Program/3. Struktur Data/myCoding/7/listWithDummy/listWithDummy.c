#include "header.h"

void CreateEmpty(List *L){
    First(*L)=dummy;
    Last(*L)=dummy;
}
boolean isEmpty(List L){
    return (First(L)==dummy)&&(Last(L)==dummy);
}
address Alokasi(infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
}
void InsertFirst(List *L, address P){
    Next(P)=First(*L);
    First(*L)=P;
}
void InsVFirst(List *L, infotype X){
    address P=Alokasi(X);
    if(P!=Nil){
        InsertFirst(L,P);
    }
}
void PrintInfo(List L){
    if(isEmpty(L)){
        printf("Lis Kosong!\n");
    }
    else {
        address P =First(L);
        while (P!=Last(L)){
            printf("| %d |", Info(P));
        P=Next(P);
        }
    }
}
