#include "pustaka.h"


boolean ListEmpty (List L){
    return (FIRST(L)==NIL);
}


void CreateList (List *L){
    FIRST(*L)=NIL;
}


address Alokasi (InfoType X){
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if (P!=NIL){
        INFO(P)=X;
        NEXT(P) = NIL;
    }
    return P;
}
void Dealokasi (address P){
    free(P);
}


address Search(List L,InfoType X){
    address P;

    P = FIRST(L);

    while (P!=NIL){

        if (INFO(P)==X){
            break;
        }
        P = NEXT(P);
    }

    return P;
}

boolean FSearch (address P){
    boolean FIND = false;
    if (P==NIL){
        FIND = false;
    }
    else{
        FIND = true;
    }

    return FIND;
}

address SearchPrec (List L,InfoType X){
    address P;

    P = FIRST(L);

    while (NEXT(P)!=NIL){
        if (INFO(NEXT(P))==X){
            break;
        }
        P = NEXT(P);
    }

    return P;
}

void InsVLast (List *L,InfoType X)
{
    address P;

    P = Alokasi(X);
    if (P!=NIL){
        InsertLast(L,P);
    }
}

void InsVFirst (List *L,InfoType X){
    address P;

    P = Alokasi(X);
    if (P!=NIL){
        InsertFirst(L,P);
    }
}


void DelVFirst (List *L,InfoType *X)
{
    address P;

    DelFirst(L,&P);
    *X = INFO(P);
    NEXT(P) = NIL;

    Dealokasi(P);
}

void DelVLast (List *L,InfoType *X){
    address P;

    DelLast(L,&P);

    *X = INFO(P);
    NEXT(P) = NIL;

    Dealokasi(P);
}



void InsertFirst (List *L,address P){
    NEXT(P) = FIRST(*L);
    FIRST(*L) = P;
}

void InsertAfter (address P,address Prec){
    NEXT(P) = NEXT(Prec);
    NEXT(Prec) = P;
}

void InsertLast (List *L,address P){
    address Last;

    if (FIRST(*L)==NIL){
        InsertFirst(L,P);
    }
    else{
        Last = FIRST(*L);
        while (NEXT(Last)!=NIL){
            Last = NEXT(Last);
        }
        InsertAfter(P,Last);
    }
}

void DelFirst (List *L,address *P){

    *P = FIRST(*L);
    FIRST(*L) = NEXT(FIRST(*L));
}

void DelLast (List *L,address *P){
    address Prec;
    Prec = NIL;
    *P = FIRST(*L);

    while (NEXT(*P)!=NIL){
        Prec = *P;
        *P = NEXT(*P);
    }

    if (Prec==NIL){
        FIRST(*L)=NIL;
    }
    else{
        NEXT(Prec)=NIL;
    }
}

void DelP (List *L,InfoType X){
    address P,Last,Prec;

    int temp;

    P = Search(*L,X);
    Last = Search(*L,X);
    if (FSearch(P)==false){
        printf("Data tidak ditemukan.!\n");
    }
    else{
        if (INFO(FIRST(*L))==X){
            DelVFirst(L,&temp);
        }
        else if (NEXT(Last)==NIL){
            DelVLast(L,&temp);
        }
        else{
            Prec = SearchPrec(*L,X);
            DelAfter(NEXT(Prec),Prec);
        }
    }

}

void DelAfter (address P,address Prec){
    NEXT(Prec)=NEXT(P);
}

void PrintInfo (List L){
    address P;

    if (ListEmpty(L)){
        printf("Datanya Kosong...!\n");
    }
    else{
        P = FIRST(L);
        puts("=============Data===============");
        printf("[");
        do{
            if (NEXT(P)!=NIL){
                printf("%d -> ",INFO(P));
            }
            else{
                printf("%d",INFO(P));
            }
            P = NEXT(P);
        }while (P!=NIL);
        puts("]");
        puts("=============Data===============");
    }
}

