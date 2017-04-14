#include "head.h"

void CreateEmpty (Stack *S)
{
    TOP(*S)=nil;
}

boolean IsEmpty (Stack S)
{
    return TOP(S)==nil;
}

boolean IsFull (Stack S)
{
    return TOP(S)==MaxEl;
}

void Push (Stack *S, infotype X)
{
    if(IsFull(*S)==false)
    {
        TOP(*S)++;
        InfoTop(*S)=X;
    }
    else
    printf("-> Stack Penuh!!!\n");
}

void Pop (Stack *S, infotype *X)
{
    if(IsEmpty(*S)==false)
    {
        *X=InfoTop(*S);
        TOP(*S)--;
    }
    else
    printf("-> Stack Kosong!!!\n");
}
