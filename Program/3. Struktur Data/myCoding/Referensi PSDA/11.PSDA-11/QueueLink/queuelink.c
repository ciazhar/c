#include "queuelink.h"

void Alokasi(address *P, infotype X) {
    *P = (address)malloc(sizeof(ElmtQueue));
    if((*P)!=Nil) {
        Info(*P) = X;
        Next(*P) = Nil;
    }
}

void Dealokasi(address *P) {
    free(*P);
}

boolean IsEmpty(Queue Q) {
    return ((Head(Q)==Nil) && (Tail(Q)==Nil));
}

int NbElmt(Queue Q) {
    address P;
    int jum = 0;

    P = Head(Q);
    if(P!=Nil) {
        jum = jum + 1;
        P = Next(P);
    }

    return jum;
}

void CreateEmpty(Queue *Q) {
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void Add(Queue *Q, infotype X) {
    address P;

    Alokasi(&P,X);
    if(P!=Nil) {
        if(IsEmpty(*Q)) {
            Head(*Q) = P;
            Tail(*Q) = P;
        }
        else {
            Next(Tail(*Q)) = P;
            Tail(*Q) = P;
        }
    }
}

void Del(Queue *Q, infotype *X) {
    address P;

    *X = InfoHead(*Q);
    P = Head(*Q);
    Head(*Q) = Next(Head(*Q));
    if(Head(*Q)==Nil) {
        Tail(*Q) = Nil;
    }
    Dealokasi(P);
}
