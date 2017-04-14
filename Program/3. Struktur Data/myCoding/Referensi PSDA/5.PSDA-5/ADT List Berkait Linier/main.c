#include "list.h"

int main()
{
    List L,LI,L2,L3,L4,LA,L5;
    address P;
    infotype X;
    int i,N;

    printf("\n================================================================\n");
    printf("\t\tList Berkait Linier Tabel Berkait\n");
    printf("================================================================\n\n");

    InitTab();
    CreateList(&L);

    printf("\n\n---------------------------------------------\n");
    printf("Insert Elemen Di Awal List\n");
    printf("Banyaknya elemen yang ditambahkan : ");scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("- Input elemen List : ");scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("List L : ");PrintInfo(L);
    printf("\nBanyaknya elemen : %d",NbElmt(L));
    printf("\nSisa List yang Tersedia : %d",IndexMax-NbElmt(L));

    printf("\n\n---------------------------------------------\n");
    printf("Delete Elemen Di Awal List\n");
    printf("Banyaknya elemen yang dihapus : ");scanf("%d",&N);
    printf("Elemen yang dihapus : ");
    for(i=1; i<=N; i++)
    {
        DelVFirst(&L,&X);
        printf("|%d| ",X);
    }
    printf("\nList L : ");PrintInfo(L);
    printf("\nBanyaknya elemen    : %d",NbElmt(L));
    printf("\nSisa List yang Tersedia : %d",IndexMax-NbElmt(L));

    printf("\n\n---------------------------------------------\n");
    printf("Insert Elemen Di Akhir List\n");
    printf("Banyaknya elemen yang ditambahkan : ");scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        printf("- Input elemen List : ");scanf("%d",&X);
        InsVLast(&L,X);
    }
    printf("List L : ");PrintInfo(L);
    printf("\nBanyaknya elemen : %d",NbElmt(L));
    printf("\nSisa List yang Tersedia : %d",IndexMax-NbElmt(L));

    printf("\n\n---------------------------------------------\n");
    printf("Delete Elemen Di Akhir List\n");
    printf("Banyaknya elemen yang dihapus : ");scanf("%d",&N);
    printf("Elemen yang dihapus : ");
    for(i=1; i<=N; i++)
    {
        DelVLast(&L,&X);
        printf("|%d| ",X);
    }
    printf("\nList L : ");PrintInfo(L);
    printf("\nBanyaknya elemen    : %d",NbElmt(L));
    printf("\nSisa List yang Tersedia : %d",IndexMax-NbElmt(L));

    printf("\n\n---------------------------------------------\n");
    printf("Pencarian Elemen List\n");
    printf("Masukkan elemen yang ingin dicari : ");scanf("%d",&X);
    printf("Hasil pencarian : \n");
    P=Search(L,X);
    if(P!=Nil)
    {
        printf("Elemen ditemukan pada alamat %p",P);
    }
    else
    {
        printf("Elemen tidak ditemukan");
    }

    printf("\n\n---------------------------------------------\n");
    printf("Nilai Min, Max, dan Rata-rata\n");
    printf("List L : ");PrintInfo(L);
    printf("\n- Nilai Maksimum : %d, pada alamat %d",Maxs(L),AdrMax(L));
    printf("\n- Nilai Minimum  : %d, pada alamat %d",Mins(L),AdrMin(L));
    printf("\n- Rata-rata      : %0.2f",Average(L));

    printf("\n\n---------------------------------------------\n");
    printf("Proses Terhadap List\n");
    printf("Invers List");InversList(&L);
    printf("\n- List L  : ");PrintInfo(L);

    LI=FInversList(L);
    printf("\n\nLI adalah FInvers dari L");
    printf("\n- List LI : ");PrintInfo(LI);

    CreateList(&L2);
    CopyList(&LI,&L2);
    printf("\n\nCopy List LI ke List L2");
    printf("\n- List L2 : ");PrintInfo(L2);

    L3=FCopyList(L);
    printf("\n\nCopy List L ke List L3");
    printf("\n- List L3 : ");PrintInfo(L3);

    CreateList(&L4);
    CpAlokList(L3,&L4);
    printf("\n\nCopy List L3 ke List L4");
    printf("\n- List L4 : ");PrintInfo(L4);

    CreateList(&LA);
    Konkat(L,LI,&LA);
    printf("\n\nKonkat List L dan LI menjadi LA");
    printf("\n- List LA : ");PrintInfo(LA);

    CreateList(&L5);
    Konkat1(&L3,&L4,&L5);
    printf("\n\nKonkat1 List L3 dan L4 menjadi L5");
    printf("\n- List L5 : ");PrintInfo(L5);
    printf("\n- List L4  : ");PrintInfo(L3);
    printf("\n- List L3  : ");PrintInfo(L4);

    PecahList(&L3,&L4,L5);
    printf("\n\nPecah List L5 ke dalam L3 dan L4");
    printf("\n- List L5 : ");PrintInfo(L5);
    printf("\n- List L3  : ");PrintInfo(L3);
    printf("\n- List L4  : ");PrintInfo(L4);

    printf("\n\n---------------------------------------------\n");
    printf("Delete Semua Elemen List");
    printf("\n\n---------------------------------------------\n");
    printf("Delete semua elemen List L5\n\n");
    DelAll(&L5);
    printf("\n- List L5 sekarang : ");PrintInfo(L5);
    printf("\n\n");

    return 0;
}
