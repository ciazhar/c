#include "doublepointer.h"

int main()
{
    List L;


    CreateList(&L);

    InsVFirst(&L,1);
    InsVFirst(&L,4);
    InsVFirst(&L,8);
    InsVFirst(&L,7);
    InsVFirst(&L,1);

    PrintInfo(L);
//    printf("\nNilaiTengah : %d", NilaiTengah(L));
//    printf("\nCek Tengah : %d", CekTengah(L));
//    printf("\njumlah : %d",jumlah(L));
//    printf("\ncek apakah sama : %d",ceksama(L));
    return 0;
}
