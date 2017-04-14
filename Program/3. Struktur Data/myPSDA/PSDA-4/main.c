#include "pustaka.h"
/*
    Muhammad Hafidz
    A11.2015.09000
*/

int main ()
{

    ///deklarasi
    List L,L2,L3,L4,X;
    address P;

    printf("{ ***************** PEMBUATAN LIST KOSONG ***************** }\n");
    printf("Buat List\n");
    CreateList(&L);
    PrintInfo(L);
    printf("\n");

    printf("{ ***************** TEST LIST KOSONG ***************** }\n");
    printf("List empty ? %s \n",ListEmpty(L)?"Ya":"tidak kosong");
    printf("\n");

    printf("{ ***************** PENAMBAHAN ELEMEN BERDASAR NILAI *************** }\n");
    printf("InsVFirst\n");
    InsVFirst(&L,1);
    PrintInfo(L);
    InsVFirst(&L,6);
    PrintInfo(L);
    InsVFirst(&L,8);
    PrintInfo(L);
    printf("InsVLast\n");
    InsVLast(&L,5);
    PrintInfo(L);
    InsVLast(&L,2);
    PrintInfo(L);
    printf("Banyak Elemen pada List ~> %d\n",NbElmt(L));
    printf("\n");

    printf("{ ***************** PENCARIAN SEBUAH ELEMEN LIST ***************** }\n");
    printf("Search : Ada angka %d dengan address : %d\n",(Search(L,8))->info,Search(L,8));
    printf("FSearch : apakah angka 8 ? %s\n",FSearch(L,8)?"ada":"tidak");
    printf("SearchPrec : berapa angka sebelum angka 6 ? %d\n",(SearchPrec(L,6))->info);
    printf("\n");

    printf("{ ***************** PENGHAPUSAN ELEMEN BERDASAR NILAI **************** }\n");
    printf("Sebelum\n");
    PrintInfo(L);
    printf("DelVFirst\n");
    DelVFirst(&L,&X);
    PrintInfo(L);
    printf("DelVLast\n");
    DelVLast(&L,&X);
    PrintInfo(L);
    printf("\n");
    InsVLast(&L,9);

    printf("{ ***************** PROSES SEMUA ELEMEN LIST ***************** }\n");
    printf("PrintInfo\n");
    PrintInfo(L);
    printf("NbElmt : %d\n",NbElmt(L));
    printf("\n");

    printf("{ *** Prekondisi untuk Max/Min/rata-rata : List tidak kosong *** }\n");
    printf("Max : Nilai maksumum = %d dengan address = %d\n",MAX(L),AdrMax(L));
    printf("Min : Nilai minimum = %d dengan address = %d\n",MIN(L),AdrMin(L));
    printf("Average : Nilai Rata'' %.2f\n",AVERAGE(L));
    printf("\n");

    printf("{ ***************** PROSES TERHADAP LIST ***************** }\n");
    printf("Del All : \n");
    CreateList(&L2);
    printf("Sebelum\n");
    InsVFirst(&L,1);
    PrintInfo(L);
    printf("Sesudah\n");
    DelAll(&L2);
    PrintInfo(L2);
    printf("\n");
    printf("Invers List\n");
    printf("Sebelum\n");
    PrintInfo(L);
    printf("Sesudah\n");
    InversList(&L);
    PrintInfo(L);
    printf("FInvers List : \n");
    PrintInfo(FInversList(L));
    printf("Copy List L to L2\n");
    DelAll(&L);
    InsVFirst(&L,1);
    InsVFirst(&L,6);
    CopyList(&L,&L2);
    PrintInfo(L2);
    printf("FCopyList\n");
    PrintInfo(FCopyList(L));
    printf("CpAlokList\n");
    CreateList(&L3);
    CPAlokList(L2,&L3);
    PrintInfo(L3);
    printf("Konkat L dan L2 ke L4\n");
    CreateList(&L4);
    Konkat(&L,&L2,&L4);
    PrintInfo(L4);
    printf("PecahList\n");
    //PecahList(&L3,&L2,L);
    PrintInfo(L);






    PrintInfo(L);

    return 0;
}
