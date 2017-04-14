#include<stdio.h>

//typedef struct node* address ;
//typedef struct node* List;
/**
typedef struct node{
    int nilai;
    struct node* next;      ///POINTER  jika di malloc menjadi sebuah node
}tElmntList;
*/

struct node{
    int nilai;
    struct node* next;      ///POINTER  jika di malloc menjadi sebuah node
};



void CreateList(struct node* *L){
    *L = NULL;
}
int ListEmpty(struct node* L){
    return L == NULL;
}

struct node* Alokasi(int x){
    struct node* nodeBaru;
    nodeBaru = malloc(sizeof(struct node));
    if(nodeBaru!= NULL){
        nodeBaru->nilai = x;
        nodeBaru->next  = NULL;
    }
    return nodeBaru;
}
void Dealokasi(struct node* *L){
    free(L);
}

void InsertFirst(struct node* *L,struct node* nodeBaru){
    nodeBaru->next = *L;
    *L = nodeBaru;
}
void InsVFirst(struct node* *L,int x){
    struct node* nodeBaru = Alokasi(x);
    if(nodeBaru!=NULL){
        InsertFirst(L,nodeBaru);
    }
}
void PrintList(struct node* L){
    while(L != NULL){
        printf("%d -> ",L->nilai);
        L = L->next;
    }
    printf("NULL");
}

int FSearch(struct node* L, int X)
{
    while ( L != NULL )
    {
        if ( L->nilai == X )
        {
            return 1;
        }
        L = L->next;
    }
    return 0;
}

/*
int FSearch(struct node* *L, int X)
{
    struct node* P;     /// gunakan variabel baru jika ada kemungkinan nilai List berubah *L
    P= First(L);
    while ( L != NULL )
    {
        if ( L->nilai == X )
        {
            return 1;
        }
        L = L->next;
    }
    return 0;
}
*/

struct node* Search ( struct node* L, int X)        /// mencari address dari L
{
        while ( L != NULL )
        {
            if (L->nilai == X)
            {
                return L;
            }
            L = L->next;
        }
        return L;
}

struct node* SearchPrec(struct node* L , int X)     // mencari address sebelumnya
{
    struct node* ptrDepan = L;
    struct node* ptrBlkng = NULL ;
    if ( L == NULL )
    {
        return NULL;
    } else if ( L->next == NULL )
    {
        return NULL;
    } else
    {
        while ( ptrDepan->next != NULL)
        {
            ptrBlkng = ptrDepan;
            ptrDepan = ptrDepan->next;
            if (ptrDepan->nilai == X )
            {
            return ptrBlkng;
            }
        }
        return NULL;
    }
}

int Max ( struct node* L )
{
    int maks ;
    if ( L == NULL )
    {
        return NULL;
    } else
    {
        maks = L->nilai;
        while ( L != NULL )
        {
            if ( L->nilai > maks )
            {
                maks = L->nilai;
            }
            L = L->next;
        }
         return maks;
    }
}

int Min ( struct node* L )
{
    int minim ;
    if ( L == NULL )
    {
        return NULL;
    } else
    {
        minim = L->nilai;
        while ( L != NULL )
        {
            if ( L->nilai < minim )
            {
                minim = L->nilai;
            }
            L = L->next;
        }
         return minim;
    }
}

int AddFLast ( struct node* L )     // tambah first & last
{
    int hasil = L->nilai;

    while ( L->next != NULL )
    {
        L = L->next;
    }
    hasil = hasil + L->nilai ;
    return hasil;
}
int main(){
    struct node* L;
    CreateList(&L);
    InsVFirst(&L,10);
    InsVFirst(&L,21);
    InsVFirst(&L,53);
    InsVFirst(&L,42);
    PrintList(L);

    // Search ada/tidak //
    printf("\nApakah nilai 12 ada? %s\n",FSearch(L,12)?"Ada":"Tidak Ada");
    printf("\nApakah nilai 21 ada? %s\n",FSearch(L,21)?"Ada":"Tidak Ada");

    // Search address //
    struct node* P;
    P = Search(L,53);
    printf("Search address 53 : %d\n",P);

    // Search Prec
    struct node* Z;
    Z = SearchPrec(L,53);
    printf("Search prec 53 : %d\n",Z->nilai);

    // Maks List
    printf("nilai maksimum %d\n", Max(L));
    printf("nilai minimum %d\n", Min(L));
    printf("nilai awal + akhir = %d\n", AddFLast(L));

    return 0;
}
