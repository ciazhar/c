#include "list.h"

int main()
{


    List L; // Deklarasikan Variabel bertype LIST dengan nama L

    createList(&L); // setelah dideklarasikan , buat List kosong dengan prosedur ini.

    puts("\t\tPRAKTIKUM PERTEMUAN 8 , RABU 10.20 , LIST SIRKULER");
    puts("\t\t--------- --------- - - ---- ----- - ---- --------\n");

    printf("Apakah List masih kosong? = %s\n",IsEmpty(L)?"TRUE":"FALSE");

    // proses pengisian elemen dengan variasi InsertFirst dan insertLast.
    InsVFirst(&L,10);
    InsVLast(&L,5);
    InsVLast(&L,4);
    InsVFirst(&L,18);
    InsVLast(&L,3);
    InsVFirst(&L,12);

    //untuk menampilkan data.
    ShowData(L);


    //****** WORKSPACE LATIHAN *******//
    address P;
    //P = FIRST(L);
    //NEXT(P) = NEXT(NEXT(P));
    //ShowData(L);

    //P = NEXT(P);
    //NEXT(P) = NEXT(NEXT(P));
    //ShowData(L);

    P = GetAddres(L,18);
    printf("info P = %d\n",INFO(P));

    NEXT(P) = NEXT(NEXT(P));
    ShowData(L);

    //****** WORKSPACE LATIHAN *******//

    //=====================SOAL PEMAHAMAN PSDA 8==================================
    // 5 -> 10 -> 7 -> 11 -> 12 -> 13 -> 1 -> 14 -> 6 -> 12 -> 9 -> 4
    //============================================================================
    //1. Deklarasikan dulu Listnya (nama terserah)
    //2. Buat List Kosong.
    //3. Isikan elemen dengan mengguankan InsertLast .
    //4. Isi elemennya seperti di gambar.
    //5. Cetak elemen tersebut.
    //6. Ubah Bentuk list tersebut menjadi seperti berikut
    //============================================================================
    // 5 -> 10 -> 11 -> 12 -> 13 -> 1 -> 12 -> 9 -> 4
    //============================================================================
    //7. Tampilkan kembali List tersebut.

    //************* AREA PENGERJAAN SOAL PEMAHAMAN ***************

    List X;
    createList(&X);
    printf("\nApakah List masih kosong? = %s\n",IsEmpty(X)?"TRUE":"FALSE");

    InsVLast(&X,5);
    InsVLast(&X,10);
    InsVLast(&X,7);
    InsVLast(&X,11);
    InsVLast(&X,12);
    InsVLast(&X,13);
    InsVLast(&X,1);
    InsVLast(&X,14);
    InsVLast(&X,6);
    InsVLast(&X,12);
    InsVLast(&X,9);
    InsVLast(&X,4);

    ShowData(X);

    address A;

    A = GetAddres(X,10);
    NEXT(A) = NEXT(NEXT(A));

    A = GetAddres(X,1);
    NEXT(A) = NEXT(NEXT(NEXT(A)));
    ShowData(X);

    //************* AREA PENGERJAAN SOAL PEMAHAMAN ***************

    //============ SOAL TAMBAHAN (BONUS) ==============
    // Jelaskan Perbedaan antaraa Fungsi dan Prosedur.
    puts("Soal Bonus");
    printf("\nFungsi potongan program yang bertype data non void (int, string, char, dll) yang mengembalikan suatu nilai\n");
    printf("\nProsedur adalah tipe data bentukan yang dapat mengubah nilai dari program\n");
    // Gunakan printf untuk menjawabnya
    // > nilai poin + 10 jika jawaban jelas
    // > jika jawaban kurang jelas maka parameter nilai diserahkan ke asisten.

    return 0;
}
