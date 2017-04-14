#include "pustaka.h"

boolean ListEmpty(List L){
    return L==NIL;
}
void CreateList(List *L){
    *L=NIL;
}
void Dealokasi(address *P){
    free(*P);
}
address Alokasi (InfoType X){
    address P;
    P=malloc(sizeof(ElmtList));
    (*P).info=X;
    P->next=NIL;
    return (P);
}
address Search(List L,InfoType X){
    boolean found=false;
    address P= L;
    while((P!=NIL)&&(!found)){
        if(P->info==X){
            found =true;
        }
        else{
        P=P->next;
        }
    }
    if (found){
        return P;
    }
    else{
        return NIL;
    }
}
boolean FSearch(List L,address P){
    boolean found=false;
    address a= L;
    while((a!=NIL)&&(!found)){
        if(a->next==P){
            found =true;
        }
        else{
        a=a->next;
        }
    }
    return found;
}
address SearchPrec(List L,InfoType X){
    boolean found=false;
    address P= L;
    if (P->info==X){
        return P;
    }
        while((P!=NIL)&&(!found)){
            if(P->next->info==X){
                found =true;
            }
            else{
                P=P->next;
            }
        }
        if (found)
            return P;
        else
            return NIL;
}

void InsVFirst(List *L,InfoType X){

    if (Alokasi(X)!=NIL){
        address P=Alokasi(X);
        P->next=*L;
        *L=P;
    }
}
void InsVLast(List *L,InfoType X){;
    if (Alokasi(X)!=NIL){
        if(ListEmpty(*L))
            InsVFirst(L,X);
        else{
            address P=last(*L);
            P->next=Alokasi(X);
        }
    }
}

void DelVFirst(List *L,InfoType *X){
    *X=(*L)->info;
    address P=*L;
    *L=(*L)->next;
    Dealokasi(&P);
}
void DelVLast(List *L,InfoType *X){
    if((*L)->next==NIL)
        DelVFirst(L,X);
    else{
        address A=SearchPrec(*L,last(*L)->info);
        *X=A->next->info;
        address b=A->next;
        A->next=A->next->next;
        Dealokasi(&b);
    }
}

void InsertFirst(List *L, address P){
    if (P!=NIL){
        P->next=*L;
        *L=P;
    }
}
void InsertAfter(List *L, address P,address prec){
    address A=Search(*L,prec->info);
    if (P!=NIL){
        P->next=A->next;
        A->next=P;
    }
}
void InsertLast(List *L, address P){
    if(ListEmpty(*L)){
        InsertFirst(L,P);
    }
    else{
        address A=last(*L);
        A->next=P;
    }
}

void DelFirst(List *L,address *P){
    if((*L)->next==NIL){
        *P=*L;
        *L=NIL;
        (*P)->next=NIL;
    }
    else{
        *P=*L;
        *L=(*L)->next;
        (*P)->next=NIL;
    }
    /*P=(L->first);
    L->first=(L->first)->next;*/
}
void DelPe(List *L,InfoType X){
    address a;
    while ((*L)->info==X){
        DelFirst(L,&a);
    }
    address P=*L;
    while (P->next!=NIL){
        if(P->next->info==X){
            a=P->next;
            P->next=P->next->next;
        }
        else{
            P=P->next;
        }
    }
    Dealokasi(&a);
}
void DelP(List *L,InfoType X){
    address P;
    if (FSearch(*L,(Search((*L),X)))){
        if ((*L)->info==X)
            DelFirst(L,&P);
        else{
            P=SearchPrec(*L,X);
            P->next=P->next->next;
        }
    }
}
void DelLast(List *L, address *p){

    if((*L)->next==NIL){
       DelFirst(L,p);
    }
    else{
        address A=*L;
        while(A->next->next!=NIL){
            A=A->next;
        }
        *p=A->next;
        A->next=A->next->next;
    }
}
void DelAfter(List *L, address *pdel, address prec){
    address P=*L;
    while (P!=prec){
        P=P->next;
    }
    *pdel=P->next;
    P->next=(P->next)->next;
    (*pdel)->next=NIL;
}

