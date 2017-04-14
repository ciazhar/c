#include "header.h"


boolean ListEmpty(List L)
{
    return (FIRST(L) == Nil);
}

void CreateList(List *L)
{
    FIRST(*L) = Nil;
    LAST(*L) = Nil;
}

address Alokasi(infotype X)
{
    address P;

    P = (address)malloc(sizeof(ElmtList));
    INFO(P) = X;
    NEXT(P) = Nil;
    PREV(P) = Nil;
    return P;
}

void Dealokasi(address *P)
{
    free(*P);
}



address GetAddress(List L, infotype X)
{
    address P;

    P = FIRST(L);

    while (P != Nil)
    {
        if (INFO(P) == X)
        {
            break;
        }
        else
            P = NEXT(P);
    }
    return P;
}

void InsertFirst(List *L, address P)
{
    if (ListEmpty(*L))
    {
        FIRST(*L) = P;
        LAST(*L) = P;
        NEXT(P) = Nil;
        PREV(P) = Nil;
    }
    else
    {
        NEXT(P) = FIRST(*L);
        PREV(FIRST(*L)) = P;
        PREV(P) = Nil;
        FIRST(*L) = P;
    }
}

void InsertAfter(List *L, address P, address Prec)
{
    NEXT(P) = NEXT(Prec);
    NEXT(Prec) = P;
}

void InsertLast(List *L, address P)
{
    address Prec;
    if (ListEmpty(*L))
    {
        InsertFirst(L,P);
    }
    else
    {
        NEXT(LAST(*L)) = P;
        PREV(P) = LAST(*L);
        LAST(*L) = P;
    }
}

void DelFirst(List *L, address *P)
{
    if(NEXT(FIRST(*L)) == Nil)
    {
             FIRST(*L) = Nil;
    }
    else
    {
        *P = FIRST(*L);
        FIRST(*L) = NEXT(*P);
        PREV(FIRST(*L)) = Nil;
        NEXT(*P) = Nil;
    }
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel = NEXT(Prec);
    NEXT(Prec) = NEXT(NEXT(Prec));
    NEXT(*Pdel) = Nil;
}

void DelLast(List *L, address *P)
{

    if(NEXT(FIRST(*L)) == Nil)
    {
        *P = FIRST(*L);
        FIRST(*L) = Nil;
    }
    else
    {
        *P = LAST(*L);
        LAST(*L) = PREV(LAST(*L));
        NEXT(LAST(*L)) = Nil;
    }
}

void InsVFirst(List *L, infotype X)
{
    address P;

    P = Alokasi(X);
    if(P!=Nil)
    {
        InsertFirst(&(*L),P);
    }
}

void InsVLast(List *L, infotype X)
{
    address P;

    P = Alokasi(X);
    if(P!=Nil)
    {
        InsertLast(&(*L),P);
    }
}

void DelVFirst(List *L, infotype *X)
{
    address P;

    if (ListEmpty(*L))
    {
        puts("Data sudah kosong.!");
    }
    else
    {
        P = FIRST(*L);
    *X = INFO(P);
    DelFirst(&(*L),&P);
    Dealokasi(&P);
    }

}

void DelVLast(List *L, infotype *X)
{
    address P;

    if (ListEmpty(*L))
    {
        puts("Data sudah kosong.!");
    }
    else
    {
        DelLast(&(*L),&P);
    *X = INFO(P);
    Dealokasi(&P);

    }

}

void PrintInfo(List L)
{
    address P;

    if (ListEmpty(L))
    {
        printf("Datanya Kosong...!\n");
    }
    else
    {
        P = FIRST(L);
        puts("=============Data===============");
        printf("[NULL ");
        do
        {

                printf("<- %d -> ",INFO(P));

            P = NEXT(P);
        }while (P!=Nil);

        puts(" NULL]");
        puts("=============Data===============");

    }
}



