#include "pustaka.h"

void createList(List *L){
    first(*L)=nil;
}
boolean memFull(){
    return firsAvail == nil;
}
boolean listEmpty(List L){
    return first(L)==nil;
}
void initTabel(){
    address p;
    for(p=indexMin;p<indexMax;p++){
        next(p)=p+1;
    }
    next(indexMax)=nil;
    firsAvail=indexMin;
}
void allocTab(address *P){
    if(memFull()){
        (*p)=nil;
        printf("Penuh\n");
    }
    else{
        (*p)=firsAvail;
        firsAvail=p;
    }
}
void deAllocTab(address P){
    next(P)=firsAvail;
    firsAvail=p;
}
void insertFirst(List *L, address P){
    if(listEmpty(*L)){
        next(p)=nil;
        first(*L)=p;
    }
    else{
        next(p)=first(*L);
        first(*L)=p;
    }
}
void insVFirst(List *L, infotype X){
    address p;
    allocTab(&p);
    if(p!nil){
        info(p)=X;
        insertFirst(&(*L),p);
    }
}
void printInfo(List L){
    address p;

    printf("\nL : ");
    if(listEmpty(L)){
        printf("List Kosong\n");
    }
    else{
        p=first(L);
        do{
            printf("%d ",info(p));
            p=next(p);
        }while(p!=nil);
    }
    printf("\n");
}
