#include "header.h"

boolean ListEmpty(List L){
    return ((First(L)==Nil)&&(Last(L)==Nil));
}
void CreateEmpty(List *L){
    First(*L)=Nil;
    Last(*L)=Nil;
}
address Alokasi(infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
        Prev(P)=Nil;
    }
}
void DeAlokasi(address *P){
    free(*P);
}
boolean FSearch(List L, address P){
    address Q=First(L);
    boolean check=false;

    do{
        if(Q==P){
            check=true;
            break;
        }
        else{
            Q=Next(Q);
        }
    }while(Q!=Nil);

    return check;
}
address Search(List L, infotype X){
    address P;

    if(ListEmpty(L)){
        P=Nil;
    }
    else{
        P=First(L);
        do{
            if(Info(P)==X){
                break;
            }
            else{
                P=Next(P);
            }
        }while(P!=Nil);
    }
    return P;

}
void InsertFirst(List *L, address P){
    Next(P)=First(*L);
    if(ListEmpty(*L)){
        Last(*L)=P;
    }
    else{
        Prev((First(*L)))=P;
    }
    First(*L)=P;
}
void InsVFirst(List *L, infotype X){
    address P;

    P=Alokasi(X);
    if(P!=Nil)
    {
        InsertFirst(L,P);
    }

}
void InsertLast(List *L, address P){
    if(ListEmpty(*L))
    {
        InsertFirst(L,P);
    }
    else
    {
        Last(*L)=First(*L);
        while(Next(Last(*L))!=Nil)
        {
            Last(*L)=Next(Last(*L));
        }
        Prev(P)=Last(*L);
        Next(Last(*L))=P;
        Last(*L)=P;
    }
}
void InsVLast(List *L, infotype X){
    address P;

    P=Alokasi(X);
    if(P!=Nil)
    {
        InsertLast(L,P);
    }
}
void InsertAfter(List *L, address P, address Prec){
    Prev(P)=Prec;
    Next(P)=Next(Prec);
    Prev(Next(Prec))=P;
    Next(Prec)=P;
}
void DelFirst(List *L, address *P){
    (*P)=First(*L);
    if(First(*L)==Last(*L))
    {
        First(*L)=Nil;
        Last(*L)=Nil;
    }
    else
    {
        Prev(Next(First(*L)))=Nil;
        First(*L)=Next(First(*L));
    }
    Prev(*P)=Nil;
    Next(*P)=Nil;
}
void DelVFirst(List *L, infotype *X){
    address P;

    DelFirst(L,&P);
    (*X)=Info(P);
    DeAlokasi(&P);
}
void DelLast(List *L, address *P){
    if(First(*L)==Last(*L))
    {
        DelFirst(L,P);
    }
    else
    {
        (*P)=Last(*L);
        Last(*L)=Prev(Last(*L));
        Next(Last(*L))=Nil;
        Prev(*P)=Nil;
    }
}
void DelVLast(List *L, infotype *X){
    address P;

    if(First(*L)==Last(*L))
    {
        DelVFirst(L,X);
    }
    else
    {
        DelLast(L,&P);
        (*X)=Info(P);
        DeAlokasi(&P);
    }
}
void DelAfter(List *L, address *Pdel, address Prec){
    (*Pdel)=Next(Prec);
    Next(Prec)=Next(Next(Prec));
    Prev(Next(Prec))=Prec;
    Prev(*Pdel)=Nil;
    Next(*Pdel)=Nil;
}
void PrintInfo(List L){
    address P;
    P=First(L);
    if(ListEmpty(L)){
        printf("List Kosong");
    }
    else{
        printf("[");
        do{
            printf("%d --> ",Info(P));
            P=Next(P);
        }while(P!=Nil);
        printf(" NULL]\n");
    }
}
