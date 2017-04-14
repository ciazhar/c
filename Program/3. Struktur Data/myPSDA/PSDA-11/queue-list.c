#include "header.h"

void CreateQueue(Queue *Q){
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}
address Alokasi(infotype X){
    address P;
    P=malloc(sizeof(ElmtQueue));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}
void Dealokasi(address *P){
    free(*P);
}
boolean isEmpty(Queue Q){
    return Tail(Q)==Nil && Head(Q)==Nil;
}
int NBElmt(Queue Q){
    int count=0;

    address P=Head(Q);
    while(P!=Nil){
        count++;
        P=Next(P);
    }
    return count;
}
void Add(Queue *Q, infotype X){
    address P;
    P=Alokasi(X);
    if(P!=Nil){
        if(isEmpty(*Q)){
            Head(*Q)=P;
            Tail(*Q)=P;
        }
        else{
            Next(Tail(*Q))=P;
            Tail(*Q)=P;
        }
    }
}
void Del(Queue *Q, infotype *X){
    address P;

    *X = InfoHead(*Q);
    P = Head(*Q);
    Head(*Q)=Next(Head(*Q));
    if(Head(*Q)==Nil){
        Tail(*Q)=Nil;

    }
    Next(P)=Nil;
    //Dealokasi(P);
}
void PrintQueue(Queue Q){
    address P=Head(Q);
    while(P!=Nil){
        printf("[%d] ",Info(P));
        P=Next(P);
    }
    printf("\n");
}
