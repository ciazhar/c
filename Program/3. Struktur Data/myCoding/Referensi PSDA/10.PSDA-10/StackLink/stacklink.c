#include "stacklink.h"

void CreateEmpty(Stack *S) {
    TOP(*S) = Nil;
}

void Alokasi(address *P, infotype X) {
    (*P) = (address)malloc(sizeof(ElmtStack));
    if((*P)!=Nil) {
        Info(*P) = X;
        Next(*P) = Nil;
    }
}

void Dealokasi(address *P) {
    free(*P);
}

boolean IsEmpty(Stack S) {
    return (TOP(S)==Nil);
}

void Push(Stack *S, infotype X) {
    address P;

    Alokasi(&P,X);
    if(P!=Nil) {
        Next(P) = TOP(*S);
        TOP(*S) = P;
    }
}

void Pop(Stack *S, infotype *X){
    address P;

    P = TOP(*S);
    *X = Info(P);
    TOP(*S) = Next(TOP(*S));
    Next(P) = Nil;
}
