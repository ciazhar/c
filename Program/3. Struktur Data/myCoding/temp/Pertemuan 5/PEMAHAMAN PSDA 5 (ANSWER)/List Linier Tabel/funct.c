#include "list.h"


boolean MemFull()
{
    return (FirstAvail==NIL);
}
//////////////////***TEST LIST KOSONG***//////////////////
boolean IsEmpty (List L)
{
    return (FIRST(L)==NIL);
}

void IniTabel ()
{
    address P;

    for (P=IndexMin;P<=IndexMax-1;P++)
    {
        NEXT(P) = P+1;
    }

    NEXT(IndexMax)=NIL;
    FirstAvail = IndexMin;
}
//////////////////***MEMBUAT LIST KOSONG***//////////////////
void createList (List *L)
{
    FIRST(*L)=NIL;
}

//////////////////***MANAJEMEN MEMORI***//////////////////
void AllocTab (address *P)
{
    if (!MemFull())
    {
        (*P) = FirstAvail;
        FirstAvail = NEXT(FirstAvail);
    }
    else
    {
        printf("Gk ada elemen lagi\n");
        (*P) = NIL;
    }
}

void DeAllocTab(address P)
{
/*Pre : FirstAvail mungkin kosong, P tidak Nil
  Post: FirstAvail=P
        Mengembalikan sebuah elemen P pada awal List FirstAvail*/
 //Next(P)` =FirstAvail;
 NEXT(P)=FirstAvail;
 FirstAvail=P;
}

////////////////////////***SEARCHING***/////////////////////////////
address Search_Add (List L,InfoType X)
{
    address P;

    P = FIRST(L);

    while (P!=NIL)
    {

        if (INFO(P)==X)
        {
            break;
        }
        P = NEXT(P);
    }

    return P;
}

boolean Search (address P)
{
    boolean FIND = false;
    if (P==NIL)
    {
        FIND = false;
    }
    else
    {
        FIND = true;
    }

    return FIND;
}

address SearchPrec (List L,InfoType X)
{
    address P;

    P = FIRST(L);

    while (NEXT(P)!=NIL)
    {
        if (INFO(NEXT(P))==X)
        {
            break;
        }
        P = NEXT(P);
    }

    return P;
}

//****************PRIMITIF BERDASARKAN NILAI****************//

////////////PENAMBAHAN ELEMEN//////////////
void InsVLast (List *L,InfoType X)
{
    address P;

    AllocTab(&P);
    if (P!=NIL)
    {
        INFO(P) = X;
        Last(L,P);
    }
}

void InsVFirst (List *L,InfoType X)
{
    address P;

    AllocTab(&P);
    if (P!=NIL)
    {
        INFO(P) = X;
        NEXT(P) = FIRST(*L);
        FIRST(*L) = P;
    }
}

////////////PENGHAPUSAN ELEMEN//////////////
void Del_First (List *L,address *P)
{
    *P = FIRST(*L);
    FIRST(*L) = NEXT(FIRST(*L));
}

void DelVFirst (List *L,InfoType *X)
{
    address P;

    Del_First(L,&P);
    *X = INFO(P);
    NEXT(P) = NIL;

   DeAllocTab(P);
}

void DelVLast (List *L,InfoType *X)
{
    address P;

    Del_Last(L,&P);

    *X = INFO(P);
    NEXT(P) = NIL;

   DeAllocTab(P);
}
//****************PRIMITIF BERDASARKAN ALAMAT****************//

///////////PENAMBAHAN ELEMEN////////////
void First (List *L,address P)
{
    NEXT(P) = FIRST(*L);
    FIRST(*L) = P;
}

void After (address P,address Prec)
{
    NEXT(P) = NEXT(Prec);
    NEXT(Prec) = P;
}

void Last (List *L,address P)
{
    address Last;

    if (FIRST(*L)==NIL)
    {
        First(L,P);
    }
    else
    {
        Last = FIRST(*L);
        while (NEXT(Last)!=NIL)
        {
            Last = NEXT(Last);
        }
        After(P,Last);
        //NEXT(P) = NEXT(last);
        //NEXT(last) = P;
    }
}

////////////PENGHAPUSAN ELEMEN /////////////////


void Del_Last (List *L,address *P)
{
    address Prec;
    Prec = NIL;
    *P = FIRST(*L);

    while (NEXT(*P)!=NIL)
    {
        Prec = *P;
        *P = NEXT(*P);
    }

    if (Prec==NIL)
    {
        FIRST(*L)=NIL;
    }
    else
    {
        NEXT(Prec)=NIL;
    }
}

void DelP (List *L,InfoType X)
{
    address P,Last,Prec;

    int temp;

    P = Search_Add(*L,X);
    Last = Search_Add(*L,X);
    if (Search(P)==false)
    {
        printf("Data tidak ditemukan.!\n");
    }
    else
    {
        if (INFO(FIRST(*L))==X)
        {
            DelVFirst(L,&temp);
        }
        else if (NEXT(Last)==NIL)
        {
            DelVLast(L,&temp);
        }
        else
        {
            Prec = SearchPrec(*L,X);
            DelAfter(NEXT(Prec),Prec);
        }
    }

}

