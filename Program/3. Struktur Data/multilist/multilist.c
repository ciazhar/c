#include "header.h"

elemen CreatePosition(List *L,char s[]){
    elemen P;
    P = malloc(sizeof(TNode));
    strcpy(Nama(P),s);
    if(CurrentPosition(*L)==Nil){
        NextPosition(P)=Nil;
        NextPlayer(P)=Nil;
        CurrentPosition(*L)=P;
    }
    else{
        NextPosition(P)=CurrentPosition(*L);
        NextPlayer(P)=Nil;
        CurrentPosition(*L)=P;
    }
    return P;
}

void CreateTeam(List *L){
    CurrentPosition(*L)=Nil;
    elemen P;

    P=CreatePosition(L,"Defender");
    if(P!=Nil){
        CurrentPosition(*L)=P;
        Defender(*L)=P;
        CurrentDefender(*L)=Nil;
    }

    P=CreatePosition(L,"Midfield");
    if(P!=Nil){
        CurrentPosition(*L)=P;
        Midfield(*L)=P;
        CurrentMidfield(*L)=Nil;
    }

    P=CreatePosition(L,"Striker");
    if(P!=Nil){
        CurrentPosition(*L)=P;
        Striker(*L)=P;
        CurrentStriker(*L)=Nil;
    }
}

elemen CreatePemain(List *L,char s[]){
    elemen P;
    P = malloc(sizeof(TNode));

    strcpy(Nama(P),s);
    NextPosition(P)=Nil;
    NextPlayer(P)=Nil;

    return P;
}

void TambahStriker(List *L, char s[]){
    elemen P;
    P=CreatePemain(L,s);

    if(CurrentStriker(*L)==Nil){
        NextPlayer(Striker(*L))=P;
        CurrentStriker(*L)=P;
    }
    else{
        NextPlayer(CurrentStriker(*L))=P;
        CurrentStriker(*L)=P;
    }
}
void HapusStriker(List *L){
    elemen P=Striker(*L);
    while(NextPlayer(P)!=CurrentStriker(*L)){
        P=NextPlayer(P);
    }
    NextPlayer(P)=Nil;
    CurrentStriker(*L)=P;
}
void CetakStriker(List L){
    elemen P;
    P=NextPlayer(Striker(L));
    printf("|Striker\t|");
    while(P!=Nil){
        printf("\t [%s]",P);
        P=NextPlayer(P);
    }
    printf("\n");
}
void TambahMidfield(List *L, char s[]){
    elemen P;
    P=CreatePemain(L,s);

    if(CurrentMidfield(*L)==Nil){
        NextPlayer(Midfield(*L))=P;
        CurrentMidfield(*L)=P;
    }
    else{
        NextPlayer(CurrentMidfield(*L))=P;
        CurrentMidfield(*L)=P;
    }
}
void HapusMidfield(List *L){
    elemen P=Midfield(*L);
    while(NextPlayer(P)!=CurrentMidfield(*L)){
        P=NextPlayer(P);
    }
    NextPlayer(P)=Nil;
    CurrentMidfield(*L)=P;
}
void CetakMidfield(List L){
    elemen P;
    P=NextPlayer(Midfield(L));
    printf("|Midfield\t|");
    while(P!=Nil){
        printf("\t [%s]",P);
        P=NextPlayer(P);
    }
    printf("\n");
}
void TambahDefender(List *L, char s[]){
    elemen P;
    P=CreatePemain(L,s);

    if(CurrentDefender(*L)==Nil){
        NextPlayer(Defender(*L))=P;
        CurrentDefender(*L)=P;
    }
    else{
        NextPlayer(CurrentDefender(*L))=P;
        CurrentDefender(*L)=P;
    }
}
void HapusDefender(List *L){
    elemen P=Defender(*L);
    while(NextPlayer(P)!=CurrentDefender(*L)){
        P=NextPlayer(P);
    }
    NextPlayer(P)=Nil;
    CurrentDefender(*L)=P;
}
void CetakDefender(List L){
    elemen P;
    P=NextPlayer(Defender(L));
    printf("|Defender\t|");
    while(P!=Nil){
        printf("\t [%s]",P);
        P=NextPlayer(P);
    }
    printf("\n");
}
void TambahBelakangPosition(List *L,char s[]){
    elemen P;
    P = malloc(sizeof(TNode));
    strcpy(Nama(P),s);

    elemen Q=CurrentPosition(*L);
    while(1){
        if(NextPosition(Q)==Nil){
            break;
        }
        Q=NextPosition(Q);
    }
    NextPosition(Q)=P;
    NextPlayer(P)=Nil;
}


void CetakPosition(List L){
    elemen P=CurrentPosition(L);
    elemen Q;

    while(1){
        printf("[%s] : ",Nama(P));
        Q=NextPlayer(P);
        while(Q!=Nil){
            printf("%s ",Nama(Q));
            Q=NextPlayer(Q);
        }
        if(NextPosition(P)==Nil){
            break;
        }
        P=NextPosition(P);
        printf("\n");
    }

}

void HapusPosition(List *L, char s[]){
    elemen P=CurrentPosition(*L);
    elemen temp;
    int hitung=0;

    while(P!=Nil){
        if(strcmp(Nama(P),s)==0){
            break;
        }
        hitung++;
        temp=P;
        P=NextPosition(P);
    }
    if(hitung==0){
        CurrentPosition(*L)=NextPosition(P);
        free(P);
    }
    else {
        NextPosition(temp)=NextPosition(P);
        free(P);
    }
}
void Cetak(List L){
    printf("-----------------\n");
    CetakStriker(L);
    CetakMidfield(L);
    CetakDefender(L);
    printf("-----------------\n");
}