void PrintInfo (List L){
    if(!ListEmpty(L)){
        address P=L;
        puts("=============Data===============");
        printf("[");
        while (P!=NIL){
            if (P->next!=NIL){
                printf("%d -> ",P->info);
            }
            else{
                printf("%d",P->info);
            }
            P=P->next;
        }
        puts("]");
        puts("=============Data===============");
    }
    else
        printf("List empty");
    printf("\n\n");
}
int NbElmt(List L){
    address P=L;
    int i=0;
    while (P!=NIL){;
        P=P->next;
        i++;
    }
    return i;
}

InfoType MAX(List L){
    address P=L;
    InfoType m=P->info;
    while (P!=NIL){
        if (m<=P->info){
            m=P->info;
        }
        P=P->next;
    }
    return m;
}
address AdrMax(List L){
    address P=L;
    address m=P;
    while (P!=NIL){
        if (m->info<=P->info){
            m=P;
        }
        P=P->next;
    }
    return m;
}
InfoType MIN (List L){
    address P=L;
    InfoType m=P->info;
    while (P!=NIL){
        if (m>=P->info){
            m=P->info;
        }
        P=P->next;
    }
    return m;
}
address AdrMin(List L){
    address P=L;
    address m=P;
    while (P!=NIL){
        if (m->info>=P->info){
            m=P;
        }
        P=P->next;
    }
    return m;
}
float AVERAGE (List L){
    address P=L;
    float a=0;
    while (P!=NIL){
        a=a+(P->info);
        P=P->next;
    }
    return (a/NbElmt(L));
}

void DelAll(List *L){
    address P;
    while(ListEmpty(*L)==false){
        DelFirst(L,&P);
    }
}
void InversList(List *L){
    address P;
    address A=*L;
    int i=1;
    while(i<NbElmt(*L)){
        DelAfter(L,&P,A);
        InsVFirst(L,P->info);
        i++;
        }
}
List FInversList(List L){
    List A;
    CreateList(&A);
    address p=L;
    while(p!=NIL){
        InsVFirst(&A,p->info);
        p=p->next;
    }
    if(NbElmt(A)==NbElmt(L))
        return A;
    else{
        DelAll(&A);
        return A;
    }
}
void CopyList(List*L1,List *L2){
    *L2=*L1;
}
List FCopyList(List L){
    List A;
    CreateList(&A);
    address P=L;
    while(P!=NIL){
        //printf("%d ",P->info);
        InsVLast(&A,P->info);
        P=P->next;
    }
    if(NbElmt(A)==NbElmt(L))
        return A;
    else{
        DelAll(&A);
        return A;
    }
}
void CPAlokList(List Lin,List *Lout){
    address P=Lin;
    int b=NbElmt(Lin);
    while(P!=NIL){
        InsVLast(Lout,P->info);
        P=P->next;
    }
    if(NbElmt(*Lout)!=b)
        DelAll(Lout);
}
void Konkat (List L1,List L2, List *L3){
    address P=L1;
    while(P!=NIL){
        InsVLast(L3,P->info);
        P=P->next;
    }
    P=L2;
    while(P!=NIL){
        InsVLast(L3,P->info);
        P=P->next;
    }
    if(NbElmt(*L3)!=(NbElmt(L1)+NbElmt(L2)))
        DelAll(L3);
}
void Konkat1 (List *L1,List *L2,List *L3){
    int i=0;
    address a;
    while (i<(NbElmt(*L1))){
        DelFirst(L1,&a);
        InsertFirst(L3,a);
    }
    i=0;
    while (i<(NbElmt(*L2))){
        DelFirst(L2,&a);
        InsertFirst(L3,a);
    }
}
void PecahList (List *L1, List *L2,List L){
    address P=L;
    int i;
    for(i=1;i<NbElmt(L);i++){
        if (i<(NbElmt(L)/2)){
            InsVLast(L1,P->info);
        }
        else{
            InsVLast(L2,P->info);
        }
        P=P->next;
    }
}
address last(List L){
    address P=L;
    while(P->next!=NIL){
            P=P->next;
    }
    return P;
}
