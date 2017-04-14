#include "listeks.h"

List L;
address P;

boolean ListEmpty(List L)
{
    return (First(L)==Nil);
}

void CreateList(List *L)
{
    First((*L))=Nil;
}

address Alokasi(infotype X)
{
    P = (address)malloc(sizeof(ElmtList));
    if(P!=Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return (P);
}

void Dealokasi(address *P)
{
    free(*P);
}

address Search(List L, infotype X)
{
    address P;

    if(ListEmpty(L))
        return Nil;
    else {
        P=First(L);
        do {
            if(Info(P)==X) {
                break;
            }
            else
                P=Next(P);
        } while(P!=Nil);
    }
    return P;
}

boolean FSearch(List L, address P)
{
    address Pt;
    boolean Found;

    Pt=First(L);
    Found=false;
    while((Pt!=Nil) && (Found!=true)) {
        if(Pt==P)
            Found=true;
        else
            Pt=Next(Pt);
    }
    return Found;
}

address SearchPrec(List L, infotype X)
{
    address P;
    address Pr;

    P=First(L);
    Pr=P-1;
    if(ListEmpty(L))
        return Nil;
    else {
        while(P!=Nil) {
            if(Info(P)==X) {
                return Pr;
                break;
            }
            else
                P=Next(P);
        }
    }
}

void InsVFirst(List *L, infotype X)
{
    address P;

    P=Alokasi(X);
    if(P!=Nil)
        InsertFirst(L,P);
}

void InsVLast(List *L, infotype X) {
    address P;

    P = Alokasi(X);
    if(P!=Nil) {
        InsertLast(L,P);
    }
}

void DelVFirst(List *L, infotype *X) {
    address P;

    DelFirst(L,&P);
    *X = Info(P);
    Dealokasi(&P);
}

void DelVLast(List *L, infotype *X) {
    address P;

    DelLast(L,&P);
    *X = Info(P);
    Dealokasi(&P);
}

void InsertFirst(List *L, address P)
{
    Next(P)=First((*L));
    First((*L))=P;
}

void InsertAfter(List *L, address P, address Prec)
{
    if(ListEmpty(*(L))) {
        InsertFirst(&(*L),P);
    }
    else {
        Next(P) = Next(Prec);
        Next(Prec) = P;
    }
}

void InsertLast(List *L, address P) {
    address Last;

    if(First(*L)==Nil) {
        InsertFirst(&(*L),P);
    }
    else {
        Last = First(*L);
        while(Next(Last)!=Nil) {
            Last = Next(Last);
        }
        InsertAfter(&(*L),P,Last);
    }
}

void DelFirst(List *L, address *P) {
    *P = First(*L);
    First(*L) = Next(First(*L));
    Next(*P) = Nil;
}

void DelP(List *L, infotype X) {
    address P;

    P = Search(*L,X);
    Dealokasi(&P);
}

void DelLast(List *L, address *P) {
    address PrecLast;
    address Last;

    Last = First(*L);
    PrecLast = Nil;
    while(Next(Last)!=Nil) {
        PrecLast = Last;
        Last = Next(Last);
    }

    if(PrecLast==Nil) {
        First(*L) = Nil;
    }
    else {
        Next(PrecLast) = Nil;
    }
}

void DelAfter(List *L, address *Pdel, address Prec) {
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Next(*Pdel) = Nil;
}

void PrintInfo(List L) {
    address P;

    if(ListEmpty(L)) {
        printf("List kosong\n");
    }
    else {
        P = First(L);
        printf("{");
        do {
            if(Next(P)!=Nil) {
                printf("%d ", Info(P));
            }
            else {
                printf("%d", Info(P));
            }
            P = Next(P);
        }
        while(P!=Nil);
        printf("}\n");
    }
}

int NBElmt(List L) {
    int jumlah = 0;
    address P;

    if(ListEmpty(L)) {
        return jumlah;
    }
    else {
        P = First(L);
        while(P!=Nil) {
            jumlah = jumlah + 1;
            P = Next(P);
        }
        return jumlah;
    }
}

infotype Max(List L)
{
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = Next(P);
    if(P!=Nil)
        R = Info(P);
    else
        return Q;
    while(P!=Nil) {
        if(Q <= R) {
            Q = R;
        }
        P = Next(P);
        if(P!=Nil)
            R = Info(P);
    }

    return Q;
}

address AdrMax(List L) {
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    max = P;
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
        min = P;
    }
    else
        return max;

    while(P!=Nil) {
        if(Q<=R) {
            Q = R;
            max = min;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
            min = P;
        }
    }
    return max;
}

infotype Min(List L) {
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = Next(P);
    if(P!=Nil)
        R = Info(P);
    else
        return Q;

    while(P!=Nil) {
        if(Q>=R) {
            Q = R;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
        }
    }
    return Q;
}

