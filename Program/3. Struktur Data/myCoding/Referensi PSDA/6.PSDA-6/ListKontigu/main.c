#include "kontigu.h"

int main()
{
    List L, L1, L2, L3;
    int i, X, N, C;

    printf("\n==========================================================\n");
    printf("\tLIST BERKAIT LINIER DENGAN TABEL KONTIGU\n");
    printf("==========================================================\n\n\n");

    printf("Apakah List L kosong? %d\n", ListEmpty(L));
    printf("\n------------------------------------------\n");
    printf("\nPenambahan Elemen List di Akhir List\n\n");
    CreateList(&L);
    printf("Banyak elemen yang akan ditambahkan : ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d List: ", i);scanf("%d",&X);
        InsVLast(&L,X);
    }
    printf("List L: ");PrintInfo(L);

    printf("\n------------------------------------------\n");
    printf("\nHapus Satu Elemen di Awal List\n\n");
    DelVFirst(&L,&X);
    printf("\nList L: ");PrintInfo(L);

    printf("\n------------------------------------------\n");
    printf("\nPenambahan Elemen List di Awal List\n");
    printf("Banyak elemen yang akan ditambahkan : ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d List: ", i);scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("List L: ");PrintInfo(L);

    printf("\n------------------------------------------\n");
    printf("\nHapus Satu Elemen di Akhir List\n\n");
    DelVLast(&L,&X);
    printf("\nList L: ");PrintInfo(L);

    printf("\n------------------------------------------\n");
    printf("\nPencarian Elemen List\n\n");
    printf("Masukkan elemen yang ingin dicari : ");scanf("%d",&C);
    printf("\nCari elemen %d pada List L : Elemen ditemukan di alamat %d\n",C, Search(L,C));

    printf("\n------------------------------------------\n");
    printf("\nNilai Max, Min, dan Rata-Rata\n\n");
    printf("Jumlah elemen List L\t\t: %d\n", NbElmt(L));
    printf("Rata-rata elemen List L\t\t: %0.2f\n", Average(L));
    printf("Nilai maksimum elemen List L\t: %d\n", Max(L));
    printf("Nilai minimum elemen List L\t: %d\n", Min(L));
    printf("Address maksimum\t\t: %d\n", AdrMax(L));
    printf("Address minimum\t\t\t: %d\n", AdrMin(L));

    printf("\n------------------------------------------");
    printf("\nProses Terhadap List\n\n");
    InversList(&L);
    printf("Invers List L: ");PrintInfo(L);

    CreateList(&L1);
    CopyList(&L,&L1);
    printf("\n\nCopy List L ke List L1: \n");
    printf("\nList L1: ");PrintInfo(L1);

    CreateList(&L2);
    CreateList(&L3);
    Konkat(L,L1,&L2);
    printf("\n\nKonkat List L dan List L1 : "); PrintInfo(L2);

    printf("\n\n------------------------------------------\n");
    printf("\nHapus Semua Elemen List\n\n");
    DelAll(&L);
    printf("List L : "); PrintInfo(L);
    printf("\n------------------------------------------\n");
    return 0;
}
