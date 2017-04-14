#include "pustaka.h"

void CreateEmpty(Queue *Q, int Max){
    (*Q).T=(infotype*)malloc((Max+1)*sizeof(int));///alokasi memori queue
    MaxEl(*Q)=Max;
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}
boolean IsEmpty(Queue Q){
    return ((Head(Q)==Nil)&&(Tail(Q)==Nil));
}
boolean IsFull(Queue Q){
    return ((Head(Q)==1)&&(Tail(Q)==MaxEl(Q)));
}
void Add(Queue *Q, infotype X){
    if(IsEmpty(*Q)){
        Head(*Q)=1;
        Tail(*Q)=1;
        InfoTail(*Q)=X;
    }
    else  if(IsFull(*Q)){
        printf("Queue Penuh\n");
    }
    else {
        Tail(*Q)++;
        InfoTail(*Q)=X;
    }
}
void Del(Queue *Q, infotype *X);
void PrintQueue(Queue Q){
    int i=Head(Q);
    while(i<=Tail(Q)){
        printf("| %d |",Q.T[i]);
        i++;
    }
}
int NbElmt(Queue Q);
void DeAlokasi(Queue *Q);


