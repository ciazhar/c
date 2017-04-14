#include "header.h"

void CreateEmpty(List *L){
    *L=Nil;
}
boolean IsEmpty(List L){
    return L==Nil;
}
boolean IsOneElmt(List L){
    return (!IsEmpty(FirstElmt(L)&&IsEmpty(Tail(L))));
}
address Alokasi(infotype X){
    address P;
    P=malloc(sizeof(ElmtList));
    if(P!=Nil){
        INFO(P)=X;
        NEXT(P)=Nil;
    }
    return P;
}
void Konso(List *L,infotype X){
    address P=Alokasi(X);
    if(P!=Nil){
        NEXT(P) = *L;
        *L=P;
    }
}
infotype FirstElmt(List L){
    return INFO(L);
}
List Tail(List L){
    return NEXT(L);
}
void CetakList(List L){
    if(IsEmpty(L)){
        printf("Nil");
    }else{
        printf("%d -> ",FirstElmt(L));
        CetakList(Tail(L));
    }
}

int jumlah;
///Kerjakan Di Bawah Sini, jangan lupa prosedur dipanggil di main.c
int JumlahList(List L){
    if(IsEmpty(L)){
        return 0;
    }else{
        if(FirstElmt(L)%3==0){
            jumlah=FirstElmt(L)+JumlahList(Tail(L));
        }
        else{
            JumlahList(Tail(L));
        }
    }
    return jumlah;
}
