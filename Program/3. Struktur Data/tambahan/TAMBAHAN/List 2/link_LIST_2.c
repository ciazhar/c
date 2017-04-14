// List Queue Fist In First OUT
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int nilai;
    struct node* next;
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
    printf("%d telah dihapus\n",(*X) );
}

void delLast(struct node* *L, int *X)
{
    struct node* depan;
    struct node* belakang;
    struct node* hapus;
    if ( *L != NULL ) // jika list tidak NULL
    {
        if ( (*L)->next == NULL )   // jika hanya 1 Elemen
        {
            delFirst(L,X);
        }
        else
        {
            belakang = NULL;
            depan = (*L);

            while (depan-> next != NULL )
            {
                belakang = depan;
                depan = depan->next;
            }

            (*X) = depan->nilai;
            belakang->next = depan->next;
            hapus = depan;
            free(hapus);

            /**
            belakang->next = NULL;
            free(depan);        // tanpa struct node* hapus
            */

            printf("%d telah dihapus\n",(*X) );
        }
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
    int X;
    int menu = -1;
    int angka;
    while (menu!=0){
        system("cls");
        printList(L);
        printf("1. insert first\n");
        printf("2. delete first\n");
        printf("3. delete Last\n");
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
                delFirst(&L,&X);
                getch();
                break;
            case 3:
                delLast(&L,&X);
                getch();
                break;
        }
    }
    return 0;
}
