#include "header.h"

void CreateEmpty (Stack *S,int Size)
{
    (*S).T=(int *) malloc (Size * sizeof(infotype));
    Siz(*S)= Size;
    TOP(*S)=0;
}

void Destruct (Stack *S)
{
    free((*S).T);
    Siz(*S)=nil;
    TOP(*S)=nil;
}
boolean IsEmpty (Stack S)
{
    return TOP(S)==nil;
}
boolean IsFull (Stack S)
{
    return TOP(S)==Siz(S);
}
void Push (Stack *S, infotype X)
{
    if(IsFull(*S))
    {
        printf("-> Stack Penuh!!!\n");
    }
    else
    {
        TOP(*S)++;
        InfoTop(*S)=X;
    }
}
void Pop (Stack *S, infotype *X)
{
    if(IsEmpty(*S))
    {
        printf("-> Stack Kosong!!!\n");
    }
    else
    {
        *X=InfoTop(*S);
        TOP(*S)--;
    }
}
