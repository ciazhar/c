#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nilai;
    struct node* next; /// address
};

void insertFirst(struct node* *L,int X)
{
    struct node* nodeBaru=malloc(sizeof(struct node));//Rubah pointer jadi node
    if(nodeBaru!=NULL){//jika memori belum penuh
        nodeBaru->nilai = X;//nilai node baru diisi X
        nodeBaru->next = *L;//nilai node baru menunjuk *L
        *L=nodeBaru;//L diganti ke node baru
    }
    else
    {
        printf("Memori Habis");
    }
}

void printList(struct node* L)
{
    while(L!=NULL)
    {
        printf("%d ->",L->nilai);
        L=L->next;
    }
    printf("NULL\n");
}

void delFirst(struct node* *L,int *X)
{
    struct node* Temp;//buat pointer temp
    if(*L!=NULL)//jika tidak kosong
    {
        *X=(*L)->nilai;//nilai masuk ke *L
        Temp=*L;//pointer temp menunjuk ke first
        *L=(*L)->next;//L maju
        free(Temp);//yang ditunjuk temp dihapus
    }
    else
    {
        printf("List Kosong");
    }
}

void delLast(struct node* *L, int *X){
    ///address depan
    ///address belakang
    struct node* depan;
    struct node* belakang;
    if(*L!=NULL){ ///jika list bukan NULL
            if((*L)->next==NULL){///jika next l = nulll / jika hanya 1 elemen
                delFirst(L,X); ///tidak *L karena udah diwakili di main struxt node*
            }
            else{
                belakang=NULL;
                depan=*L;
                while(depan->next!=NULL){
                    belakang = depan;
                    depan = depan->next;
                }
                *X=depan->nilai;///balikin ke main
                belakang->next = NULL;
                free(depan);
            }
    }
}

void printListRec(struct node* L)
{
    if(L==NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d -> ",L->nilai);
        printListRec(L->next);
    }
}


/**
    jika explisit pakai

    struct nd
    {
        struct node* first;
    }
**/

int main()
{
    struct node* L=NULL; // pointer ke first
    int menu = -1;
    int angka,angka1,angka2;
    while (menu!=0){
        system("cls");
        printList(L);
        printf("1. insert first\n");
        printf("2. delete first\n");
        printf("3. delete last\n");
        printf("0. exit\n");
        printf("inputkan menu : ");
        scanf("%d",&menu);
        switch (menu){
            case 1:
                printf("inputkan angka : ");
                scanf("%d",&angka);
                insertFirst(&L,angka);
                break;
            case 2:
                delFirst(&L,&angka1);
                printf("%d deleted\n",angka1);
                printf("Press any key...");
                getch();
                break;
            case 3:
                delLast(&L,&angka2);
                printf("%d deleted\n",angka2);
                printf("Press any key...");
                getch();
                break;

        }
    }
    return 0;
}
