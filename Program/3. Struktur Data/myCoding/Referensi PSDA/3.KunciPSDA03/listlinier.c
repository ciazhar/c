#include "listlinier.h"
void createList (List *L){
    FIRST(*L)=NIL;
}
address ALOKASI (InfoType X){
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if (P!=NIL)
    {
        INFO(P)=X;
        NEXT(P) = NIL;
    }
    return P;
}
void First (List *L,address P){
    NEXT(P) = FIRST(*L);
    FIRST(*L) = P;
}
void InsVFirst (List *L,InfoType X){
    address P;

    P = ALOKASI(X);

    if (P!=NIL)
    {
        First(&(*L),P);
    }
}
void InsVFirstGanjil(List *L, InfoType X){
    address P;

    if(X%2==1){
        InsVFirst(&(*L),X);

    }else{

    }
}
void ShowData (List L){
    address P;

        P = FIRST(L);
        printf("\n");
        while(P!=NIL){
            if(NEXT(P)!=NIL){
                printf("%d->",INFO(P));
            }else{
                printf("%d ",INFO(P));
            }

            P = NEXT(P);
        }

}



/*int JumEl (List L){
    int jum=0;
    address P=FIRST(L);
    while(P!=NIL){
        jum = jum+INFO(P);
        P = NEXT(P);
    }
    return jum;
}*/


































