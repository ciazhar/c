#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nilai
    struct node* next;  // ?????????????
};
void insertFirst(struct node* *L, int X)
{
    struct node* nodeBaru = malloc(sizeof(struct node));    // ubah pointer jadi node
    if ( nodeBaru != NULL )     // jika memori belum penuh ??????
    {
        nodeBaru -> nilai = X;  // nilai nodeBaru diisi X
        nodeBaru -> next = *L;  // next nodeBaru menuju *L
        *L = nodeBaru ;         // L diganti ke node baru
    }
    else
    {
        printf("memori penuh !!!");
    }
}

void printList (struct node* L)
{
    while ( L != NULL )
    {
        printf("%d ", L ->nilai);
        L = L -> next ;
    }
    printf("NULL\n");
}

