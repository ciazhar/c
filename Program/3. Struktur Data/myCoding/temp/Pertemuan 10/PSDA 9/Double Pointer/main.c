#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main()
{
     List L; // Deklarasikan Variabel bertype LIST dengan nama L


    CreateList(&L); // setelah dideklarasikan , buat List kosong dengan prosedur ini.


    puts("\t\tPRAKTIKUM PERTEMUAN 9 , RABU 10.20 , LIST POINTER GANDA");
    puts("\t\t--------- --------- - - ---- ----- - ---- ------- -----\n");

    printf("Apakah List masih kosong? = %s\n",ListEmpty(L)?"TRUE":"FALSE");

    // proses pengisian elemen dengan variasi InsertFirst dan insertLast.
    InsVFirst(&L,10);
    InsVLast(&L,5);
    InsVLast(&L,4);
    InsVFirst(&L,18);
    InsVLast(&L,3);
    InsVFirst(&L,12);
    InsVLast(&L,11);

    PrintInfo(L);

     //****** WORKSPACE LATIHAN *******//
    address alamat;
    address alamat_baru;

    alamat_baru = Alokasi(99);

    alamat = GetAddress(L,5);
    // penyisipan elemen
    /*NEXT(alamat_baru) = NEXT(alamat);
    NEXT(alamat) = alamat_baru;
    PREV(NEXT(alamat_baru)) = alamat_baru;
    PREV(alamat_baru) = alamat;
    PrintInfo(L);*/

    /*alamat = FIRST(L);
    printf("INFO = %d\n",INFO(alamat));

    alamat = NEXT(NEXT(alamat));
    printf("INFO = %d\n",INFO(alamat));

    alamat = PREV(alamat);
    printf("INFO = %d\n",INFO(alamat));*/



     //****** WORKSPACE LATIHAN *******//

    //*****************SOAL PEMAHAMAN******************//
    //1. Deklarasikan type data List dengan nama MAP.
    //2. Buat list kosong
    //3. input elemen
    List MAP;
    CreateList(&MAP);
    puts("");
    printf("Apakah List masih kosong? = %s\n",ListEmpty(MAP)?"TRUE":"FALSE");
    InsVLast(&MAP,15);
    InsVLast(&MAP,10);
    InsVLast(&MAP,5);
    InsVLast(&MAP,6);
    InsVLast(&MAP,8);
    InsVLast(&MAP,11);
    InsVLast(&MAP,19);
    InsVLast(&MAP,20);
    InsVLast(&MAP,21);
    PrintInfo(MAP);


    //*****SOAL 1*****//
    //Posisikan pada elemen pertama , kemudian ikuti petunjuk untuk menemukan alamat yang dimaksud
    //pada langkah-langkah di bawah ini.
    //1> Maju 3 langkah
    //2> mundur 2 langkah
    //3> Maju 5 langkah
    //4> mundur 1 langkah
    //5> cetak INFO dari alamat yang ditemukan.
    //**********************POIN +10******************//
    //*****SOAL 2*****//
    //1> sisipkan elemen dengan nilai 99 setelah elemen yang ditemukan pada soal ke 1
    //2> Cetak elemen tersebut .
    //**********************POIN +75******************//


    //****SOAL 3 (BONUS) ******//
    //1> Hapus elemen yang ditemukan pada SOAL ke 1
    //2> Cetak kembali elemen tersebut.
    //**********************POIN +15******************//


    //****** WORKSPACE SOAL PEMAHAMAN *******//
    //Soal 1
    address x;

    x = FIRST(MAP);

    //1
    x = NEXT(NEXT(NEXT(x)));
    //2
    x = PREV(PREV(x));
    //3
    x = NEXT(NEXT(NEXT(NEXT(NEXT(x)))));
    //4
    x = PREV(x);
    puts("Soal 1");
    printf("INFO = %d\n",INFO(x));

    //Soal 2
    address z;
    z = Alokasi(99);

    NEXT(z) = NEXT(x);
    NEXT(x) = z;
    PREV(NEXT(z)) = z;
    PREV(z) = x;
    puts("Soal 2");
    PrintInfo(MAP);

    //Soal 3
    address c;
    address c1;

    c = PREV(x);
    c1 = NEXT(x);
    NEXT(c) = c1;
    PREV(c1) = c;
    free(x);
    //NEXT(x) = NEXT(NEXT(x));
    puts("Soal 3");
    PrintInfo(MAP);
    //****** WORKSPACE SOAL PEMAHAMAN *******//



    return 0;
}
