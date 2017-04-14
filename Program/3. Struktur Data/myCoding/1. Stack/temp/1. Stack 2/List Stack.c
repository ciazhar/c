#include "List Stack.h"

void CreateEmpty(Stack *S){
    S->TOP=Nil;
}
void Alokasi(address *P,infotype X){
    *P=malloc(sizeof(elmtstack));
    (*P)->info =X;
    (*P)->next=Nil;
}
void Dealokasi(address *P){
    free(*P);
}
boolean IsEmpty(Stack S){
    return S.TOP==Nil;
}
boolean IsFull(Stack S);
void Push (Stack *S,infotype X){
    address P;
    Alokasi(&P,X);
    P->next=S->TOP;
    S->TOP=P;
}
void Pop (Stack *S,infotype *X){
    address P=S->TOP;
    *X=P->info;
    S->TOP=S->TOP->next;
    Dealokasi(&P);

}
void printinfo(Stack S){
    address P=S.TOP;
    while (P!=Nil){
        printf("---\n|%d|\t",P->info);
        if(P==S.TOP){
            printf("TOP");
        }
        printf("\n");
        P=P->next;
    }
    printf("---\n");
}
int nbelmt(Stack S){
    int i=0;
    address P= S.TOP;
    while(P!=Nil){
        i++;
        P=P->next;
    }
    return i;
}
int jumlahganjil(Stack S){
    int i=nbelmt(S);
    int k=0;
    address P=S.TOP;
    while(i!=0){
        if(i%2!=0){
            k=k+P->info;
        }
        i--;
        P=P->next;
    }
    return k;
}
int jumlahgenap(Stack S){
    int i=nbelmt(S);
    int k=0;
    address P=S.TOP;
    while(i!=0){
        if(i%2==0){
            k=k+P->info;
        }
        i--;
        P=P->next;
    }
    return k;
}
int sisastack(Stack S,int X){
    int i=0;
    address P= S.TOP;
    while(P->info!=X){
        P=P->next;
    }
    P=P->next;
    while(P!=Nil){
        i++;
        P=P->next;
    }
    return i;
}


