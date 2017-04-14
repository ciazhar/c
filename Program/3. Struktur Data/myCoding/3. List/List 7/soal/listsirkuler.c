#include "listsirkuler.h"

boolean ListEmpty(List L) {
    return (First(L)==Nil);
}

void CreateList(List *L) {
    First(*L) = Nil;
}

address Alokasi(infotype X) {
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if(P!=Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }

}

void Dealokasi(address *P) {
    free(*P);
}

boolean FSearch(List L, address P) {
    boolean ketemu = false;
    address P1;

    P1 = First(L);
    while(1) {
        if(P1==P) {
            ketemu = true;
            break;
        }
        else {
            if(Next(P1)==First(L))
                break;
            else
                P1 = Next(P1);
        }
    }

    return ketemu;
}

address Search(List L, infotype X) {
    address P;
    boolean ketemu=false;

    P = First(L);
    while(1) {
        if(Info(P)==X) {
            ketemu = true;
            break;
        }
        else {
            if(Next(P)==First(L))
                break;
            else
                P = Next(P);
        }
    }

    if(ketemu==true)
        return P;
    else
        return Nil;
}

void InsertFirst(List *L, address P) {
    address Last;

    if(ListEmpty(*L)) {
        First(*L) = P;
        Next(P) = P;
    }
    else {
        Last = First(*L);
        while(1) {
            if(Next(Last)==First(*L)) {
                break;
            } else {
                Last = Next(Last);
            }
        }
        Next(P) = First(*L);
        First(*L) = P;
        Next(Last) = First(*L);
    }
}

void InsertAfter(List *L, address P, address Prec) {
    Next(P) = Next(Prec);
    Next(Prec) = P;
}

void InsertLast(List *L, address P) {
    address Last;

    if(ListEmpty(*L)) {
        First(*L) = P;
        Next(P) = P;
    }
    else {
        Last = First(*L);
        while(1) {
            if(Next(Last)==First(*L))
                break;
            else
                Last = Next(Last);
        }
        InsertAfter(&(*L),P,Last);
    }
}

void DelFirst(List *L, address *P) {
    address Last;

    if(Next(*P)==First(*L)) {
        First(*L) = Nil;
    }
    else {
        Last = First(*L);
        while(1) {
            if(Next(Last)==First(*L))
                break;
            else {
                Last = Next(Last);
            }
        }
        *P = First(*L);
        First(*L) = Next(First(*L));
        Next(*P) = Nil;
        Next(Last) = First(*L);
    }
}

void DelAfter(List *L, address *Pdel, address Prec) {
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Next(*Pdel) = Nil;
}

void DelLast(List *L, address *P) {
    address Last, Prec;

    if(Next(First(*L))==First(*L))
        First(*L) = Nil;
    else {
        Last = First(*L);
        Prec = Nil;
        while(1) {
            if(Next(Last)==First(*L))
                break;
            else {
                Prec = Last;
                Last = Next(Last);
            }
        }
        DelAfter(&(*L),&(*P),Prec);
    }
}

void InsVFirst(List *L, infotype X) {
    address P;

    P = Alokasi(X);
    if(P!=Nil) {
        InsertFirst(&(*L),P);
    }
}

void InsVLast(List *L, infotype X) {
    address P;

    P = Alokasi(X);
    if(P!=Nil) {
        InsertLast(&(*L),P);
    }
}

void DelVFirst(List *L, infotype *X) {
    address P;

    P = First(*L);
    *X = Info(P);
    DelFirst(&(*L),&P);
    Dealokasi(&P);
}

void DelVLast(List *L, infotype *X) {
    address P;

    DelLast(&(*L),&P);
    *X = Info(P);
    Dealokasi(&P);
}

void PrintInfo(List L) {
    address P;
    printf("\n");
    if(ListEmpty(L)) {
        printf("List kosong\n");
    }
    else {
        P = First(L);
        while(1) {
            printf("|%d| ", Info(P));

            if(Next(P)==First(L))
                break;
            P = Next(P);
        }
        printf("\n");
    }
}

int deret(List L){


}


int deretN(List L){


}

void InsertFirstGenap(List *L,infotype X){

}




