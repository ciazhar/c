#include "queue.h"

void CreateEmpty (Queue *Q, int max)
{
    (*Q).T = (int *) malloc((max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = max;
}

boolean IsMax (Queue Q)
{
    return ((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1));
}

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void Add (Queue *Q,int val)
{
    HEAD(*Q)=1;
    TAIL(*Q)++;
    InfoTail(*Q) = val;
}

void Del (Queue *Q, int *val)
{
    int i=1;


    *val = InfoHead(*Q);

    do
    {
        (*Q).T[i] = (*Q).T[i+1];
        i++;
    }while (i!=NbElmt(*Q)+1);


    TAIL(*Q)--;
    if (TAIL(*Q)==NIL)
    {
        HEAD(*Q)=NIL;
    }
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}


