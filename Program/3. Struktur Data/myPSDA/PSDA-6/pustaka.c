#include "pustaka.h"

List L;

void CreateList(List *L)
{
    (*L).N = Nil;
}

boolean ListEmpty(List L)
{
    return ((L).N==Nil);
}

void InsertFirst(List *L, address P)
{
    (*L).N = LastAdd++;
}

void InsVFirst(List *L, infotype X)
{
    int i;
    address P;
    if(ListEmpty(*L))
    {
        FirstAdd = IndexMin;
        LastAdd = FirstAdd;
        (*L).N = LastAdd;
        (*L).TabMem[FirstAdd].Info = X;
    }
    else
    {
        P = First(*L);
        InsertFirst(&(*L),P);
        i = Last(*L);
        while(i!=First(*L))
        {
            (*L).TabMem[i].Info = (*L).TabMem[i-1].Info;
            i--;
        }
        (*L).TabMem[FirstAdd].Info = X;
    }
}

void PrintInfo(List L)
{
    address P;
    if(ListEmpty(L))
    {
        printf("List kosong\n");
    }
    else
    {
        P = First(L);
        do
        {
            printf("|%d| ", Info(P));
            P++;
        }
        while(P!=Last(L)+1);
    }
}

void InsertAfter(List *L, address P)
{
    (*L).N = P;
    LastAdd = (*L).N;
}

void InsertLast(List *L, address P)
{
    P = LastAdd;
    LastAdd++;
    (*L).N = LastAdd;
}

void InsVLast(List *L, infotype X)
{
    int i;
    address P;
    if(ListEmpty(*L))
    {
        FirstAdd = IndexMin;
        LastAdd = FirstAdd;
        (*L).N = LastAdd;
        (*L).TabMem[FirstAdd].Info = X;
    }
    else
    {
        P = First(*L);
        InsertLast(&(*L),P);
        (*L).TabMem[LastAdd].Info = X;
    }
}

void DelFirst(List *L, address *P)
{
    (*L).N = LastAdd--;
}

void DelVFirst(List *L, infotype *X)
{
    address P;
    int i;
    *X = (*L).TabMem[FirstAdd].Info;
    if((*L).N==1)
    {
        (*L).N--;
    }
    else
    {
        i = 1;
        while(i!=Last(*L)+1)
        {
            (*L).TabMem[i].Info = (*L).TabMem[i+1].Info;
            i++;
        }
        DelFirst(&(*L),&P);
    }
}

void DelLast(List *L, address *P)
{
    LastAdd = (*L).N;
    (*L).N = (*L).N-1;
}

void DelVLast(List *L, infotype *X)
{
    address P;
    int i;
    *X = (*L).TabMem[FirstAdd].Info;
    if((*L).N==1)
    {
        (*L).N--;
    }
    else
    {
        DelLast(&(*L),&P);
    }
}

int NbElmt(List L)
{
    int jum = 0;
    address P;
    if(ListEmpty(L))
    {
        return jum;
    }
    else
    {
        P = First(L);
        while(P!=Last(L)+1) {
            jum = jum + 1;
            P++;
        }
    }
    return jum;
}

float Average(List L)
{
    float rata;
    int sum=0;
    address P;
    P = First(L);
    while(P!=Last(L)+1) {
        sum = sum + Info(P);
        P++;
    }
    rata = sum/(float)NbElmt(L);
    return rata;
}

int Max(List L)
{
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = P + 1;
    if(P!=Last(L)+1)
    {
        R = Info(P);
    }
    else {
        return Q;
    }
    while(P!=Last(L)+1)
    {
        if(Q<=R)
            Q = R;
        P++;
        if(P!=Last(L)+1)
            R = Info(P);
    }
    return Q;
}

address AdrMax(List L)
{
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    max = P;
    P = P + 1;
    if(P!=Last(L)+1)
    {
        R = Info(P);
        min = P;
    }
    else return max;

    while(P!=Last(L)+1)
    {
        if(Q<=R)
        {
            Q = R;
            max = min;
        }
        P++;
        if(P!=Last(L)+1)
            R = Info(P);
            min = P;
    }
    return max;
}

int Min(List L)
{
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = P + 1;
    if(P!=Last(L)+1)
    {
        R = Info(P);
    }
    else return Q;

    while(P!=Last(L)+1)
    {
        if(Q>=R)
            Q = R;
        P++;
        if(P!=Last(L)+1)
            R = Info(P);
    }
    return Q;
}

address AdrMin(List L)
{
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    min = P;
    P = P + 1;
    if(P!=Last(L)+1)
    {
        R = Info(P);
        max = P;
    }
    else
    {
        return min;
    }
    while(P!=Last(L)+1)
    {
        if(Q>=R)
        {
            Q = R;
            min = max;
        }
        P++;
        if(P!=Last(L)+1)
            R = Info(P);
            max = P;
    }
    return min;
}

void DelAll(List *L)
{
    (*L).N = Nil;
}

address Search(List L, infotype X)
{
    address P;
    P = First(L);
    while((P!=Last(L)+1) && (Info(P)!=X)) {
        P++;
    }
    return P;
}

boolean FSearch(List L, address P)
{
    boolean found = false;
    address Pt;

    Pt = First(L);
    while((Pt!=Last(L)+1) && (!found))
    {
        if(Pt==P)
            found = true;
        else Pt++;
    }
    return found;
}

void InversList(List *L)
{
    int i;
    int temp;
    address P = First(*L);
    address Q = Last(*L);

    for(i=1;i<=NbElmt(*L)/2;i++)
    {
        temp = (*L).TabMem[P].Info;
        (*L).TabMem[P].Info = (*L).TabMem[Q].Info;
        (*L).TabMem[Q].Info = temp;
        P++;
        Q--;
    }
}

void CopyList(List *L1, List *L2)
{
    (*L2) = (*L1);
}

void Konkat(List L1, List L2, List *L3)
{
    address P;
    int i;

    if(ListEmpty(L1))
    {
        CopyList(&L2,&(*L3));
    }
    else
    {
        CopyList(&L1,&(*L3));
    }
}
