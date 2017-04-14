#include "header.h"

void CreateEmpty (Queue *Q)
{
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}
boolean IsEmpty (Queue Q)
{
    return ((Head(Q)==Nil)&&(Tail(Q)==Nil));
}
address Alokasi (infotype X)
{
    address P;
    P=malloc(sizeof(ElmtQueue));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
}
void DeAlokasi (address P)
{
    free(P);
}
void InsertAfter (Queue *Q, address P, address A)
{
    Next(P)=Next(A);
    Next(A)=P;
}
void AddQueue (Queue *Q, infotype X, int pri)
{
    address P=Alokasi(X);
    Prio(P)=pri;
    if(IsEmpty(*Q))///cek apa antrian kosong?
    {
        Head(*Q)=P;
        Tail(*Q)=P;
    }else if(Next(Head(*Q))==Nil)///cek apakah hanya ada satu antrian?
    {
        if(Prio(P)>Prio(Head(*Q)))
        {
            Next(P)=Head(*Q);
            Head(*Q)=P;
        }else{
            Next(Tail(*Q))=P;
            Tail(*Q)=P;
        }
    }else{///kondisi ketika antrian lebih dari satu
        if(Prio(P)>Prio(Head(*Q)))
        {
            Next(P)=Head(*Q);
            Head(*Q)=P;
        }else if(Prio(P)<Prio(Tail(*Q))){
            Next(Tail(*Q))=P;
            Tail(*Q)=P;
        }else{
            address H,prec;
            H=Head(*Q);
            while(Prio(H)>Prio(P)){
                prec=H;
                H=Next(H);
            }
            InsertAfter(Q,P,prec);
        }
    }
}
void DelQueue (Queue *Q, infotype *X)
{
    if(IsEmpty(*Q))
    {
        printf("Queue sudah kosong !\n");
    }else if(Next(Head(*Q))==Nil)
    {
        *X=InfoHead(*Q);
        Head(*Q)=Nil;
        Tail(*Q)=Nil;
    }else{
        address P;
        P=Head(*Q);
        Head(*Q)=Next(P);
        Next(P)=Nil;
        DeAlokasi(P);
    }
}
void PrintInfo (Queue Q)
{
    address P;
    P=Head(Q);
    while(P!=Nil){
        if(Next(P)==Nil)
        {
            printf("|%d|%d|", Info(P), Prio(P));
        }else{
            printf("|%d|%d| --> ", Info(P), Prio(P));
        }
        P=Next(P);
    }
}
int SumGenapInfoPrio(Queue Q)
{
    address P;
    P=Head(Q);
    int sum=0;
    while(P!=Nil){
        if(Info(P)%2==0){
            sum+=Info(P);
        }
        if(Prio(P)%2==0){
            sum+=Prio(P);
        }
        P=Next(P);
    }
    return sum;
}
int SumGanjilInfoPrio(Queue Q)
{

}