int NbElmt (List L){
    int sum=0;
    address P;

    P = FIRST(L);

    while(P!=NIL){
        sum++;
        P = NEXT(P);
    }

    return sum;
}

int MAX (List L){
    int Max;
    address P,Prec;
    P = FIRST(L);
    Prec = NIL;

    Max = INFO(P);
    while (NEXT(P)!=NIL){
        Prec = P;
        P = NEXT(P);
        if (INFO(P)>INFO(Prec)){
            Max = INFO(P);
        }
    }

    return Max;
}

address AdrMAX (List L)
{
    address P;
    int max;

    max = MAX(L);

    P = Search(L,max);

    return P;
}

int MIN (List L){
    int Min;
    address P,Prec;
    P = FIRST(L);
    Prec = NIL;

    Min = INFO(P);
    while (NEXT(P)!=NIL){
        Prec = P;
        P = NEXT(P);
        if (Min>INFO(P)){
            Min = INFO(P);
        }
    }

    return Min;
}

address AdrMIN (List L){
    address P;
    int min;

    min = MIN(L);

    P = Search(L,min);

    return P;
}

float AVERAGE (List L){
    int sum;
    address P;
    P = FIRST(L);
    if (P==NIL){
        sum=0;
    }
    else{
        sum = INFO(P);
        while (NEXT(P)!=NIL){
            P = NEXT(P);
            sum = sum + INFO(P);
        }
    }

    return (sum*1.0/NbElmt(L));
}

//*******************PROSES TERHADAP LIST*********************
void DellAll (List *L){
    address P;
    while(ListEmpty(*L)==false){
        DelFirst(L,&P);
    }
}

void InversList (List *L){
    address P,Q,R;

    P = FIRST(*L);
    Q = NIL;

    while (P!=NIL){
        R=NEXT(P);
        NEXT(P)=Q;
        Q=P;
        P=R;
    }
   FIRST(*L) = Q;
}

List FInversList (List L){
    InversList(&L);
    return L;
}

void CopyList (List *L1, List *L2){
    *L2 = *L1;
}

List FCopyList (List L){
    List L2;
    address P;

    CreateList(&L2);
    P = FIRST(L);

    while (P!=NIL){
        InsVLast(&L2,INFO(P));
        P = NEXT(P);
    }

    return L2;
}

void CPAlokList (List Lin,List *Lout){
    *Lout = FCopyList(Lin);
}

void Konkat (List *L1,List *L2, List *L3){
    address P;

    P = FIRST(*L1);

    while (NEXT(P)!=NIL){
        InsVFirst(&L3,INFO(P));
        P = NEXT(P);
    }
    P = FIRST(*L2);
    while (NEXT(P)!=NIL){
        InsVFirst(&L3,INFO(P));
        P = NEXT(P);
    }
    /*if(NbElmt(&L3)!=(NbElmt(L1)+NbElmt(L2))){
        DellAll(&L3)''
    }*/
}

void Konkat1 (List *L1,List *L2, List *L3){
    Konkat(L1,L2,L3);
    FIRST(*L1)=NIL; //PENGHAPUSAN LIST1
    FIRST(*L2)=NIL; //PENGHAPUSAN LIST2
}

void PecahList (List *L1, List *L2,List L){
    address P;
    int i;
    P = FIRST(L);
    if (NbElmt(L)%2==0){
        for (i=1;i<=(NbElmt(L)/2);i++){
            InsVLast(L1,INFO(P));
            P=NEXT(P);
        }

        for (i=i;i<=NbElmt(L);i++){
            InsVLast(L2,INFO(P));
            P=NEXT(P);
        }
    }
    else{
        for (i=1;i<=(NbElmt(L)/2);i++){
            InsVLast(L1,INFO(P));
            P=NEXT(P);
        }

        for (i=i;i<=NbElmt(L);i++){
            InsVLast(L2,INFO(P));
            P=NEXT(P);
        }
    }
}
