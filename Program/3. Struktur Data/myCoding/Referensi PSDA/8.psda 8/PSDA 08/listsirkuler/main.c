#include "listsirkuler.h"

int main()
{
    List L;
    int X, i, N;

    CreateList(&L);
    printf("Apakah List L kosong? %d\n", ListEmpty(L));

    printf("\nInsertLast\n");
    printf("Berapa banyak elemen yang diinginkan? ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d list: ", i);scanf("%d",&X);
        //InsVFirst(&L,X);
        InsVLast(&L,X);
    }
    printf("List L: ");PrintInfo(L);

    DelVFirst(&L,&X);
    printf("\nList L setelah DelVFirst\n");
    printf("List L: ");PrintInfo(L);

    DelVLast(&L,&X);
    printf("\nList L setelah DelVLast\n");
    printf("List L: ");PrintInfo(L);

    printf("\nSearching\n");
    printf("Nilai 3 ada di address: %p\n", Search(L,3));

    return 0;
}

