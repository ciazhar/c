#include<stdio.h>

struct node{
    int nilai;
    struct node* next;
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
int FSearch(struct node* L, int x){
    while(L!=NULL){
        if(L->nilai==x){
            return 1;
            break;
        }
        L=L->next;
    }
    return 0;
}
struct node* Search(struct node *L, int x){
    while(L!=NULL){
        if(L->nilai==x){
            return L;
            break;
        }
        L=L->next;
    }
    return 0;
}
struct node* SearchPrec(struct node* L, int x){
    struct node* ptrDpn = L;
    struct node* ptrBlk = NULL;
    if(L==NULL){
        return NULL;
    }
    else if(L->next==NULL){
        return NULL;
    }
    else{
        while(ptrDpn->nilai!=NULL){
            ptrBlk=ptrDpn;
            ptrDpn=ptrDpn->next;
            if(ptrDpn->nilai==x){
                return ptrBlk;
            }
        }
        return NULL;
    }
}
int Max(struct node* L){
    int maks=L->nilai;
    if(L==NULL){
        return NULL;
    }
    else{
        while(L!=NULL){
            if(L->nilai>maks){
                maks=L->nilai;
            }
            L=L->next;
        }
        return maks;
    }
}
int Min(struct node* L){
    int mins=L->nilai;
    if(L==NULL){
        return NULL;
    }
    else{
        mins=L->nilai;
        while(L!=NULL){
            if(L->nilai<mins){
                mins=L->nilai;
            }
            L=L->next;
        }
        return mins;
    }
}
int addDepanBelakang(struct node* L){
    int hasil = L->nilai;
    while(L->next!=NULL){
        L=L->next;
    }
    hasil = hasil + L->nilai;
    return ;
}
int main(){
    struct node* L;
    struct node* p;
    CreateList(&L);
    InsVFirst(&L,1);
    InsVFirst(&L,2);
    InsVFirst(&L,3);
    InsVFirst(&L,4);
    PrintList(L);
    printf("\n%d",Min(L));

    return 0;
}
