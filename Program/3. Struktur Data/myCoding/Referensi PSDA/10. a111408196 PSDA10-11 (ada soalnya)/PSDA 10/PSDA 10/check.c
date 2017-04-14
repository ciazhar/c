#include "container.h"

boolean IsEmpty(Stack S) {
    return Top(S)==Nil;
}
void PrintStack(Stack S) {
    address P;

    if(IsEmpty(S)) {
        printf("STACK Kosong !!!");
    }
    else {
        P = Top(S);
        do{
            printf(" %d ", Info(P));

            if(Next(P)!=Nil) {
                printf(" -> ");
            }

            P = Next(P);
        }while(P!=Nil);
    }
}
address Alokasi(infotype x) {
    address P;

    P = (address)malloc(sizeof(ElmtStack));

    if(P!=Nil) {
        Info(P) = x;
        Next(P) = Nil;
    }

    return P;
}
void Dealokasi(address *x) {
    free( &(*x) );
}
void CreateEmpty(Stack *S) {
    Top(*S) = Nil;
}
void PushV(Stack *S, address x) {
    Next(x) = Top(*S);
    Top(*S) = x;
}

void Push(Stack *S, infotype x) {
    address P;

    P = Alokasi(x);

    if(P!=Nil) {
        PushV(S, P);
    }
}
void PopV(Stack *S, address *x) {
    *x = Top(*S);
    Top(*S) = Next(Top(*S));

    Next(*x) = Nil;
    Dealokasi(*x);
}

void Pop(Stack *S, infotype *x) {
    address P;

    P = Top(*S);
    PopV( &(*S), &P );
}

int nbelmt (Stack S)
{
    int i=0;
    address P=S.TOP;
    while (P!=Nil)
    {
        i++;
        P=P->Next;
    }
    return i;
}

int JumBilJil (Stack S)
{
    address P;
    int a, jumlah;
    jumlah=0;
    P=S.TOP;

    while (P!=0)
    {
        a=a+1;
        if(a%2!=0)
        {
            jumlah=jumlah+Info(P);
        }
        P=Next(P);
    }
    return jumlah;
}

int jumlahgenap (Stack S)
{
    address P;
    int a, jumlah;
    jumlah=0;
    P=S.TOP;

    while (P!=0)
    {
        a=a+1;
        if(a%2==0)
        {
            jumlah=jumlah+Info(P);
        }
        P=Next(P);
    }
    return jumlah;
}
int sisastack(Stack S, int X)
{
    address P;
    P=S.TOP;
    int a=0;



    while (P!=Nil)
    {
       if(Info(P)==X)
       {
           break;
       }
       a=a+1;
       P=Next(P);
    }
    return a;
}
