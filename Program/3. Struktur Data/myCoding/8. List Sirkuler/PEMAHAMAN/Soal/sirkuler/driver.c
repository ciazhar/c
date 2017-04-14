#include "header.h"

void CreateEmpty (List *L)
{
    First(*L)=Nil;
}
boolean isEmpty (List L)
{
    return (First(L)==Nil);
}
boolean isOneElmt(List L)
{
    return(Next(First(L))==First(L));
}
address Alokasi(infotype X)
{
    address P;
    P=malloc(sizeof(ElmtList));
    if(P!=Nil)
    {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}
void InsertFirst(List *L, infotype X)
{
    address P, Last;
    P=Alokasi(X);
    if (isEmpty(*L))
    {
        First(*L)=P;
        Next(P)=First(*L);
    }else{
        Last=First(*L);
        while(Next(Last)!=First(*L))
        {
            Last=Next(Last);
        }
        Next(P)=First(*L);
        First(*L)=P;
        Next(Last)=First(*L);
    }
}
void InsertLast(List *L, infotype X)
{
    address P, Last;
    P=Alokasi(X);
    if (isEmpty(*L))
    {
        First(*L)=P;
        Next(P)=First(*L);
    }else{
        Last=First(*L);
        while(Next(Last)!=First(*L))
        {
            Last=Next(Last);
        }
        Next(Last)=P;
        Last=P;
        Next(P)=First(*L);
    }
}
void DelFirst(List *L, infotype *X)
{
    address P,Last;
    if(isEmpty(*L))
    {
        printf("List sudah kosong! \n");
    }else if(isOneElmt(*L))
    {
        P=First(*L);
        *X=Info(P);
        P=Nil;
        free(P);
    }else{
        Last=First(*L);
        while(Next(Last)!=First(*L))
        {
            Last=Next(Last);
        }
        P=First(*L);
        First(*L)=Next(P);
        Next(Last)=First(*L);
        *X=Info(P);
        Next(P)=Nil;
    }
}
void DelLast(List *L, infotype *X)
{
    address P,Last, prec;
    if(isEmpty(*L))
    {
        printf("List sudah kosong! \n");
    }else if(isOneElmt(*L)){
        P=First(*L);
        *X=Info(P);
        P=Nil;
        free(P);
    }else{
        Last=First(*L);
        while(Next(Last)!=First(*L))
        {
            prec=Last;
            Last=Next(Last);
        }
        *X=Info(Last);
        Next(Last)=Nil;
        free(Last);
        Next(prec)=First(*L);
    }
}
void PrintList (List L)
{
    if(isEmpty(L))
    {
        printf("List Kosong! \n");
    }else{
        address P;
        P=First(L);
        do{
            printf("| %d |", Info(P));
            P=Next(P);
        }while(P!=First(L));
    }
}
int NbElmt(List L)
{
    address P;
    int jum=0;
    P=First(L);
    do{
        jum+=1;
        P=Next(P);
    }while(P!=First(L));
    return jum;
}
///Selamat Mengerjakan
int PrintBeforeLast(List L)
{

}
boolean ListGenap(List L)
{

}
void kalitengah(List *L, infotype X)
{
    int tengah=0;
    int jumlah=NbElmt(*L);
    int hitung=0;

    if(jumlah%2==1){
        tengah=jumlah/2;
    }
    else{
        tengah=jumlah/2;
    }
    address P=First(*L);
    while(1){
        if(tengah==hitung){
            break;
        }
        else{
            P=Next(P);
            hitung++;
        }
    }
    Info(P)= Info(P)*X;
}
