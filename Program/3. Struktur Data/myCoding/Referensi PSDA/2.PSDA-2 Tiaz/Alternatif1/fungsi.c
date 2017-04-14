#include "header.h"

boolean IsEmpty(Queue Q){
    if(HEAD(Q)==Nil && TAIL(Q)==Nil){
        return true;
    }else{
        return false;
    }
}

boolean IsFull(Queue Q){
    if(HEAD(Q)== 1 && TAIL(Q)== (Q).MaxEl){
        return true;
    }else{
        return false;
    }
}

int NBElmt(Queue Q){
    int i,jml;
    jml=0;
    if(HEAD(Q)==Nil && TAIL(Q)==Nil){
        return jml;
    }else{
        for(i=HEAD(Q);i<=TAIL(Q);i++){
            jml++;
        }
        return jml;
    }
}

void CreateEmpty(Queue *Q,infotype Batas){
    (*Q).T=(infotype *) malloc(Batas * sizeof(infotype));
    if((*Q).T != NULL){
        (*Q).HEAD= Nil;
        (*Q).TAIL=Nil;
        (*Q).MaxEl=Batas;
    }else{
        (*Q).MaxEl=Nil;
    }
}

void DeAlokasi(Queue *Q){
    free((*Q).T);
    (*Q).HEAD= Nil;
    (*Q).TAIL=Nil;
    (*Q).MaxEl=0;
}

void Add(Queue *Q, infotype X){
    if(IsFull(*Q)==false){
        (*Q).HEAD = 1;
        TAIL(*Q)++;
        InfoTail(*Q)=X;
    }else{
        printf("\nQueue Penuh Maaf. . . \n");
    }
}

void Del(Queue *Q, infotype *X){
    int i;
    *X=InfoHead(*Q);
    if(IsEmpty(*Q)!=true){
        if(HEAD(*Q)==1 && TAIL(*Q)==1){
            (*Q).HEAD = Nil;
        }else{
            for(i=(*Q).HEAD;i<=(*Q).TAIL;i++){
                (*Q).T[i]=(*Q).T[i+1];
            }
        }
        TAIL(*Q)--;
    }else{
        printf("\nQueue Kosong Maaf. . . \n");
    }

}

void Antrian(Queue Q){
    int i,j,k;

    for(i=0;i<=(Q).MaxEl;i++){
        if(i==HEAD(Q)){
            printf("HEAD");
        }else{
            printf("\t");
        }
    }
    printf("\n");

    for(i=0;i<=(Q).MaxEl;i++){
            printf("%d\t", i);
    }
    printf("\n");
    if(IsEmpty(Q)==true){
        for(i=0;i<=MaxEl(Q);i++){
            printf("null\t");
        }
            printf("\n");

    }else{
        printf("null\t");
        for(i=1;i<=TAIL(Q);i++){
                printf("%d\t",(Q).T[i]);
        }
    printf("\n");
    }

    for(i=0;i<=(Q).MaxEl;i++){
        if(i==TAIL(Q)){
            printf("TAIL");
        }else{
            printf("\t");
        }
    }
    printf("\n");
}
