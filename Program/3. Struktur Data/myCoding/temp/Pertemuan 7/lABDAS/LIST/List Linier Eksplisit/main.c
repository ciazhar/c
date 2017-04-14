#include "list.h"


int main()
{
     puts("\t--BAGIAN . 3 , PROGRAM LIST LINIER DENGAN REPRESENTASI ADDRESS--");
    puts("\t-----------------------------------------------------------\n\n");
    List L;


    createList(&L);

    // Buatlah fungsi untuk menemukan elemen tengah dari LIST , kasus sama seperti QUEUE
    // outputnya adalah elemen yang tengah.
    //
    // CONTOH
    // [3] - [4] - [5] - [10] - [12]
    // outputnya adalah 5.



    InsVLast(&L,10);
    InsVLast(&L,55);
    InsVLast(&L,71);
    InsVLast(&L,3);
    InsVLast(&L,12);

    ShowData(L);



    return 0;
}
