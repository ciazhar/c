#include "header.h"

void CreateStack(Stack *S){
    TOP(*S)=Nil;
}
boolean isEmpty(Stack S){
    return TOP(S)=Nil;
}
address Alokasi(infotype X){
    address P =malloc(sizeof(ElmtStack));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}
void DeAlokasi(address *P){
    free(*P);
}
void Push(Stack *S, infotype X){
    address P;
    P=Alokasi(X);
    if(P!=Nil){
        Next(P)=TOP(*S);
        TOP(*S)=P;
    }
}
void Pop(Stack *S, infotype *X){
    address P;
    P=TOP(*S);
    *X=Info(P);
    TOP(*S)=Next(P);
    Next(P)=Nil;
    DeAlokasi(&P);
}
void PrintStack(Stack S){
    address P;
    P=TOP(S);
    printf("[ TOP");
    while(P!=Nil){
        printf(" -> %d",Info(P));
        P=Next(P);
    }
    printf(" ]\n");
}
