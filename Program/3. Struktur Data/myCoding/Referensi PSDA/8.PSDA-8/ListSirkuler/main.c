#include "listsirkuler.h"

int main()
{
    List L;
    int X, i, N, z, p;
    char a;

    CreateList(&L);
    printf("Apakah List L kosong? %d\n", ListEmpty(L));

    printf("\nInsertLast\n");
    printf("Berapa banyak elemen yang diinginkan? ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d list: ", i);scanf("%d",&X);
        //InsVFirst(&L,X);
        InsVLast(&L,X);
    }
    system("cls");

    do{
    printf("List L: ");PrintInfo(L);
    printf("\n1. DelVFirst\n");
    printf("2. DelVLast\n");
    printf("Input : ");
    scanf("%d",&p);

    while(p > 2 || p <= 0){
        printf("Anda salah input, input '1' atau '2'\n");
        scanf("%d",&p);
    }

    switch(p)
    {   case 1:{
            system("cls");
            printf("List L: ");PrintInfo(L);
            DelVFirst(&L,&X);
            printf("\nList L setelah DelVFirst\n");
            printf("List L: ");PrintInfo(L);
            break;
        }case 2:{
            system("cls");
            printf("List L: ");PrintInfo(L);
            DelVLast(&L,&X);
            printf("\nList L setelah DelVFirst\n");
            printf("List L: ");PrintInfo(L);
            break;
        }
    }
    printf("Masih ingin menghapus element ? [y/Y] ");scanf("%s",&a);
    system("cls");
    }while(a == 'y' || a == 'Y');

    do{
        system("cls");
        printf("List L: ");PrintInfo(L);
        printf("\nSearching\n");
        printf("Masukkan nilai yang ingin di cari : "); scanf("%d",&z);
        printf("\nNilai %d ada di address: %p\n", z, Search(L,z));
        printf("\nMasih ingin mencari ? [y/Y] ");scanf("%s",&a);
    }while(a == 'y' || a == 'Y');

    return 0;
}
