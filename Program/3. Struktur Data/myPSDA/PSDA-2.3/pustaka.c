#include "pustaka.h"
#include "boolean.h"

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
void PrintQueue(Queue Q){
    int i=HEAD(Q);
    while(i<=TAIL(Q)){
        printf("\n| %d |",Q.T[i]);
        i++;
    }
}
