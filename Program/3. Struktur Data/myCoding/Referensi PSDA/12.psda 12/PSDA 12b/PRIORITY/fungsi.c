#include "priority.h"

void ALOKASI (address *P,InfoType X)
{
    *P = (address)malloc(sizeof(Elemen));

    if (*P!=NIL)
    {
        INFO(*P) = X;
        NEXT(*P) = NIL;
        PRIO(*P) = 0;
    }
}

void DEALOKASI (address P)
{
    free(P);
}

boolean IsEmpty (P_QUEUE Q)
{
    return ((HEAD(Q)==NIL) && (TAIL(Q)==NIL));
}

int NbElmt (P_QUEUE Q)
{
    address P;
    int sum=0;

    P = HEAD(Q);

    while (P!=NIL)
    {
        sum++;
        P = NEXT(P);
    }

    return sum;
}

void CreateEmpty (P_QUEUE *Q)
{
    HEAD(*Q) = NIL;
    TAIL(*Q) = NIL;
}

void Add (P_QUEUE *Q,InfoType X,int PRI)
{
    address P;
    address temp,prec;

    ALOKASI(&P,X);
    PRIO(P) = PRI;

    if (IsEmpty(*Q))
    {
        HEAD(*Q) = P;
        TAIL(*Q) = P;
    }
    else if (NEXT(HEAD(*Q))==NIL)
    {
         if (PRIO(P)>=PRIO(HEAD(*Q)))
         {
            NEXT(P) = HEAD(*Q);
            HEAD(*Q) = P;
         }
         else if (PRIO(P)<PRIO(HEAD(*Q)))
         {
             NEXT(TAIL(*Q)) = P;
             TAIL(*Q) = P;
         }
    }
    else if (NbElmt(*Q)>=2)
    {
             if (PRIO(P)>=PRIO(HEAD(*Q)))
             {
                 NEXT(P) = HEAD(*Q);
                 HEAD(*Q) = P;
             }// 20 15 10 5
             else
             {
                 temp = HEAD(*Q);
                 while (PRIO(temp)>PRIO(P))
                 {
                     prec = temp;
                     temp = NEXT(temp);
                     if (temp==NIL)
                     {
                         TAIL(*Q) = P;
                         break;
                     }
                 }
                 NEXT(prec) = P;
                 NEXT(P) = temp;
             }
    }
}

void Del (P_QUEUE *Q,InfoType *X)
{
    address P;

    if (NEXT(HEAD(*Q))==NIL)
    {
        P = HEAD(*Q);
        *X = INFO(P);
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        DEALOKASI(P);
    }
    else
    {
        P = HEAD(*Q);
        *X = INFO(P);
        HEAD(*Q) = NEXT(HEAD(*Q));
        DEALOKASI(P);
    }
}

void Show_Data(P_QUEUE Q)
{
    address P;

    P = HEAD(Q);
    while (P!=NIL)
    {
        printf("%d , ",INFO(P));
        P = NEXT(P);
    }
}
