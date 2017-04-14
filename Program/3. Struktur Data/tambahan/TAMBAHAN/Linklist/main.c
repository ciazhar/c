/// List Stack

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

/*
clue PSDA 10 fist in last out
stack
*/
struct node
{
    int nilai;
    struct node* next;  // ?????????????
};

void insertFirst(struct node* *L, int X)
{
    struct node* nodeBaru = malloc(sizeof(struct node));    // ubah pointer jadi node dengan nama nodeBaru
    if ( nodeBaru != NULL )     // jika memori belum penuh ??????
    {
        nodeBaru -> nilai = X;  // nilai nodeBaru diisi X
        nodeBaru -> next = *L;  // next nodeBaru menuju *L  (index node sebelumnya)
        *L = nodeBaru ;         // L diganti ke node baru
    }
    else
    {
        printf("memori penuh !!!\n");
    }
}

void deleteFirst(struct node* *L, int *X)
{
    /*  delete dengan menghapus node yg dihapus
    if (*L != NULL ){           // jika *L tidak kosong
        *X = (*L)->nilai;
        *L = (*L)->next;
    } else{
        printf("List Kosong\n");
    }
    */
    struct node* Temp;
    if (*L != NULL ){           // jika *L tidak kosong
        *X = (*L)->nilai;
        Temp = *L ;
        printf("nilai Temp sebelum free(temp) : %d\n",Temp->nilai);
        *L = (*L)->next;
        free(Temp);
        printf("nilai Temp setelah free(temp) : %d\n",Temp->nilai);
        printf("%d di hapus ", *X);
    } else{
        printf("List Kosong\n");
    }
}

void printList (struct node* L)
{
    while ( L != NULL )
    {
        printf("%d -> ", L ->nilai);
        L = L -> next ;
    }
    printf("NULL\n");
}

void printListRec (struct node* L)
{
    if ( L == NULL )
    {
        printf("NULL");
    } else
    {
        printf("%d -> ", L ->nilai);
        printListRec( L -> next ) ;
    }
}

int main ()
{
    struct node* L = NULL; // pointer ke first

    int menu = -1;
    int angka;
    int X;
    while (menu!=0){
        system("cls");
        printf("print dgn tanpafungsi rekursif\n");
        printList(L);
        printf("\nprint dgn fungsi rekursif\n");
        printListRec(L);

        printf("\n\n");
        printf("1. insert first\n");
        printf("2. Delete first\n");
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
                deleteFirst(&L,&X);
//                getch();
                break;

        }   // End of Switch
    }

    return 0;
}
