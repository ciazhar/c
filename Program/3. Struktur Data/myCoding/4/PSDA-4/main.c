#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int nilai;
    struct node* next;
};
void createList(struct node* *L){
    *L= NULL;
}
bool listEmpty(struct node* L){
    return L==NULL;
}
struct node* Alokasi(int X){
    struct node* p;
    p=malloc(sizeof(struct node)); ///setelah malloc p menjadi node
    if(p!=NULL){///jika masih ada memory
        p->nilai = X;
        p->next=NULL;
    }
    return p;
}
void Dealokasi(struct node* *p){
    free(p);
}
void insetFirst(struct node* *L, struct node* nodeBaru){
    nodeBaru->next=*L;
    *L=nodeBaru;
}
void insVFirst(struct node* *L, int X){
    struct node* nodeBaru = Alokasi(X);
    if(nodeBaru!=NULL){
        insetFirst(L,nodeBaru);
    }
}
void prinInfo(struct node* L){
    while(L!=NULL){
        printf("%d ->",L->nilai);
        L=L->next;
    }
    printf("NULL");
}

int main()
{
    struct node* L;
    createList(&L);
    insVFirst(&L,6);
    insVFirst(&L,2);
    insVFirst(&L,1);
    prinInfo(L);
    return 0;
}
