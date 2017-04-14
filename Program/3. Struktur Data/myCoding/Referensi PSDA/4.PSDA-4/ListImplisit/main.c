#include "ListImplisit.h"

int main()
{
    List L, Linvers, Lcopy, Lcopy1, Lkonkat, Lkonkat1, L1, L2;
    infotype X;
    int i, a;
    address P;

    CreateList(&L);
    printf("Apakah List L kosong? %d\n", ListEmpty(L));
    printf("\n\n*** Penambahan Elemen List ***\n\n");
    printf("Berapa banyak elemen yang ingin dimasukkan = ");scanf("%d",&a);
    for(i=1;i<=a;i++) {
        printf("Masukkan elemen %d List: ", i);scanf("%d",&X);
        P = Alokasi(X);
        InsertFirst(&L,P);
    }
    printf("\nList L: ");Printinfo(L);
    printf("\n\n*** Penghapusan Elemen List ***\n\n");
    for(i=1;i<=2;i++)
    {
        if(ListEmpty(L)==true){}
        else
        {
            DelFirst(&L,&P);
            printf("Elemen %d pada address %p dihapus\n", info(P),P);

        }
    }
    printf("\n");
    printf("List L setelah penghapusan: ");Printinfo(L);

    printf("\n\n******Prekondisi untuk Max/Min/Rata-rata******\n\n\n");
    printf("Jumlah elemen List: %d\n", NbElmt(L));
    printf("Nilai maksimum List: %d\n", Max(L));
    printf("Address nilai maksimum list: %p\n", AdrMax(L));
    printf("Nilai minimum List: %d\n", Min(L));
    printf("Address minimum List: %p\n", AdrMin(L));
    printf("Rata-rata elemen List: %0.2f\n", Average(L));

    printf("\n\n***********PROSES TERHADAP LIST***************\n\n\n");
    printf("List L: ");Printinfo(L);
    printf("\n");
    InversList(&L);
    printf("Hasil invers list L: ");Printinfo(L);

    printf("Invers list L: ");
    CreateList(&Linvers);
    Linvers = FInversList(L);
    Printinfo(Linvers);

    printf("Copy list L ke list Lcopy: ");
    CreateList(&Lcopy);
    Lcopy = FCopyList(L);
    Printinfo(Lcopy);

    printf("Copy list L ke list Lcopy1: ");
    CreateList(&Lcopy1);
    CpAlokList(L,&Lcopy1);
    Printinfo(Lcopy1);

    printf("Konkat list Lcopy dan list Lcopy1: ");
    CreateList(&Lkonkat);
    Konkat(Lcopy,Lcopy1,&Lkonkat);
    Printinfo(Lkonkat);

    printf("Konkat list Lcopy dan list Lcopy1: ");
    CreateList(&Lkonkat1);
    Konkat1(&Lcopy,&Lcopy1,&Lkonkat1);
    Printinfo(Lkonkat1);

    printf("Pecah list Lkonkat: \n");
    CreateList(&L1);
    CreateList(&L2);
    PecahList(&L1,&L2,Lkonkat);
    printf("List L1: ");Printinfo(L1);
    printf("List L2: ");Printinfo(L2);

    return 0;
}
