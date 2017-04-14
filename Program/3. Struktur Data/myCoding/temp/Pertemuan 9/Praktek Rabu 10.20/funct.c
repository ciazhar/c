#include "list.h"

//////////////////***TEST LIST KOSONG***//////////////////
boolean IsEmpty (List L)
{
    return (FIRST(L)==NIL);
}
//////////////////***MEMBUAT LIST KOSONG***//////////////////
void createList (List *L)
{
    FIRST(*L)=NIL;
    LAST(*L)=NIL;
}

//////////////////***MANAJEMEN MEMORI***//////////////////
address ALOKASI (InfoType X)
{
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if (P!=NIL)
    {
        INFO(P)=X;
        NEXT(P) = NIL;
    }
    return P;
}

void DEALOKASI (address P)
{
    free(P);
}
//////////////////////////***SEARCHING***/////////////////////////////
boolean Search_Elmt (address P)
{
    if (P==NIL)
    {
        return false;
    }
    else
    {
        return true;
    }

}
address GetAddres (List L,InfoType X)
{
    address P;

    P = FIRST(L);

    while (P!=LAST(L))
    {
        if (INFO(P)==X)
        {
            return P;
        }
        P = NEXT(P);
    }

    if (INFO(P)==X)
    {
        return P;
    }
    else
    {
        return NIL;
    }
}
////****************PRIMITIF BERDASARKAN NILAI****************//
//
//////////////PENAMBAHAN ELEMEN//////////////
void InsVLast (List *L,InfoType X)
{
    address P;

    P = ALOKASI(X);
    if (P!=NIL)
    {
         if (IsEmpty(*L))
         {
            LAST(*L) = P;
            NEXT(P) = FIRST(*L);
            FIRST(*L) = P;
            NEXT(LAST(*L)) = FIRST(*L);
         }
         else
         {
            NEXT(LAST(*L)) = P;
            LAST(*L) = P;
            NEXT(LAST(*L)) = FIRST(*L);
         }
    }
}


void InsVFirst (List *L,InfoType X)
{
    address P;

    P = ALOKASI(X);

    if (P!=NIL)
    {
        if (IsEmpty(*L))
        {
            LAST(*L) = P;
        }
         NEXT(P) = FIRST(*L);
         FIRST(*L) = P;
         NEXT(LAST(*L)) = FIRST(*L);
    }
}

void Insert_After (List *L,InfoType X,InfoType DATA)
{
    address P,new_elm;

    P = GetAddres(*L,X);


    if (IsEmpty(*L))
    {
        InsVFirst(L,DATA);
    }
    else if (NEXT(P)==FIRST(*L))
    {
        InsVLast(L,DATA);
    }
    else
    {
        new_elm = ALOKASI(DATA);
        NEXT(new_elm) = NEXT(P);
        NEXT(P) = new_elm;
    }
}

void DelAfter (address P,address Prec)
{
    NEXT(Prec)=NEXT(P);
}
//////////////PENGHAPUSAN ELEMEN//////////////

void DelVFirst (List *L,InfoType *X)
{
    address P;

    if (NEXT(FIRST(*L))==FIRST(*L))
    {
        *X = INFO(FIRST(*L));
        FIRST(*L) = NIL;
        DEALOKASI(FIRST(*L));
    }
    else
    {
        P = FIRST(*L);
        *X = INFO(P);

        FIRST(*L) = NEXT(FIRST(*L));
        NEXT(LAST(*L)) = FIRST(*L);

        NEXT(P) = NIL;
        DEALOKASI(P);
    }
}
void DelVLast (List *L,InfoType *X)
{
    address P,prev_last;

    if (NEXT(FIRST(*L))==FIRST(*L))
    {
        *X = INFO(FIRST(*L));
        FIRST(*L) = NIL;
        DEALOKASI(FIRST(*L));
    }
    else
    {
        *X = INFO(LAST(*L));

        prev_last = LAST(*L);
        P = FIRST(*L);

        while (NEXT(P)!=LAST(*L))
        {
            P = NEXT(P);
        }

        LAST(*L) = P;
        NEXT(LAST(*L)) = FIRST(*L);

        NEXT(prev_last) = NIL;
        DEALOKASI(prev_last);
    }
}
//
//////////////PENGHAPUSAN ELEMEN /////////////////

//

//*******************PROSES SEMUA LIST*********************
void ShowData (List L)
{
    address P;

    if (IsEmpty(L))
    {
        printf("Datanya Kosong...!\n");
    }
    else
    {
        P = FIRST(L);
        puts("=============Data===============");
        printf("[");
        do
        {
            if (NEXT(P)!=FIRST(L))
            {
                printf("%d -> ",INFO(P));
            }
            else
            {
                printf("%d",INFO(P));
            }
            P = NEXT(P);
        }while (P!=FIRST(L));
        puts("]");
        puts("=============Data===============");

    }
}
