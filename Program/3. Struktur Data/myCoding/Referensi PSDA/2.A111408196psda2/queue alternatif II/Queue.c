#include "Queue.h"

boolean IsEmpty(Queue Q)
{
    return ((Head(Q)==Nil) && (Tail(Q)==Nil));
}

boolean IsFull(Queue Q)
{
    return ((Head(Q)==1) && (Tail(Q)==MaxEl(Q)));
}

int NBElmt(Queue Q)
{
    if(Tail(Q)==0&&Head(Q)==0)
    {
        return 0;
    }
    else
    {
        return (Tail(Q)-Head(Q)+1);
    }
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

void Add(Queue *Q, infotype X)
{
    address i,j;
    if(IsEmpty(*Q))
    {
        Head(*Q)=1; Tail(*Q)=1;
    }
    else
    {
        if(Tail(*Q)==MaxEl(*Q))
        {
            i=Head(*Q);j=1;
            do
            {
                *((*Q).T+j)=*((*Q).T+i);
                i++;j++;
            }while(i<=Tail(*Q));
            Head(*Q)=1; Tail(*Q)=j;
        }
        else
        {
            Tail(*Q)++;
        }
    }
    InfoTail(*Q)=X;
}

void Del(Queue *Q,infotype *X)
{
    *X=InfoHead(*Q);
    if(Head(*Q)==Tail(*Q))
    {
        Head(*Q)=Nil;Tail(*Q)=Nil;
    }
    else
    {
        Head(*Q)++;
    }
}

void tampil()
{
    int i;
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
    printf("\naddress head : %d",Head(f));
    printf("\naddress tail : %d",Tail(f));
}
