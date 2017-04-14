#include "soal4.h"
boolean ListEmpty(List L){
    return L==NIL;
}
void CreateList(List *L){
    *L=NIL;
}
void Dealokasi(address *P){
    free(*P);
}
address Alokasi (infotype X){
    address P;
    P=malloc(sizeof(elmtlist));
    (*P).info=X;
    P->next=NIL;
    return (P);
}
address Search(List L,infotype X){
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
address SearchPrec(List L,infotype X){
    boolean found=false;
    address P= L;
    if (P->info==X){
        return P;
    }
    else {
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
}

void insvfirst(List *L,infotype X){

    if (Alokasi(X)!=NIL){
        address P=Alokasi(X);
        P->next=*L;
        *L=P;
    }
}
void insvlast(List *L,infotype X){;
    if (Alokasi(X)!=NIL){
        if(ListEmpty(*L))
            insvfirst(L,X);
        else{
            address P=last(*L);
            P->next=Alokasi(X);
        }
    }
}

void delvfirst(List *L,infotype *X){
    *X=(*L)->info;
    address P=*L;
    *L=(*L)->next;
    Dealokasi(&P);
}
void delvlast(List *L,infotype *X){
    if((*L)->next==NIL)
        delvfirst(L,X);
    else{
        address A=SearchPrec(*L,last(*L)->info);
        *X=A->next->info;
        address b=A->next;
        A->next=A->next->next;
        Dealokasi(&b);
    }
}

void insertfirst(List *L, address P){
    if (P!=NIL){
        P->next=*L;
        *L=P;
    }
}
void insertafter(List *L, address P,address prec){
    address A=Search(*L,prec->info);
    if (P!=NIL){
        P->next=A->next;
        A->next=P;
    }
}
void insertlast(List *L, address P){
    if(ListEmpty(*L)){
        insertfirst(L,P);
    }
    else{
        address A=last(*L);
        A->next=P;
    }
}

void delfirst(List *L,address *P){
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
void delpe(List *L,infotype X){
    address a;
    while ((*L)->info==X){
        delfirst(L,&a);
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
void delp(List *L,infotype X){
    address P;
    if (FSearch(*L,(Search((*L),X)))){
        if ((*L)->info==X)
            delfirst(L,&P);
        else{
            P=SearchPrec(*L,X);
            P->next=P->next->next;
        }
    }
}
void dellast(List *L, address *p){

    if((*L)->next==NIL){
       delfirst(L,p);
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
void delafter(List *L, address *pdel, address prec){
    address P=*L;
    while (P!=prec){
        P=P->next;
    }
    *pdel=P->next;
    P->next=(P->next)->next;
    (*pdel)->next=NIL;
}

void printinfo (List L){
    if(!ListEmpty(L)){
        address P=L;
        while (P!=NIL){
            printf("%d ",P->info);
            P=P->next;
        }
    }
    else
        printf("List empty");
    printf("\n\n");
}
int nbelmt(List L){
    address P=L;
    int i=0;
    while (P!=NIL){;
        P=P->next;
        i++;
    }
    return i;
}

infotype Max(List L){
    address P=L;
    infotype m=P->info;
    while (P!=NIL){
        if (m<=P->info){
            m=P->info;
        }
        P=P->next;
    }
    return m;
}
address adrmax(List L){
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
infotype Min (List L){
    address P=L;
    infotype m=P->info;
    while (P!=NIL){
        if (m>=P->info){
            m=P->info;
        }
        P=P->next;
    }
    return m;
}
address adrmin(List L){
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
float average (List L){
    address P=L;
    float a=0;
    while (P!=NIL){
        a=a+(P->info);
        P=P->next;
    }
    return (a/nbelmt(L));
}

void delall(List *L){
    address P;
    while(ListEmpty(*L)==false){
        delfirst(L,&P);
    }
}
void inverselist(List *L){
    address P;
    address A=*L;
    int i=1;
    while(i<nbelmt(*L)){
        delafter(L,&P,A);
        insvfirst(L,P->info);
        i++;
        }
}
List finverselist(List L){
    List A;
    CreateList(&A);
    address p=L;
    while(p!=NIL){
        insvfirst(&A,p->info);
        p=p->next;
    }
    if(nbelmt(A)==nbelmt(L))
        return A;
    else{
        delall(&A);
        return A;
    }
}
void copylist(List*L1,List *L2){
    *L2=*L1;
}
List fcopylist(List L){
    List A;
    CreateList(&A);
    address P=L;
    while(P!=NIL){
        //printf("%d ",P->info);
        insvlast(&A,P->info);
        P=P->next;
    }
    if(nbelmt(A)==nbelmt(L))
        return A;
    else{
        delall(&A);
        return A;
    }
}
void cpaloklist(List Lin,List *Lout){
    address P=Lin;
    int b=nbelmt(Lin);
    while(P!=NIL){
        insvlast(Lout,P->info);
        P=P->next;
    }
    if(nbelmt(*Lout)!=b)
        delall(Lout);
}
void konkat (List L1,List L2, List *L3){
    address P=L1;
    while(P!=NIL){
        insvlast(L3,P->info);
        P=P->next;
    }
    P=L2;
    while(P!=NIL){
        insvlast(L3,P->info);
        P=P->next;
    }
    if(nbelmt(*L3)!=(nbelmt(L1)+nbelmt(L2)))
        delall(L3);
}
void konkat1 (List *L1,List *L2,List *L3){
    int i=0;
    address a;
    while (i<(nbelmt(*L1))){
        delfirst(L1,&a);
        insertfirst(L3,a);
    }
    i=0;
    while (i<(nbelmt(*L2))){
        delfirst(L2,&a);
        insertfirst(L3,a);
    }
}
void pecahlist (List *L1, List *L2,List L){
    address P=L;
    int i;
    for(i=1;i<nbelmt(L);i++){
        if (i<(nbelmt(L)/2)){
            insvlast(L1,P->info);
        }
        else{
            insvlast(L2,P->info);
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
