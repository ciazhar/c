#include "List.h"

int main()
{
    List L;
    address P;
    infotype X;
    int i,N;

    printf("============================================================================\n");
    printf("=================== LINKED LIST DOUBLE POINTER ===================\n");
    printf("============================================================================\n\n");

    CreateList(&L);

    printf("\n======================== Insert Elemen Di Awal List ========================\n");
    printf("* Banyaknya elemen yang ditambahkan : ");scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("  - Input elemen List : ");scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("* List L : ");PrintInfo(L);

    printf("\n\n======================== Delete Elemen Di Awal List ========================\n");
    printf("* Banyaknya elemen yang dihapus : ");scanf("%d",&N);
    printf("* Elemen yang dihapus : ");
    for(i=1; i<=N; i++)
    {
        DelVFirst(&L,&X);
        printf("|%d| ",X);
    }
    printf("\n* List L : ");PrintInfo(L);

    printf("\n\n======================= Insert Elemen Di Akhir List ========================\n");
    printf("* Banyaknya elemen yang ditambahkan : ");scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("  - Input elemen List : ");scanf("%d",&X);
        InsVLast(&L,X);
    }
    printf("* List L : ");PrintInfo(L);

    printf("\n\n======================= Delete Elemen Di Akhir List ========================\n");
    printf("* Banyaknya elemen yang dihapus : ");scanf("%d",&N);
    printf("* Elemen yang dihapus : ");
    for(i=1; i<=N; i++)
    {
        DelVLast(&L,&X);
        printf("|%d| ",X);
    }
    printf("\n* List L : ");PrintInfo(L);

    printf("\n\n=========================== Search Elemen List =============================\n");
    printf("* Masukkan elemen yang ingin dicari : ");scanf("%d",&X);
    printf("* Hasil pencarian : ");
    P=Search(L,X);
    if(P!=Nil)
    {
        printf("Elemen ditemukan pada alamat %p",P);
    }
    else
    {
        printf("Elemen tidak ditemukan");
    }

    printf("\n\n============================================================================\n");

    return 0;
}
