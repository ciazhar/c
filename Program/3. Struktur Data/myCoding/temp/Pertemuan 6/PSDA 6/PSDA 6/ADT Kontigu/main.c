#include "header.h"



int main()
{
    puts("================== PRAKTIKUM STRUKTUR DATA PSDA 6 , LIST LINIER KONTIGU ==================\n");

    List L; // Deklarasi awal List

    CreateList(&L); // membuat List menjadi kosong.

    printf("Apakah List kosong ? = %d\n",ListEmpty(L));

    // ini adalah sampel input datanya.
    InsVLast(&L,3);
    InsVLast(&L,87);
    InsVLast(&L,22);
    InsVLast(&L,45);
    InsVLast(&L,16);
    InsVLast(&L,15);
    InsVLast(&L,5);
    InsVLast(&L,44);
    InsVLast(&L,28);
    InsVLast(&L,30);

    puts("=============================== BATAS ====================================\n");
    // AREA PENGERJAAN SOAL PERCOBAAN 1 //
    address P;

    P = Last(L);

    if(Info(P)%2==0)
    {
        printf("jumlah penumpang genap\n");
    }
    else
    {
        printf("jumlah penumpang ganjil\n");
    }

    // AREA PENGERJAAN SOAL PERCOBAAN 1 //
    puts("=============================== BATAS ====================================\n");
    // AREA PENGERJAAN SOAL PERCOBAAN 2 //
    P = First(L);
    int i=1;

    puts("Index\tInfo");
    while(P != Last(L) && i<=Last(L))
    {
        printf("%d.\t%d \n",i,Info(P));
        P = Next(P);
        i++;
    }
    printf("%d.\t%d ",i,Info(P));
    puts("");

    // AREA PENGERJAAN SOAL PERCOBAAN 2 //
    puts("=============================== BATAS ====================================\n");
    //************** UJI SOAL STUDI KASUS ***************//
    // Kerjakan di sini yaa ^^
    address A;
    A = First(L);
    while(A != Last(A))
    {
        if((Info(A)%2==0) && (Info(A)%7==0))
        {
            printf("Index ke - %d",A);
        }
        A = Next(A);
    }
    if((Info(A)%2==0) && (Info(A)%7==0))
    {
        printf("Index ke - %d",A);
    }
    puts("");

    return 0;
}
