#include "list.h"

boolean MemFull()
{
    return (FirstAvail==Nil);
}

void InitTab()
{
    address P;

    for(P=IndexMin; P<IndexMax; P++)
    {
        Next(P)=P+1;
    }

    Next(IndexMax)=Nil;
    FirstAvail=IndexMin;
}

void AllocTab(address *P)
{
    if(MemFull())
    {
        (*P)=Nil;
        printf("Tidak tersedia memori siap pakai.\n");
    }
    else
    {
        (*P)=FirstAvail;
        FirstAvail=Next(FirstAvail);
    }
}

void DeallocTab(address P)
{
    Next(P)=FirstAvail;
    FirstAvail=(P);
}

boolean ListEmpty(List L)
{
    return (First(L)==Nil);
}

void CreateList(List *L)
{
    First(*L)=Nil;
}

address Search(List L, infotype X)
{
    address P=First(L);

    while(Info(P)!=X && P!=Nil)
    {
        P=Next(P);
    }
    return P;
}

boolean FSearch(List L, address P)
{
    address Pp=First(L);
    boolean Found=false;

    while(Found==false && Pp!=Nil)
    {
        if(Pp==P)
        {
            Found=true;
            break;
        }
        else
        {
            Pp=Next(Pp);
        }
    }
    return Found;
}

address SearchPrec(List L, infotype X)
{
    address P,Prec;

    P=Search(L,X);
    Prec=First(L);
    while(Next(Prec)!=Nil && Next(Prec)!=P)
    {
        Prec=Next(Prec);
    }

    if(Next(Prec)==P)
    {
        return Prec;
    }
    else
    {
        return Nil;
    }
}

void InsVFirst(List *L, infotype X)
{
    address P;

    AllocTab(&P);
    if(P!=Nil)
    {
        Info(P)=X;
        InsertFirst(&(*L),P);
    }
}

void InsVLast(List *L, infotype X)
{
    address P;

    AllocTab(&P);
    if(P!=Nil)
    {
        Info(P)=X;
        InsertLast(&(*L),P);
    }
}

void DelVFirst(List *L, infotype *X)
{
    address P;

    DelFirst(&(*L),&P);
    (*X)=Info(P);
    Next(P)=Nil;
    DeallocTab(P);
}

void DelVLast(List *L, infotype *X)
{
    address P;

    DelLast(&(*L),&P);
    (*X)=Info(P);
    DeallocTab(P);
}

void InsertFirst(List *L, address P)
{
    if(ListEmpty(*L))
    {
        Next(P)=Nil;
        First(*L)=P;
    }
    else
    {
        Next(P)=First(*L);
        First(*L)=P;
    }
}

void InsertAfter(List *L, address P, address Prec)
{
    Next(P)=Next(Prec);
    Next(Prec)=P;
}

void InsertLast(List *L, address P)
{
    address Last;

    if(ListEmpty(*L))
    {
        InsertFirst(&(*L),P);
    }
    else
    {
        Last=First(*L);
        while(Next(Last)!=Nil)
        {
            Last=Next(Last);
        }
        InsertAfter(&(*L),P,Last);
    }
}

void DelFirst(List *L, address *P)
{
    (*P)=First(*L);
    First(*L)=Next(First(*L));
    //Next(*P)=Nil;
}

void DelP(List *L, infotype X)
{
    address P,Pp;

    P=Search(*L,X);
    if(P!=Nil)
    {
        if(P==First(*L))
        {
            DelFirst(&(*L),&Pp);
        }
        else
        {
            P=SearchPrec(*L,X);
            DelAfter(&(*L),&Pp,P);
        }
        DeallocTab(Pp);
    }
}

void DelLast(List *L, address *P)
{
    address Last,PrecLast;

    PrecLast=Nil;
    Last=First(*L);
    while(Next(Last)!=Nil)
    {
        PrecLast=Last;
        Last=Next(Last);
    }

    (*P)=Last;
    if(Last==First(*L))
    {
        First(*L)=Nil;
    }
    else
    {
        Next(PrecLast)=Nil;
    }
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    (*Pdel)=Next(Prec);
    Next(Prec)=Next(Next(Prec));
    Next(*Pdel)=Nil;
}

void PrintInfo(List L)
{
    address P;

    if(ListEmpty(L))
    {
        printf("List kosong");
    }
    else
    {
        P=First(L);
        while(P!=Nil)
        {
            printf("|%d| ",Info(P));
            P=Next(P);
        }
    }
}

int NbElmt(List L)
{
    int hit=0;
    address P=First(L);

    while(P!=Nil)
    {
        hit++;
        P=Next(P);
    }
    return hit;
}

