#include "header.h"

void CreateEmpty(List *L){
    First(*L)=Nil;
}
boolean ListEmpty(List L){
    return (First(L)==Nil);
}
address Alokasi(infotype X){
    address P;
    P=malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}
void InsertFirst(List *L, address P){
    address Last;
    if(ListEmpty(*L)){
        First(*L)=P;
        Next(P)=First(*L);
    }
    else{
        Last=First(*L);
        while(Next(Last)!=First(*L)){
            Last=Next(Last);
        }
        Next(P)=First(*L);
        First(*L)=P;
        Next(Last)=First(*L);
    }
}
void InsVFirst(List *L, infotype X){
    address P;
    P=Alokasi(X);
    if(P!=Nil){
        InsertFirst(&(*L),P);
    }
}
void PrintInfo(List L){
    address P=First(L);
    do{
        printf("%d ",Info(P));
        P=Next(P);
    }while(P!=First(L));

}/*
void DelFirst(List *L, infotype *X){
    address P,Last;
    P=First(*L);

    if(ListEmpty(*L)){
        printf("List Kosong !!!\n");
    }
    else if(Next(P)==First(*L)){
        *X=Info(P);
        First(*L)=Nil;
    }
    else{
        *X=Info(P);
        Last=First(*L);
        while(Next(Last)!=First(*L)){
            Last=Next(Last);
        }
        P=First(*L);
        First(*L)=P;
        Next(P)=First(*L);
    }
}*/
