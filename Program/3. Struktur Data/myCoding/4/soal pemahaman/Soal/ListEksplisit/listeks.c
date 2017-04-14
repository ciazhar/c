#include "listeks.h"

List L;
address P;

boolean ListEmpty(List L)
{
    return (First(L)==Nil);
}

void CreateList(List *L)
{
    First((*L))=Nil;
}

address Alokasi(infotype X)
{
    P = (address)malloc(sizeof(ElmtList));
    if(P!=Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return (P);
}

void Dealokasi(address *P)
{
    free(*P);
}

void InsVFirst(List *L, infotype X)
{
    address P;

    P=Alokasi(X);
    if(P!=Nil)
        InsertFirst(L,P);
}

void InsertFirst(List *L, address P)
{
    Next(P)=First((*L));
    First((*L))=P;
}

void PrintInfo(List L) {
    address P;

    if(ListEmpty(L)) {
        printf("List kosong\n");
    }
    else {
        P = First(L);
        printf("{");
        do {
            if(Next(P)!=Nil) {
                printf("%d ", Info(P));
            }
            else {
                printf("%d", Info(P));
            }
            P = Next(P);
        }
        while(P!=Nil);
        printf("}\n");
    }
}

int NBElmt(List L) {
    int jumlah = 0;
    address P;

    if(ListEmpty(L)) {
        return jumlah;
    }
    else {
        P = First(L);
        while(P!=Nil) {
            jumlah = jumlah + 1;
            P = Next(P);
        }
        return jumlah;
    }
}

float Average(List L) {
    address P;
    float sum = 0;

    P = First(L);
    while(P!=Nil) {
        sum = sum + Info(P);
        P = Next(P);
    }

    return sum/(float)NBElmt(L);
}

/**Soal Pemahaman**/
int JumGanjil(List L)
{
    address P;
    int sum = 0;

    P = First(L);
    while(P!=Nil){
        if(Info(P)%2==1){
            sum = sum + Info(P);
        }
        P = Next(P);
    }
    return sum;
}
void GantiLast (List *L, infotype X)
{
    address P;

    P = First(*L);
    while(P!=Nil){
        if(Next(P)==Nil){
            Info(P)=Info(P)+X;
        }
        P = Next(P);
    }


}
boolean NilaiTengahGenap (List L){
    infotype tengah = (NBElmt(L)/2+1);
    printf("tengah %d\n",tengah);
    address P;
    int a;
    int i;

    P = First(L);
    //a= (tengah)->info
    while(P!=Nil){
        if(P==tengah){
            if(Info(P)%2==1){
                return 1;
                break;
            }
            else{
                return 0;
                break;
            }
        }
        P = Next(P);
    }

}
