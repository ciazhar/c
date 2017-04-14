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
    address i,j;
    if(IsEmpty(*Q)==true){
        HEAD(*Q) = 1;
        TAIL(*Q) = 1;
    }else{
        if(TAIL(*Q) == MaxEl(*Q)){
            i=HEAD(*Q); j=1;
            do{
                (*Q).T[j] = (*Q).T[i];
                i++; j++;
            }while (i<=TAIL(*Q));
            HEAD(*Q) = 1;
            TAIL(*Q) = j;
        }else{
            TAIL(*Q)++;
        }
    }
    InfoTail(*Q) = X;
}
void Del(Queue *Q, infotype *X)
{
    *X = InfoHead(*Q);
    if(HEAD(*Q)==TAIL(*Q)) // set menjadi queue kosong
    {
        HEAD(*Q)=Nil;
        TAIL(*Q)=Nil;
    }
    else
    {
        HEAD(*Q)++;
    }
}
void PrintQueue(Queue Q){
    int i=HEAD(Q);
    while(i<=TAIL(Q)){
        printf("| %d |",Q.T[i]);
        i++;
    }
}
