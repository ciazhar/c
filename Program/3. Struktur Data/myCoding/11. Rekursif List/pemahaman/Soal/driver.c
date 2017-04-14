#include "header.h"

void CreateEmpty (Queue *Q)
{
    Head(*Q)=Nil;
    Tail(*Q)=Nil;
}
boolean isEmpty (Queue Q)
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
void AddQueue (Queue *Q, infotype X)
{
    address P;
    P=Alokasi(X);
    if(isEmpty(*Q))
    {
        Head(*Q)=P;
        Tail(*Q)=P;
    }else
    {
        Next(Tail(*Q))=P;
        Tail(*Q)=P;
    }
}
void DelQueue (Queue *Q, infotype *X)
{
    address P;
    if(isEmpty(*Q))
    {
        printf("Queue sudah kosong!\n");
    }else if(Next(Head(*Q))==Nil)
    {
        *X=InfoHead(*Q);
        Head(*Q)=Nil;
        Tail(*Q)=Nil;
    }else
    {
        *X=InfoHead(*Q);
        P=Head(*Q);
        Head(*Q)=Next(P);
        DeAlokasi(P);
    }
}
void PrintQueue (Queue Q)
{
    address P;
    P=Head(Q);
    while(P!=Nil)
    {
        printf("| %d | ", Info(P));
        P=Next(P);
    }
}

int NbElmt(Queue Q)
{
    address P = Head(Q);
    int jum = 0;
    while(P!=Nil){
        jum++;
        P=Next(P);
    }
    return jum;

}

///Soal Pemahaman
int Jumlah (Queue Q)
{

}
int HasilKrgTmbh (Queue Q)
{
    address P;
    int Count=1;
    int Hitung=0;
    P=Head(Q);
    while(P!=Nil){
        if(Count%2==1){
            Hitung=Hitung+Info(P);
        }
        else /*if (Count%2==0)*/{
            Hitung=Hitung-Info(P);
        }
        Count++;
        P=Next(P);
    }
    return Hitung;
}
