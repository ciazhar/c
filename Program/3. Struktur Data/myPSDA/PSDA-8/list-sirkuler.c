#include "header.h"

///
void CreateEmpty(List *L){
    First(*L)=Nil;
}
boolean ListEmpty(List L){
    return (First(L)==Nil);
}
address Alokasi(infotype X){
    address P;
    P=malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}
void Dealokasi(address *P){
    free(*P);
}

///
void InsertFirst(List *L, address P){
    address Last;
    if(ListEmpty(*L)){
        First(*L)=P;
        Next(P)=First(*L);
    }
    else{
        Last=First(*L);
        while(Next(Last)!=First(*L)){
            Last=Next(Last);
        }
        Next(P)=First(*L);
        First(*L)=P;
        Next(Last)=First(*L);
    }
}
void InsVFirst(List *L, infotype X){
    address baru;
    baru=Alokasi(X);
    if(baru!=Nil){
        InsertFirst(&(*L),baru);
    }
}
void InsertLast(List *L, address P){
    address Last;

    if(ListEmpty(*L)){
        First(*L)=P;
        Next(P)=P;
    }
    else{
        Last=First(*L);
        while(1){
            if(Next(Last)==First(*L)){
                break;
            }
            else{
                Last = Next(Last);
            }
        }
        InsertAfter(L,P,Last);
    }
}
void InsVLast(List *L, infotype X){
    address baru;

    baru=Alokasi(X);
    if(baru!=Nil){
        InsertLast(L,baru);
    }
}
void InsertAfter(List *L, address P, address Prec){
    Next(P)=Next(Prec);
    Next(Prec)=P;
}

///

void DelFirst(List *L, address *P){
    address Last;

    if(Next(*P)==First(*L)){
        First(*L)=Nil;
    }
    else{
        Last=First(*L);
        while(1){
            if(Next(Last)==First(*L)){
                break;
            }
            else{
                Last=Next(Last);
            }
        }
        *P=First(*L);
        First(*L)=Next(First(*L));
        Next(*P)=Nil;
        Next(Last)=First(*L);
    }
}
void DelVFirst(List *L, infotype *X){
    address P;

    P=First(*L);
    *X=Info(P);
    DelFirst(&(*L),&P);
    Dealokasi(&P);
}
void DelLast(List *L, address *P){
    address Last, Prec;

    if(Next(First(*L))==First(*L)){
        First(*L)=Nil;
    }
    else{
        Last = First(*L);
        Prec = Nil;
        while(1){
            if(Next(Last)==First(*L)){
                break;
            }
            else{
                Prec = Last;
                Last = Next(Last);
            }
        }
        DelAfter(L,P,Prec);
    }
}
void DelVLast(List *L, infotype *X){
    address P;
    DelLast(L,&P);
    *X=Info(P);
    Dealokasi(&P);
}

void DelAfter(List *L, address *Pdel, address Prec){
    *Pdel = Next(Prec);
    Next(Prec) =Next(Next(Prec));
    Next(*Pdel)=Nil;
}

///
boolean FSearch(List L, address P){
    address Q;
    boolean check = false;

    Q=First(L);
    while(1){
        if(Q==P){
            check = true;
            break;
        }
        else{
            if(Next(Q)==First(L)){
                break;
            }
            else{
                Q = Next(Q);
            }
        }
    }
    return check;
}
address Search(List L, infotype X){
    address P;
    boolean check = false;

    P = First(L);
    while(1){
        if(Info(P)==X){
            check = true;
            break;
        }
        else{
            if(Next(P)==First(L)){
                break;
            }
            else{
                P=Next(P);
            }
        }
    }
    if(check==true){
        return P;
    }
    else {
        return Nil;
    }
}

///
void PrintInfo(List L){
    address P=First(L);
    printf("[ ");
    while(1){
        printf("%d -> ",Info(P));
        if(Next(P)==First(L)){
            break;
        }
        else{
            P=Next(P);
        }
    }
    printf("Awal ]\n");
}
