#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node{
    int nilai;
    struct node* next;
};

void CreateList (struct node* *L )
{
    (*L) = NULL;
}

bool ListEmpty (struct node* L)
{
    return (L == NULL);
}

struct node* Alokasi (int X)
{
    struct node* P;
    P = malloc( sizeof(struct node));

    if ( P != NULL )  // jika masih ada memori
    {
        P->nilai = X;
        P->next = NULL;
    }
    return P;
}

struct node* Dealokasi (struct node* *p)
{
    free(*p);
}

void InsertFirst(struct node* *L, struct node* nodeBaru)    /// alokasi tempat untuk nodeBaru
{
    nodeBaru->next = (*L);
    *L = nodeBaru;
}

void InsVFirst(struct node* *L,int X)
{
    struct node* nodeBaru = Alokasi(X);
    if(nodeBaru != NULL )
    {
        InsertFirst(L,nodeBaru);
    }
}

void printINFO (struct node* L)
{
    while ( L != NULL )
    {
        printf("%d -> ",L->nilai);
        L= L->next;
    }
    printf("NULL\n");
}
int main ()
{
    struct node* L;
    printf("apakah kosong ? %d\n",ListEmpty(L));

    CreateList(&L);

    int menu = -1;

    InsVFirst(&L,5);
    printINFO(L);
    return 0;
}