infotype Maxs(List L)
{
    address P,Maks;
    Maks=First(L);
    P=Next(Maks);

    while(P!=Nil)
    {
        if(Info(P)>Info(Maks))
        {
            Maks=P;
        }
        P=Next(P);
    }
    return Info(Maks);
}

address AdrMax(List L)
{
    address P,Maks;
    Maks=First(L);
    P=Next(Maks);

    while(P!=Nil)
    {
        if(Info(P)>Info(Maks))
        {
            Maks=P;
        }
        P=Next(P);
    }
    return Maks;
}

infotype Mins(List L)
{
    address P,Min;
    Min=First(L);
    P=Next(Min);

    while(P!=Nil)
    {
        if(Info(P)<Info(Min))
        {
            Min=P;
        }
        P=Next(P);
    }
    return Info(Min);
}

address AdrMin(List L)
{
    address P,Min;
    Min=First(L);
    P=Next(Min);

    while(P!=Nil)
    {
        if(Info(P)<Info(Min))
        {
            Min=P;
        }
        P=Next(P);
    }
    return Min;
}

float Average(List L)
{
    int sum=0;
    float avg;
    address P=First(L);

    while(P!=Nil)
    {
        sum+=Info(P);
        P=Next(P);
    }
    avg=(float)sum/NbElmt(L);

    return avg;
}

void DelAll(List *L)
{
    address P,P1;

    P=First(*L);
    printf("* Elemen yang dihapus : ");
    while(P!=Nil)
    {
        P=Next(P);
        DelFirst(&(*L),&P1);
        printf("|%d| ",Info(P1));
        DeallocTab(P1);
    }
}

void InversList(List *L)
{
    address Last,P;

    if(ListEmpty(*L)==true)
    {
        printf("");
    }
    else
    {
        Last=First(*L);
        P=Next(First(*L));

        while(P!=Nil)
        {
            DelAfter(&(*L),&P,Last);
            InsertFirst(&(*L),P);
            P=Next(Last);
        }
    }
}

List FInversList(List L)
{
    List LP;
    address P;

    CreateList(&LP);
    P=First(L);
    while(P!=Nil)
    {
        InsVFirst(&LP,Info(P));
        P=Next(P);
    }
    return LP;
}

void CopyList(List *L1, List *L2)
{
    First(*L2)=First(*L1);
}

List FCopyList(List L)
{
    List LC;
    address P;

    CreateList(&LC);
    P=First(L);
    while(P!=Nil)
    {
        InsVLast(&LC,Info(P));
        P=Next(P);
    }
    return LC;
}

void CpAlokList(List Lin, List *Lout)
{
    address P;

    P=First(Lin);
    while(P!=Nil)
    {
        InsVLast(&(*Lout),Info(P));
        P=Next(P);
    }
}

void Konkat(List L1, List L2, List *L3)
{
    address P;

    if(ListEmpty(L1)==true)
    {
        CpAlokList(L2,&(*L3));
    }
    else
    {
        CpAlokList(L1,&(*L3));

        P=First(L2);
        while(P!=Nil)
        {
            InsVLast(&(*L3),Info(P));
            P=Next(P);
        }
    }
}

void Konkat1(List *L1, List *L2, List *L3)
{
    address P;
    infotype X;

    if(ListEmpty(*L1)==true)
    {
        P=First(*L2);
        while(P!=Nil)
        {
            P=Next(P);
            DelVFirst(&(*L2),&X);
            InsVLast(&(*L3),X);
        }
    }
    else
    {
        P=First(*L1);
        while(P!=Nil)
        {
            P=Next(P);
            DelVFirst(&(*L1),&X);
            InsVLast(&(*L3),X);
        }

        P=First(*L2);
        while(P!=Nil)
        {
            P=Next(P);
            DelVFirst(&(*L2),&X);
            InsVLast(&(*L3),X);
        }
    }
}

void PecahList(List *L1, List *L2, List L3)
{
    address P;
    int i=1;

    P=First(L3);
    while(P!=Nil)
    {
        if(NbElmt(L3)%2==0)
        {
            if(i<=NbElmt(L3)/2)
            {
                InsVLast(&(*L1),Info(P));
            }
            else if(i>NbElmt(L3)/2)
            {
                InsVLast(&(*L2),Info(P));
            }
        }
        else if(NbElmt(L3)%2==1)
        {
            if(i<=(NbElmt(L3)/2)+1)
            {
                InsVLast(&(*L1),Info(P));
            }
            else if(i>(NbElmt(L3)/2)+1)
            {
                InsVLast(&(*L2),Info(P));
            }
        }

        i++;
        P=Next(P);
    }
}
