#include "container.h"

address Alokasi(infotype x) {
    address R;

    R = (address)malloc(sizeof(ElmtQueue));

    if(R!=Nil) {
        Info(R) = x;
        Next(R) = Nil;
    }
    return R;
}
void Dealokasi(address *x) {
    free( &(*x) );
}
boolean IsEmpty(Queue Q) {
    return ( (HEAD(Q)==Nil) && (TAIL(Q)==Nil) );
}
int NbElmt(Queue Q) {
    address R;
    int jml = Nil;

    if(IsEmpty(Q)) {
        return jml;
    }
    else {
        R = HEAD(Q);
        do {
            jml++;

            R = Next(R);

        }while(R!=Nil);
        return jml;
    }

}
void PrintQueue(Queue Q) {
    address R;

    if(IsEmpty(Q)) {
        printf("QUEUE Kosong !!!");
    }
    else {
        R = HEAD(Q);
        do {
            printf("%d ", Info(R));

            if(Next(R)!=Nil) {
                printf(" -> ");
            }

            R = Next(R);
        }while(R!=Nil);
    }
}
void CreateEmpty(Queue *Q) {
    HEAD(*Q) = Nil;
    TAIL(*Q) = Nil;
}
void AddV(Queue *Q, address x) {
    if(IsEmpty(*Q)) {
        Next(x) = HEAD(*Q);
        HEAD(*Q) = x;
        TAIL(*Q) = x;
    }
    else {
        Next(TAIL(*Q)) = x;
        TAIL(*Q) = x;
    }
}

void Add(Queue *Q, infotype x) {
    address R;

    R = Alokasi(x);
    if(R!=Nil) {
        AddV(Q, R);
    }
}
void DelV(Queue *Q, address *x) {
    *x = HEAD(*Q);
    HEAD(*Q) = Next(HEAD(*Q));

    Next(*x) = Nil;
    Dealokasi(*x);
}

void Del(Queue *Q, infotype *x) {
    address R;

    if(IsEmpty(*Q)) {
        printf("QUEUE Kosong !!!");
    }
    else {
        R = HEAD(*Q);
        DelV(&(*Q), &R);
    }

}
