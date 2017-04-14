#include "header.h"

boolean IsEmpty(Queue Q){
    if(HEAD(Q)==Nil && TAIL(Q)==Nil){
        return true;
    }else{
        return false;
    }
}

boolean IsFull(Queue Q){
    if(NBElmt(Q)== MaxEl(Q)){
        return true;
    }else{
        return false;
    }
}

int NBElmt(Queue Q){
//    int i,jml;
//    jml=0;
//    if(HEAD(Q)==Nil && TAIL(Q)==Nil){
//        return jml;
//    }else{
//        for(i=HEAD(Q);i<=MaxEl;i++){
//            jml++;
//        }
//        return jml;
//    }
int i, hsl;
    i=(HEAD(Q)+1);
    hsl=1;
    if((TAIL(Q)+1)==HEAD(Q)){
        hsl=MaxEl(Q);
    }else if(TAIL(Q)>HEAD(Q)){
        hsl=((TAIL(Q)-HEAD(Q))+1);
    }else{
//    while (i!=TAIL(Q)){
//        if(i>MaxEl(Q)){
//            i=1;
//        }else{
//            i++;
//        }
//        hsl++;
//    }
        hsl=(((MaxEl(Q)-HEAD(Q))+1)+(TAIL(Q)));
    }
    return hsl;
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

void Add(Queue *Q,infotype X)
{
    if (IsFull(*Q)){
            printf("\n---QUEUE PENUH----");
    }else if(IsEmpty(*Q)){
        HEAD(*Q)=1;
        TAIL(*Q)=1;
        InfoTail(*Q)=X;
    }else{

        if (TAIL(*Q)==(MaxEl(*Q))){
            TAIL(*Q)=1;
        }else {
            TAIL(*Q)++;
        }
        InfoTail(*Q)=X;
    }

}
void Del(Queue *Q,infotype *X)
{
    *X=InfoHead(*Q);
    if(HEAD(*Q)==TAIL(*Q))
    {
        HEAD(*Q)=Nil;
        TAIL(*Q)=Nil;
    }
    else if (HEAD(*Q)==(MaxEl(*Q)+1))
    {
        HEAD(*Q)=1;
    }
    else
    {
        HEAD(*Q)++;
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
        for(i=1;i<=MaxEl(Q);i++){
//            if(HEAD(Q)>TAIL(Q)){
//                if(i<HEAD(Q) || i>TAIL(Q)){
//                    printf("null\t");
//                }else{
//                    if(i>=HEAD(Q) || i<=TAIL(Q)){
                        printf("%d\t",(Q).T[i]);
//                    }else{
//                        printf("\t");
//                    }
//                }
//            }else if(HEAD(Q)<TAIL(Q)){
//                if(i>HEAD(Q) || i<TAIL(Q)){
//                    printf("null\t");
//                }else{
//                    if(i<=HEAD(Q) || i>=TAIL(Q)){
//                        printf("%d\t",(Q).T[i]);
//                    }else{
//                        printf("\t");
//                    }
//                }
//
//            }
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
