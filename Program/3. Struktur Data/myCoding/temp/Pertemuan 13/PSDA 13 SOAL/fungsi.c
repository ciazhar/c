#include "header.h"


//***** KONSTRUKTOR *****//
BinTree TREE (infotype X , BinTree T)
{
    address P,temp;

    P = ALOKASI(X);

    if (P!=NIL)
    {
        if (T==NIL)
        {
            return P;
        }
        else if (IsOneElmt(T))
        {

             if (INFO(P)>INFO(T))
            {
                RIGHT(T) = P;
            }
            else
            {

                LEFT(T) = P;
            }

            return T;
        }
        else
        {
            temp = T;
            while (1)
            {
                if (INFO(P)<INFO(temp))
                {
                    if (LEFT(temp)==NIL)
                    {
                        LEFT(temp) = P;
                        break;
                    }
                    temp = LEFT(temp);
                }
                else
                {
                    if (RIGHT(temp)==NIL)
                    {
                        RIGHT(temp) = P;
                        break;
                    }
                    temp = RIGHT(temp);

                }
            }
            return T;
        }
    }
    else
    {
        return NIL;
    }
}

void MakeTree (BinTree *T,infotype X)
{
    if (IsTreeEmpty(*T))
    {
        address P;

        P = ALOKASI(X);

        *T = P;
    }
    else if (INFO(*T)>X)
    {
        MakeTree(&LEFT(*T),X);
    }
    else
    {
        MakeTree(&RIGHT(*T),X);
    }
}

address ALOKASI (infotype X)
{
    address P;

    P = (address)malloc(sizeof(Node));
    if (P!=NIL)
    {
        INFO(P)=X;
        LEFT(P) = NIL;
        RIGHT(P) = NIL;
    }
    return P;
}

//***** SELEKTOR *****//
infotype GetAkar (BinTree P)
{
    return INFO(P);
}

BinTree GetLeft (BinTree P)
{
    return LEFT(P);
}

BinTree GetRight (BinTree P)
{
    return RIGHT(P);
}

//***** PREDIKAT *****//
boolean IsTreeEmpty (BinTree P)
{
    return (P==NIL);
}
boolean IsOneElmt (BinTree P)
{
    return ((LEFT(P)==NIL) && (RIGHT(P)==NIL));
}
boolean IsUnerLeft (BinTree P)
{
    return ((LEFT(P)!=NIL) && (RIGHT(P)==NIL));
}
boolean IsUnerRight (BinTree P)
{
    return ((LEFT(P)==NIL) && (RIGHT(P)!=NIL));
}
boolean IsBiner (BinTree P)
{
    return ((LEFT(P)!=NIL) && (RIGHT(P)!=NIL));
}

//***** TRAVERSAL *****//
void PrintPreOrder (BinTree P)
{
    if (P!=NIL)
    {
        printf("%d ",INFO(P));
        PrintPreOrder(LEFT(P));
        PrintPreOrder(RIGHT(P));
    }
}

void PrintInOrder (BinTree P)
{
    if (P!=NIL)
    {
        PrintInOrder(LEFT(P));
        printf("%d ",INFO(P));
        PrintInOrder(RIGHT(P));
    }
}

void PrintPostOrder (BinTree P)
{
    if (P!=NIL)
    {
        PrintPostOrder(LEFT(P));
        PrintPostOrder(RIGHT(P));
        printf("%d ",INFO(P));
    }
}

//***** SEARCHING *****//
boolean Search (BinTree P , infotype X)
{
    if (P==NIL)
    {
        return false;
    }
    else
    {
        if (INFO(P)==X)
        {
            return true;
        }
        else
        {
            return (Search(LEFT(P),X) || (Search(RIGHT(P),X)));
        }
    }
}

//***** FUNGSI FUNGSI LAIN *****//
int NbElmt (BinTree P)
{
    if (IsTreeEmpty(P))
    {
        return 0;
    }
    else
    {
        return NbElmt(RIGHT(P)) + 1 + (NbElmt(LEFT(P)));
    }
}

