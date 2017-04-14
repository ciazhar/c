#include "pustaka.h"

void CreateList(List *L){
    (*L).N=Nil;
}
boolean ListEmpty(List L){
    return ((L).N==Nil);
}
void InsertFirst(List *L){
    Last(*L)++;
    (*L).N=Last(*L);
}
void InsertVFIrst(List *L, infotype X){
    int i;

    if(ListEmpty(*L)) {
        First(*L) = IndexMin;
        Last(*L) = First(*L);
        (*L).N = Last(*L);
        (*L).TabMem[FirstAdd].Info = X;
    }
    else {
        InsertFirst(&(*L));
        i = Last(*L);

        while(i!=First(*L)) {
            (*L).TabMem[i].Info = (*L).TabMem[i-1].Info;
            i--;
        }
        (*L).TabMem[FirstAdd].Info = X;
    }

}
void PrintList(List L){
    address P;
    if(ListEmpty(L)){
        printf("List Kosong Bitch\n");
    }
    else{
        P=First(L);
        printf("=============================\n[");
        while(P!=Last(L)+1){
            printf("%d -> ",Info(P));
            P++;
        }
        printf("]\n=============================");
    }

}
