#include "header.h"

void CreateStack(Stack *S)
{
    Top(*S) = Nil;
    Count(*S) = 0;
}

bool IsEmpty(Stack S)
{
    return Top(S) == Nil;
}

Address Allocate(InfoType X)
{
    Address P = (Address)malloc(sizeof(ElmStack));
    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

void DeAllocate(Address P)
{
    free(P);
}

void Push(Stack *S, Address P)
{
    Next(P) = Top(*S);
    Top(*S) = P;
    Count(*S)++;
}

void Pop(Stack *S, Address *P)
{
    *P = Top(*S);
    Top(*S) = Next(*P);
    Count(*S)--;
}

void ViewStack(Stack S)
{
    Address P;
    InfoType X[Count(S)];
    int i = 0;
    for (P = Top(S); P != Nil; P = Next(P))
    {
        X[i] = Info(P);
        i++;
    }
    for (i = Count(S) - 1; i >= 0; i--)
        printf("%d ", X[i]);
}

void ViewVisual(Stack S[3], int TotalDisk)
{
    int i, j, k;
    Address P;
    InfoType X[3][TotalDisk];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < TotalDisk - Count(S[i]); j++)
            X[i][j] = 0;
        for (P = Top(S[i]); P != Nil; P = Next(P))
        {
            X[i][j] = Info(P);
            j++;
        }
    }
    for (i = 0; i < TotalDisk; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" ");
            if (X[j][i] == 0)
                for (k = 0; k < 2 * TotalDisk - 1; k++)
                    printf(" ");
            else
            {
                for (k = 0; k < TotalDisk - X[j][i]; k++)
                    printf(" ");
                for (k = 0; k < 2 * X[j][i] - 1; k++)
                    printf("=");
                for (k = 0; k < TotalDisk - X[j][i]; k++)
                    printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= 3; i++)
    {
        printf(" ");
        for (j = 0; j < TotalDisk - 1; j++)
            printf(" ");
        printf("%d", i);
        for (j = 0; j < TotalDisk - 1; j++)
            printf(" ");
    }
    printf("\n");
}
