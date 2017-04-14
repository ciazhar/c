#include "Queue.h"

boolean IsEmpty(Queue Q)
{
    return ((Head(Q)==Nil)&&(Tail(Q)==Nil));
}

boolean IsFull(Queue Q)
{
    return ((Head(Q)==1)&&(Tail(Q)==MaxEl(Q)));
}

int NBElmt(Queue Q)
{
    return (Tail(Q)-Head(Q)+1);
}

void CreateEmpty(Queue *Q,int Max)
{
    (*Q).T=(infotype *) malloc((Max+1) * sizeof(infotype));
    if((*Q).T != NULL)
    {
        MaxEl(*Q)=Max;
        Head(*Q)=Nil;
        Tail(*Q)=Nil;
    }
    else
    {
        MaxEl(*Q)=Nil;
    }
}

void DeAlokasi(Queue *Q)
{
    MaxEl(*Q)=Nil;
    free((*Q).T);
}

void Add(Queue *Q,infotype X)
{
    if(IsEmpty(*Q))
    {
        Head(*Q)=1;
        Tail(*Q)=1;
    }
    else
    {
        Tail(*Q)++;
    }
    InfoTail(*Q)=X;
}

void Del(Queue *Q,infotype *X)
{
    *X=InfoHead(*Q);
    address k,j;
    if(Head(*Q)==Tail(*Q))
    {
        Head(*Q)=Nil;
        Tail(*Q)=Nil;
    }
    else
    {
        Head(*Q)++;
        k=Head(*Q);
        j=1;
        do
        {
            *((*Q).T+j)=*((*Q).T+k);
            k++;j++;
        }while(k<=Tail(*Q));
        Head(*Q)=1;Tail(*Q)=j-1;
    }
}

void tampil()
{
    printf("(");
    for(i=Head(f);i<=Tail(f);i++)
    {
        if(i==f.TAIL)
        {
            printf("%d",f.T[i]);
        }
        else
        {
            printf("%d ",f.T[i]);
        }
    }
    printf(")");
    printf("\nalamat head : %d",Head(f));
    printf("\nalamat tail : %d",Tail(f));
}
