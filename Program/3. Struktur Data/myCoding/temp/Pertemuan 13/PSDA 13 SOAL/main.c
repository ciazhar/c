#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    BinTree P=NIL;



    // proses insert elemen.
    MakeTree(&P,40);
    MakeTree(&P,30);
    MakeTree(&P,45);

    MakeTree(&P,25);
    MakeTree(&P,43);
    MakeTree(&P,48);

    MakeTree(&P,26);
    MakeTree(&P,41);
    MakeTree(&P,44);


    puts("========CETAK TREE=========");
    printf("\nPre = ");PrintPreOrder(P);
    printf("\nPost = ");PrintPostOrder(P);
    printf("\nIn = ");PrintInOrder(P);

    // SOAL NO 1 , INSERT AFTER , Nilai 80
    // 1.> Insert elemen VALUE setelah NODE N di sebelah KIRI.


    // SOAL BONUS , nilai + 15
    // ================================
    // 1.> Modifikasilah soal nomor 1
    // 2.> Insert node di kanan dan di kiri jika slot kanan dan kiri kosong.
    // 3.> jika node kiri tidak kosong / sudah ada isinya , insert bagian KANAN saja.
    // 4.> Jika node kanan tidak kosong / sudah ada isinya , insert bagian KIRI saja.
    // 5.> jika keduanya tidak kosong , berikan notif "Tidak ada Slot Kosong".

//    addDaunKiri(&P,200);
//    puts("\n\n========CETAK TREE=========");
//    printf("\nPre = ");PrintPreOrder(P);

//    InserAfter(&P,100,48);
//    puts("\n\n========CETAK TREE=========");
//    printf("\nPre = ");PrintPreOrder(P);

    InsertKananKiri(&P,100,26);
    puts("\n\n========CETAK TREE=========");
    printf("\nPre = ");PrintPreOrder(P);
    return 0;
}