address AdrMin(List L) {
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    min = P;
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
        max = P;
    }
    else
        return min;

    while(P!=Nil) {
        if(Q>=R) {
            Q = R;
            min = max;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
            max = P;
        }
    }
    return min;
}

float Average(List L) {
    address P;
    float sum = 0;

    P = First(L);
    while(P!=Nil) {
        sum = sum + Info(P);
        P = Next(P);
    }

    return sum/(float)NBElmt(L);
}

void DelAll(List *L) {
    address P;

    P = First(*L);
    while(P!=Nil) {
        Dealokasi(&P);
        P = Next(P);
    }
    //printf("Semua elemen list terhapus\n");
}

void InversList(List *L) {
    address First, Last;
    int i, jum, NB, temp;

    First = First(*L);
    Last = First(*L);
    NB = NBElmt(*L);
    for(i=0;i<NBElmt(*L)/2;i++) {
        jum = NB;
        while(jum>1) {
            Last = Next(Last);
            jum--;
        }
        NB--;
        temp = Info(First);
        Info(First) = Info(Last);
        Info(Last) = temp;
        First = Next(First);
        Last = First(*L);
    }
}

List FInversList(List L) {
    List LInvers;
    address P;

    CreateList(&LInvers);
    P = First(L);
    while(P!=Nil) {
        InsVFirst(&LInvers,Info(P));
        P = Next(P);
    }
    return LInvers;
}

void CopyList(List *L1, List *L2) {
    First(*L2) = First(*L1);
}

List FCopyList(List L) {
    address P;
    List LCopy;

    CreateList(&LCopy);
    P = First(L);
    while(P!=Nil) {
        if(P==First(L)) {
            InsVFirst(&LCopy,Info(P));
        }
        else {
            InsVLast(&LCopy,Info(P));
        }
        P = Next(P);
    }

    return LCopy;
}

void CpAlokList(List Lin, List *Lout) {
    address P;

    P = First(Lin);
    CreateList(&(*Lout));
    while(P!=Nil) {
        if(P==First(Lin)) {
            InsVFirst(&(*Lout),Info(P));
        }
        else {
            InsVLast(&(*Lout),Info(P));
        }
        P = Next(P);
    }
    DelAll(&Lin);
}

void Konkat(List L1, List L2, List *L3) {
    address P;

    P = First(L1);
    CreateList(&(*L3));
    if(P==Nil) {
        P = First(L2);
        while(P!=Nil) {
            InsVLast(&(*L3),Info(P));
            P = Next(P);
        }
    }
    else {
        while(P!=Nil) {
            if(P==First(L1)) {
                InsVFirst(&(*L3),Info(P));
            }
            else {
                InsVLast(&(*L3),Info(P));
            }
            P = Next(P);
        }
        P = First(L2);
        while(P!=Nil) {
            InsVLast(&(*L3),Info(P));
            P = Next(P);
        }
    }
}

void Konkat1(List *L1, List *L2, List *L3) {
    address P;
    int i;

    CreateList(&(*L3));
    Konkat(*L1,*L2,&(*L3));

    for(i=1;i<=NBElmt(*L1);i++) {
        DelVFirst(&(*L1),&P);
    }

    for(i=1;i<=NBElmt(*L2);i++) {
        DelVFirst(&(*L2),&P);
    }
}

void PecahList(List *L1, List *L2, List L) {
    address P;
    int l1, l2;

    l1 = NBElmt(L)/2;
    l2 = NBElmt(L) - l1;
    P = First(L);
    if(P==Nil) {
        First(*L1) = First(*L2);
    }
    else {
        while(l1>0) {
            if(P==First(L)) {
                InsVFirst(&(*L1),Info(P));
                l1--;
                P = Next(P);
            }
            else {
                InsVLast(&(*L1),Info(P));
                l1--;
                P = Next(P);
            }
        }
        InsVFirst(&(*L2),Info(P));
        l2--;
        P = Next(P);
        while(l2>0) {
            InsVLast(&(*L2),Info(P));
            l2--;
            P = Next(P);
        }
    }
}

/*Jawaban Soal*/
void InsVFirstGanjil(List *L,infotype X)
{
    address P;

    P=Alokasi(X);
    if(P!=Nil)
    {if(Info(P)%2==1)
        {
            InsertFirst(L,P);
        }
    }
}



void MakeListGenap(List *L)
{
 int ganjil;
 address P;

    if(ListEmpty(*L))
    {
        printf("List kosong\n");
    }
    else
    {
        P = First(*L);
        printf("{");
        do
        {
            if(Info(P)!=Nil)
            {   if(Info(P)%2==1)
                {
                ganjil=Info(P)+1;
                }
                printf("%d ", ganjil);
            }
            else
            {
                printf("%d", Info(P));
            }
            P = Next(P);
        }
        while(P!=Nil);
        printf("}\n");
    }
}

//IKI WES BENER


