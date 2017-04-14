#include "Queue.h"

int main()
{
    Queue Q_Buah;
    CreateEmpty(&Q_Buah);

    puts("\t\tSOAL PEMAHAMAN PSDA 11 QUEUE , ANTRIAN BUAH");
    puts("\t\t---- --------- ---- -- ----- - ------- ----\n\n");

    puts("Antrian Buah");
    puts("------- ----\n");
    Add(&Q_Buah,"Apel");
    Add(&Q_Buah,"Jeruk");
    Add(&Q_Buah,"Mangga");
    Add(&Q_Buah,"Durian");
    Add(&Q_Buah,"Melon");
    Add(&Q_Buah,"Kesemek");
    Add(&Q_Buah,"Salak");
    Add(&Q_Buah,"Jambu");

    PrintInfo(Q_Buah);

     //**************WORKSPACE SOAL PEMAHAMAN ***************//
     // Algoritma
     // 1.> Inisialisasikan address P pada posisi HEAD
     // 2.> Lakukan pencarian , Selama P tidak sama dengan TAIL , maka lakukan . . .
     // 3.> cek kondisi , apakah Isi buah dari P sama dengan buah yang dicari ??
     // 4.> jika sama , maka cetak "Alamat" dan "Isi Buahnya" kemudian hentikan pencarian
     // 5.> jika tidak sama maka maju terus 1 langkah .
     // 6.> The End.
     // Clue
     // a.> Gunakan perulagan while.
     // b.> jika ingin pencarian dihentikan gunakan break.

    puts("\n\n\t\tJAWABAN SOAL PEMAHAMAN");
    puts("\t\t------- ---- ---------\n\n");

    address P;
    P = HEAD(Q_Buah);

    while(P != TAIL(Q_Buah)){
        if(strcmp(ISI_BUAH(P),"Kesemek") == 0){
            printf("Alamat\t\t: %d\n",P);
            printf("Isi Buah\t: %s\n",ISI_BUAH(P));
            break;
        }else{
            P = NEXT(P);
        }
    }

    return 0;
}