int NbDaun (BinTree P)
{
    if (IsTreeEmpty(P))
    {
        return 0;
    }
    else if (IsOneElmt(P))
    {
        return 1;
    }
    else
    {
        return NbDaun(RIGHT(P)) +  (NbDaun(LEFT(P)));
    }
}

boolean IsSkewLeft (BinTree P)
{
    if (IsTreeEmpty(P))
    {
        return true;
    }
    else if (RIGHT(P)!=NIL)
    {
        return false;
    }
    else
    {
        return IsSkewLeft(LEFT(P));
    }
}

boolean IsSkewRight (BinTree P)
{
    if (IsTreeEmpty(P))
    {
        return true;
    }
    else if (LEFT(P)!=NIL)
    {
        return false;
    }
    else
    {
        return IsSkewRight(RIGHT(P));
    }
}

int Level (BinTree P)
{
    if (P==NIL)
    {
        return 0;
    }
    else
    {
        static int u;
        u = Level(LEFT(P));
        static int v;
        v = Level(RIGHT(P));
        if (u>v)
        {
            return u+1;
        }
        else
        {
            return v+1;
        }
    }
}

void mirror (BinTree P)
{
    address temp;
    if (IsTreeEmpty(P))
    {

    }
    else if (IsUnerLeft(P))
    {
        RIGHT(P) = LEFT(P);
        LEFT(P) = NIL;
        mirror(LEFT(P));
        mirror(RIGHT(P));
    }
    else if (IsUnerRight(P))
    {
        LEFT(P) = RIGHT(P);
        RIGHT(P) = NIL;
        mirror(LEFT(P));
        mirror(RIGHT(P));
    }
    else if ((RIGHT(P)!=NIL) && (LEFT(P)!=NIL))
    {

        temp = RIGHT(P);
        RIGHT(P) = LEFT(P);
        LEFT(P) = temp;
        mirror(LEFT(P));
        mirror(RIGHT(P));
    }
}

boolean path (BinTree P , int N)
{
    if (IsOneElmt(P))
    {
        if (N-INFO(P)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (IsUnerLeft(P))
    {
        return (path(LEFT(P),N-INFO(P)));
    }
    else if (IsUnerRight(P))
    {
        return (path(RIGHT(P),N-INFO(P)));
    }
    else if ((RIGHT(P)!=NIL) && (LEFT(P)!=NIL))
    {
        return ((path(LEFT(P),N-INFO(P))) || (path(RIGHT(P),N-INFO(P))));
    }

}

//*************SOAL PEMAHAMAN *****************//
void addDaunKiri (BinTree *T , infotype X)
{
    if(IsTreeEmpty(*T)) //basis
    {
        *T = ALOKASI(X);
    }
    else if(IsTreeEmpty(LEFT(*T)))
    {
        LEFT(*T) = ALOKASI(X);
    }
    else
    {
        addDaunKiri(&LEFT(*T),X);
    }
}

void InserAfter (BinTree *T,infotype value,infotype NODE)
{
    if(IsTreeEmpty(*T)){
        return;
    }
    else if(INFO(*T) == NODE){
        LEFT(*T) = ALOKASI(value);
    }
    else{
        InserAfter(&LEFT(*T),value,NODE);
        InserAfter(&RIGHT(*T),value,NODE);
    }
}

void InsertKananKiri (BinTree *T,infotype value,infotype NODE)
{
    if(IsTreeEmpty(*T)){
        return;
    }
    else if(INFO(*T) == NODE){
        if (IsTreeEmpty(RIGHT(*T)) && IsTreeEmpty(LEFT(*T)))
        {
            LEFT(*T) = ALOKASI(value);
            RIGHT(*T) = ALOKASI(value);
        }
        else if(IsTreeEmpty(RIGHT(*T)))
        {
            RIGHT(*T) = ALOKASI(value);
            puts("Kiri tidak kosong");
        }
        else if (IsTreeEmpty(LEFT(*T)))
        {
            LEFT(*T) = ALOKASI(value);
            puts("Kanan tidak kosong");
        }
        else
        {
            printf("\ntidak ada slot kosong");
        }
    }
    else{
        InsertKananKiri(&LEFT(*T),value,NODE);
        InsertKananKiri(&RIGHT(*T),value,NODE);
    }
}
