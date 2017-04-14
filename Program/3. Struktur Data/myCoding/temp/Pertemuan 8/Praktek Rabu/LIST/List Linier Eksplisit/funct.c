#include "list.h"

void createList(List *L) //tujuan pointer untuk mengubah isi di dalamnya
{
    FIRST(*L) = NIL; //membuat list kosong
}

address Alokasi(InfoType X)
{
    address P;

    P = (address)malloc(sizeof(ElmtList));

    if(P!=NIL)
    {
        NEXT(P) = NIL;
        INFO(P) = X;
    }
    else
    {
        printf("Memori Tidak Tersedia\n");
    }

    return P;
}

void IsEmpty (List L) //tidak mengubah apa apa, makanya nda make pointer
{
    if(FIRST(L) == NIL)
    {
        printf("List Kosong\n");
    }
    else
    {
        printf("List Tidak Kosong\n");
    }
}

void DeAlokasi (address P)
{
    free(P);
}

void TambahDepan (List *L, InfoType X)
{
    address Element;

    Element = Alokasi(X);

    if(Element!=NIL)
    {
        NEXT(Element) = FIRST(*L);
        FIRST(*L) = Element;
    }
}

void PrintInfo (List L)
{
    address P;

    P = FIRST(L);

    while(NEXT(P)!=NIL)
    {
        printf("%d ",INFO(P));
        P = NEXT(P);
    }
    printf("%d ",INFO(P));
}
