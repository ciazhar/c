#include "List Queue.h"
void CreateEmpty(Queue *Q){
    Q->Head=Nil;
    Q->Tail=Nil;
}
void Alokasi(address *P,infotype X){
    *P=malloc(sizeof(elmtqueue));
    (*P)->info=X;
    (*P)->next=Nil;
}
void Dealokasi(address *P){
    free(*P);
}
boolean IsEmpty(Queue Q){
    return Q.Head==Nil&&Q.Tail==Nil;
}
int NBelmt(Queue Q){
    int i=0;
    address P=Q.Head;
    while(P!=Nil){
        i++;
        P=P->next;
    }
    return i;
}
void add(Queue *Q,infotype X){
    if(!IsEmpty(*Q)){
        address P;
        Alokasi(&P,X);
        Q->Tail->next=P;
        Q->Tail=P;
    }
    else{
        address P;
        Alokasi(&P,X);
        Q->Head=P;
        Q->Tail=P;
    }
}
void del(Queue *Q,infotype *X){
     if(Q->Head==Q->Tail){
        Q->Head=Nil;
        Q->Tail=Nil;
    }else if(!IsEmpty(*Q)){
        *X=Q->Head->info;
        address P=Q->Head;
        Q->Head=Q->Head->next;
        Dealokasi(&P);
    }
}
void printinfo(Queue Q){
    address P=Q.Head;
    while (P!=Nil){
        if (P==Q.Head){
            printf("<=");
        }
        printf("|%d|",P->info);
        P=P->next;

    }
    printf("=>\n\n");
}
void pindahkedepan(Queue *Q,infotype X){
    if(Q->Head->info!=X){
        address P=Q->Head;
        while(P->next->info!=X){
            P=P->next;
        }
        address B=P->next;
        P->next=P->next->next;
        Dealokasi(&B);
        Alokasi(&B,X);
        B->next=Q->Head;
        Q->Head=B;
    }
}
