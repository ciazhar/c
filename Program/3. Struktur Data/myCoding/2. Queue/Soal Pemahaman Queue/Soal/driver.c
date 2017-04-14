#include "header.h"

void CreateEmpty(Queue *Q, int Max)
{
    (*Q).T=(infotype*)malloc((Max+1)*sizeof(int));
    MaxEl(*Q)=Max;
    HEAD(*Q)=Nil;
    TAIL(*Q)=Nil;
}
boolean isEmpty(Queue Q)
{
    return ((HEAD(Q)==Nil)&&(TAIL(Q)==Nil));
}
boolean isFull(Queue Q)
{
    return ((HEAD(Q)==1)&&(TAIL(Q)==MaxEl(Q)));
}
void Add (Queue *Q, infotype X)
{
    if(isEmpty(*Q))
    {
        HEAD(*Q)=1;
        TAIL(*Q)=1;
        InfoTAIL(*Q)=X;
    }
    else if(isFull(*Q))
    {
        printf("Queue penuh!\n");
    }
    else
    {
        TAIL(*Q)++;
        InfoTAIL(*Q)=X;
    }
}
void Del(Queue *Q, infotype *X)
{
    if(isEmpty(*Q))
    {
        printf("Queue sudah kosong!\n");
    }
    else if(HEAD(*Q)==TAIL(*Q))
    {
        *X=InfoHEAD(*Q);
        HEAD(*Q)=Nil;
        TAIL(*Q)=Nil;
    }
    else
    {
        *X=InfoHEAD(*Q);
        int i=HEAD(*Q);
        while(i<=TAIL(*Q))
        {
            (*Q).T[i]=(*Q).T[i+1];
            i++;
        }
        TAIL(*Q)--;
    }
}
void PrintQueue(Queue Q)
{
    int i=HEAD(Q)+1;
    while(i<=TAIL(Q))
    {
        printf("| %d |", (Q).T[i]);
        i++;
    }
}

/**Soal Pemahaman**/
///No.1
void AddGanjil(Queue *Q, infotype X)
{
    if(X%2==1){
        TAIL(*Q)++;
        InfoTAIL(*Q)=X;
    }
}
///No.2
int MaxHeadTail(Queue Q)
{
    if(InfoHEAD(Q)>InfoTAIL(Q)){
        return 99;
    }
    else if(InfoTAIL(Q)<InfoHEAD(Q)){
        return -99;
    }
    else {
        return 100;
    }

}
///No.3
boolean CariN(Queue Q, int X)
{
    /*
    while(TAIL(*Q)>=HEAD(*Q))
    {
        if(InfoTAIL(*Q)==X){
            return 1;
        }
        else{
            return 0;
        }
        TAIL(*Q)--;
    }
    */
    int i=HEAD(Q);
    while(i<=TAIL(Q))
    {
        if(X==(Q).T[i]){
            return true;
            break;
        }
        //printf("| %d |", (Q).T[i]);
        i++;
    }
    return false;
}
