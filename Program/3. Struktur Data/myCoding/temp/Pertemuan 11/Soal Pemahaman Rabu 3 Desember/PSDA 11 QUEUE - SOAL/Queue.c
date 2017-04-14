#include "Queue.h"

void CreateEmpty(Queue *Q)
{
    HEAD(*Q)=Nil;
    TAIL(*Q)=Nil;
}

void Alokasi(address *P, char buah[])
{
    (*P)=(address)malloc(sizeof(ElmtQueue));
    if((*P)!=Nil)
    {
        strcpy(ISI_BUAH(*P),buah);
        NEXT(*P)=Nil;
    }
}

boolean IsEmpty(Queue Q)
{
    return (HEAD(Q)==Nil && TAIL(Q)==Nil);
}

void Add(Queue *Q, char buah[])
{
    address P;

    Alokasi(&P,buah);
    if(P!=Nil)
    {
        if(IsEmpty(*Q))
        {
            HEAD(*Q)=P;
            TAIL(*Q)=P;
        }
        else
        {
            NEXT(TAIL(*Q))=P;
            TAIL(*Q)=P;
        }
    }
}

void PrintInfo(Queue Q)
{
    address P;

    if(IsEmpty(Q))
    {
        printf("Queue kosong.");
    }
    else
    {
        P=HEAD(Q);
        printf("HEAD>>");
        while(P!=Nil)
        {
            printf("- [%s] -",ISI_BUAH(P));
            P=NEXT(P);
        }
        printf("<<TAIL\n");
    }
}