void DelAfter (address P,address Prec)
{
    NEXT(Prec)=NEXT(P);
}
//*******************PROSES SEMUA LIST*********************
void ShowData (List L)
{
    address P;

    if (IsEmpty(L))
    {
        printf("Datanya Kosong...!\n");
    }
    else
    {
        P = FIRST(L);
        puts("================================");
        printf("[");
        do
        {
            if (NEXT(P)!=NIL)
            {
                printf("%d -> ",INFO(P));
            }
            else
            {
                printf("%d",INFO(P));
            }
            P = NEXT(P);
        }while (P!=NIL);
        puts("]");
        puts("================================");
    }
}

int NbElmt (List L)
{
    int sum=0;
    address P;

    P = FIRST(L);

    while(P!=NIL)
    {
        sum++;
        P = NEXT(P);
    }

    return sum;

}

int MAX (List L)
{
    int Max;
    address P,Prec;
    P = FIRST(L);
    Prec = NIL;

    Max = INFO(P);
    while (NEXT(P)!=NIL)
    {
        Prec = P;
        P = NEXT(P);
        if (INFO(P)>INFO(Prec))
        {
            Max = INFO(P);
        }
    }

    return Max;
}

address AdrMAX (List L)
{
    address P;
    int max;

    max = MAX(L);

    P = Search_Add(L,max);

    return P;
}

int MIN (List L)
{
    int Min;
    address P,Prec;
    P = FIRST(L);
    Prec = NIL;

    Min = INFO(P);
    while (NEXT(P)!=NIL)
    {
        Prec = P;
        P = NEXT(P);
        if (Min>INFO(P))
        {
            Min = INFO(P);
        }
    }

    return Min;
}

address AdrMIN (List L)
{
    address P;
    int min;

    min = MIN(L);

    P = Search_Add(L,min);

    return P;
}





//*******************PROSES TERHADAP LIST*********************
void DellAll (List *L)
{
    free(L);
}

void InversList (List *L)
{
    address P,Q,R;

    P = FIRST(*L);
    Q = NIL;

    while (P!=NIL)
    {
        R=NEXT(P);
        NEXT(P)=Q;
        Q=P;
        P=R;
    }
    FIRST(*L) = Q;
}

List FInversList (List L)
{
    InversList(&L);
    return L;
}

void CopyList (List *L1, List *L2)
{
    *L2 = *L1;
}

List FCopyList (List L)
{
    List L2;
    address P;

    createList(&L2);
    P = FIRST(L);

    while (P!=NIL)
    {
        InsVLast(&L2,INFO(P));
        P = NEXT(P);
    }

    return L2;
}

void CPAlokList (List Lin,List *Lout)
{
    *Lout = FCopyList(Lin);
}

void CONCAT (List *L1,List *L2, List *L3)
{
    address P;

    P = FIRST(*L1);

    while (NEXT(P)!=NIL)
    {
        P = NEXT(P);
    }
    NEXT(P) = FIRST(*L2);

    *L3 = *L1;
}

void CONCAT_DEL (List *L1,List *L2, List *L3)
{
    CONCAT(L1,L2,L3);
    FIRST(*L1)=NIL; //PENGHAPUSAN LIST1
    FIRST(*L2)=NIL; //PENGHAPUSAN LIST2
}

void PecahList (List *L1, List *L2,List L)
{
    address P;
    int i;
    P = FIRST(L);
    if (NbElmt(L)%2==0)
    {
        for (i=1;i<=(NbElmt(L)/2);i++)
        {
            InsVLast(L1,INFO(P));
            P=NEXT(P);
        }

        for (i=i;i<=NbElmt(L);i++)
        {
            InsVLast(L2,INFO(P));
            P=NEXT(P);
        }
    }
    else
    {
        for (i=1;i<=(NbElmt(L)/2);i++)
        {
            InsVLast(L1,INFO(P));
            P=NEXT(P);
        }

        for (i=i;i<=NbElmt(L);i++)
        {
            InsVLast(L2,INFO(P));
            P=NEXT(P);
        }
    }
}

void Manipulation_List (List *L)
{
    // lengkapi fungsinya disini ya sesuai kriteria kayak di main.c
    address P;
    int temp;

    P = FIRST(*L);

    if ((INFO(P)%2==0)&&(INFO(P)>0))
    {
        InsVFirst(L,INFO(P));
    }
    else if ((INFO(P)%2!=0)&&(INFO(P)<0))
    {
        DelVFirst(L,&temp);
    }
    else
    {
        printf("wkwkwk");
    }
}



void DepanBlakang (List *L)
{
    int i,jumlah,data;
    printf("Input Jumlah Data = ");scanf("%d",&jumlah);


    for (i=1;i<=jumlah;i++)
    {
        if (i%2!=0)
        {
            printf("masukan data ke-%d = ",i);scanf("%d",&data);
            InsVFirst(L,data);
        }
        else
        {
            printf("masukan data ke-%d = ",i);scanf("%d",&data);
            InsVLast(L,data);
        }

    }
}
