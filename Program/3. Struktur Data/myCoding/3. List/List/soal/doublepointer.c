#include "doublepointer.h"

boolean ListEmpty(List L) {
    return ((First(L)==Nil) && (Last(L)==Nil));
}

void CreateList(List *L) {
    First(*L) = Nil;
    Last(*L) = Nil;
}

address Alokasi(infotype X) {
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if(P!=Nil) {
        Info(P) = X;
        Next(P) = Nil;
        Prev(P) = Nil;
    }
}

void Dealokasi(address *P) {
    free(*P);
}

boolean FSearch(List L, address P) {
    address Pt;
    boolean found = false;

    Pt = First(L);
    while(Pt!=Nil && !found) {
        if(Pt==P) {
            found = true;
        } else {
            Pt = Next(Pt);
        }
    }

    return found;
}

address Search(List L, infotype X) {
    address P;

    P = First(L);
    while(P!=Nil) {
        if(Info(P)==X) {
            break;
        } else {
            P = Next(P);
        }
    }

    return P;
}

void InsertFirst(List *L, address P) {
    Next(P) = First(*L);
    if(ListEmpty(*L)) {
        Last(*L) = P;
    } else {
        Prev(First(*L)) = P;
    }
    First(*L) = P;
}

void InsVFirst(List *L, infotype X){

    address P;
    P=Alokasi(X);

    InsertFirst(&(*L),P);
}
void InsertAfter(List *L, address P, address Prec) {
    Prev(Next(Prec)) = P;
    Next(P) = Next(Prec);
    Prev(P) = Prec;
    Next(Prec) = P;
}

void InsertLast(List *L, address P) {
    Prev(P) = Last(*L);
    if (!ListEmpty(*L)) {
        Next(Last(*L)) = P;
    } else {
        First(*L) = P;
    }
    Last(*L) = P;
}

void DelFirst(List *L, address *P) {
    *P = First(*L);
    if (First(*L) == Last(*L)) {
        Last(*L) = Nil;
    }
    First(*L) = Next(First(*L));
    if (First(*L) != Nil) {
        Prev(First(*L)) = Nil;
    }
    Next(*P) = Nil;
}

void DelAfter(List *L, address *Pdel, address Prec) {
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Prev(Next(Prec)) = Prec;
    Next(*Pdel) = Nil;
    Prev(*Pdel) = Nil;
}

void DelLast(List *L, address *P) {
    *P = Last(*L);
    if (First(*L) == Last(*L)) {
        First(*L) = Nil;
    }
    Last(*L) = Prev(Last(*L));
    if (Last(*L) != Nil) {
        Next(Last(*L)) = Nil;
    }
    Prev(*P) = Nil;
}

void PrintInfo(List L) {
    address P;

    P = First(L);
    if(ListEmpty(L))
        printf("List Kosong\n");
    else {
        printf("\n");
        do {
            printf("|%d| ", Info(P));
            P = Next(P);
        }
        while(P!=Nil);
        printf("\n");
    }
}

int NilaiTengah(List L)
{
    address P1;
    address P2;
    P1=First(L);
    P2=Last(L);

    if(P1==P2)
    {
        return Info(P1);
    }
    else
    {
        while(P1!=P2)
        {
            P1=Next(P1);
            P2=Prev(P2);
        }
    }
    return Info(P1);
}
boolean CekTengah(List L)
{

    if(NilaiTengah(L)%2!=0)
    {
        return false;
    }
    else
    {
        return true;
    }


}


int jumlah(List L)
{
    address P1;
    address P2;

    int Jum;
    P1=First(L);
    P2=Last(L);

    P1=Next(P1);
    P2=Prev(P2);

Jum= Info(P1)+Info(P2);
return Jum;

}


boolean ceksama(List L)
{
    address P1;
    address P2;

    P1=First(L);
    P2=Last(L);

    P1=Next(P1);
    P2=Prev(P2);

    if(P1==P2)
    {
        return true;
    }
    else
    {
        return false;
    }
}



