#include "list.h"

//////////////////***TEST LIST KOSONG***//////////////////
boolean IsEmpty (List L)
{
    return ((FIRST(L)==DUMMY) && (LAST(L)==DUMMY));
}
//////////////////***MEMBUAT LIST KOSONG***//////////////////
void createList (List *L)
{
    address P;

    P = ALOKASI(999);
    if (P!=NIL)
    {
        FIRST(*L) = P;
        LAST(*L) = P;
    }
    DUMMY = P;
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
////////////////////////***SEARCHING***/////////////////////////////
address Search_Add (List L,InfoType X)
{
    address P;

    P = FIRST(L);

    while (P!=LAST(L))
    {
        if (INFO(P)==X)
        {
            break;
        }
        P = NEXT(P);
    }

    return P;
}
boolean FSearch (List L,address P)
{
    boolean FIND = false;
    if (P==LAST(L))
    {
        FIND = false;
    }
    else
    {
        FIND = true;
    }

    return FIND;
}
//****************PRIMITIF BERDASARKAN NILAI****************//

////////////PENAMBAHAN ELEMEN//////////////
void InsVLast (List *L,InfoType X)
{
    address P;

    P = ALOKASI(X);
    if (P!=NIL)
    {
        Last(L,P);
    }
}

void InsVFirst (List *L,InfoType X)
{
    address P;

    P = ALOKASI(X);

    if (P!=NIL)
    {
        if (FIRST(*L)==DUMMY)
        {
            LAST_ADDRESS = P;
        }
        First(L,P);
    }
}
void Insert_After (List *L,InfoType X,InfoType DATA)
{
    address P,new_elm;

    P = Search_Add(*L,X);


    if (IsEmpty(*L))
    {
        InsVFirst(L,X);
    }
    else if (NEXT(P)==DUMMY)
    {
        InsVLast(L,X);
    }
    else
    {
        new_elm = ALOKASI(DATA);
        NEXT(new_elm) = NEXT(P);
        NEXT(P) = new_elm;
    }
}
////////////PENGHAPUSAN ELEMEN//////////////
void DelAfter (address P,address Prec)
{
    NEXT(Prec)=NEXT(P);
}

void DelVFirst (List *L,InfoType *X)
{
    address P;

    Del_First(L,&P);
    *X = INFO(P);
    NEXT(P) = NIL;

    DEALOKASI(P);
}
void DelVLast (List *L,InfoType *X)
{
    address P;

    Del_Last(L,&P);
    *X = INFO(P);
    NEXT(P) = LAST(*L);

    DEALOKASI(P);
}
//****************PRIMITIF BERDASARKAN ALAMAT****************//
///////////PENAMBAHAN ELEMEN////////////
void First (List *L,address P)
{
    NEXT(P) = FIRST(*L);
    FIRST(*L) = P;
}
void Last (List *L,address P)
{
    address Last;

    if (FIRST(*L)==LAST(*L))
    {
        LAST_ADDRESS = P;
        First(L,P);
    }
    else
    {
        NEXT(LAST_ADDRESS) = P;
        NEXT(P) = LAST(*L);
        LAST_ADDRESS = P;
    }
}
////////////PENGHAPUSAN ELEMEN /////////////////
void Del_First (List *L,address *P)
{
    *P = FIRST(*L);
    FIRST(*L) = NEXT(FIRST(*L));
}

void Del_Last (List *L,address *P)
{
    address Prec;
    Prec = NIL;
    *P = FIRST(*L);

    while (NEXT(*P)!=LAST(*L))
    {
        Prec = *P;
        *P = NEXT(*P);
    }
    if (Prec==NIL)
    {
        FIRST(*L)=LAST(*L);
    }
    else
    {
        NEXT(Prec)=LAST(*L);
    }
}
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
            if (NEXT(P)!=LAST(L))
            {
                printf("%d -> ",INFO(P));
            }
            else
            {
                printf("%d",INFO(P));
            }
            P = NEXT(P);
        }while (P!=LAST(L));
        puts("]");
        puts("=============Data===============");
    }
}

void menu ()
{
    puts("\nList of available Options :");
    puts("------ ---- ------ ------");
    puts("1> Insert First(Awal).");
    puts("2> Insert Last (Akhir).");
    puts("3> Delete First (Awal).");
    puts("4> Delete Last (Akhir).");
    puts("5> Search Elemen Data");
    puts("6> Insert after Elemen X.");
    puts("0> Keluar.");
    puts("==================================");
    puts("");
}
