#include "header.h"

void CreateList(List *L)
{
    (*L).N=Nil;
}
boolean ListEmpty(List L)
{
    return ((L).N==Nil);
}
void InsertFirst(List *L)
{
    Last(*L)++;
    (*L).N=Last(*L);
}
void InsVFirst(List *L, infotype X)
{
    infotype i; ///inisialisasi buat looping
    address P;
    if(ListEmpty(*L))
    {
        First(*L)=IndexMin;
        Last(*L)=First(*L);
        (*L).N=Last(*L);
        (*L).TabMem[FirstAdd].Info=X;
    }else{
        P=First(*L);
        InsertFirst(&(*L));
        i=Last(*L);
        while(i!=First(*L))
        {
            (*L).TabMem[i].Info = (*L).TabMem[i-1].Info;
            i--;
        }
        (*L).TabMem[FirstAdd].Info=X;
    }
}
void InsertLast(List *L, address P)
{
    Last(*L)++;
    (*L).N=Last(*L);
    P=Last(*L);
}
void InsVLast(List *L, infotype X)
{
    address P;
    if(ListEmpty(*L))
    {
        First(*L)=IndexMin;
        Last(*L)=First(*L);
        (*L).N=Last(*L);
        (*L).TabMem[FirstAdd].Info=X;
    }else{
        P=First(*L);
        InsertLast(&(*L),P);
        (*L).TabMem[LastAdd].Info=X;
    }
}
void PrintInfo(List L)
{
    address P;
    if(ListEmpty(L))
    {
        printf("List Kosong\n");
    }else{
        P=First(L);
        while(P!=Last(L)+1)
        {
            printf("| %d |", Info(P));
            P++;
        }
    }
}
void ReverseList(List L)
{
    address P;

    if(ListEmpty(L))
    {
        printf("List Kosong\n");
    }
    else{
        P=Last(L);
        while(P!=First(L)-1){
            printf("| %d |", Info(P));
            P--;
        }
    }
}
/*void ReverseListM(List *L)
{
    address P,Q;
    int temp;

    if(ListEmpty(*L)){
        printf("List Kosong\n");
    }
    else{
        P=First(*L);
        Q=Last(*L);

        while(P!=Last(L)-1){
            printf("| %d |", Info(P));
            P--;
        }
        /*

        while(P!=Last(L)-1){

            P--;
        }
    }
}
*/


