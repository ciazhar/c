#include "priorqueue.h"

void Alokasi(address *P, infotype X, int Pr) {
    *P = (address)malloc(sizeof(ElmtQueue));
    if((*P)!=Nil) {
        Info(*P) = X;
        Prio(*P) = Pr;
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
    int hasil=0;
    address P;

    if(IsEmpty(Q))
        return hasil;
    else {
        P = Head(Q);
        while(P!=Nil) {
            hasil = hasil + 1;
            P = Next(P);
        }
    }

    return hasil;
}

void CreateEmpty(Queue *Q) {
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void Add(Queue *Q, infotype X, int Pr) {
    address P;
    address last, prec, temp;

    if(IsEmpty(*Q)) {
        Alokasi(&P,X,Pr);
        Next(P) = Head(*Q);
        Head(*Q) = P;
        Tail(*Q) = P;
    } else if(Pr < Prio(Head(*Q))) {
        Alokasi(&P,X,Pr);
        Next(P) = Head(*Q);
        Head(*Q) = P;
    } else if(Pr >= Prio(Tail(*Q))) {
        last = Head(*Q);
        while(Next(last)!=Nil) {
            last = Next(last);
        }
        Alokasi(&P,X,Pr);
        Next(last) = P;
        Tail(*Q) = P;
    } else {
        Alokasi(&P,X,Pr);
        temp = Head(*Q);
        prec = Nil;
        while(Pr > Prio(temp)) {
            prec = temp;
            temp = Next(temp);
        }
        Next(P) = Next(prec);
        Next(prec) = P;
    }
}

void Del(Queue *Q, infotype *X, int Pr) {
    int temp;
    address P;

    *X = temp;
    P = Head(*Q);
    Head(*Q) = Next(Head(*Q));
    Next(P) = Nil;
    Dealokasi(&P);
}

void PrintQueue(Queue Q) {
    address P;

    if(IsEmpty(Q)) {
        printf("Queue kosong\n");
    } else {
        P = Head(Q);
        do {
            printf("|%d,%d| ", Info(P),Prio(P));
            P = Next(P);
        }
        while(P!=Nil);
        printf("\n");
    }
}
