#include "listeks.h"

int main()
{
    List L;
    //address P;

    //int i, X;

    /*===CREATE LIST===*/

    CreateList(&L);
    InsVFirst(&L,5);
    InsVFirst(&L,4);
    InsVFirst(&L,3);
    InsVFirst(&L,2);
    InsVFirst(&L,1);
    PrintInfo(L);
    /**Soal Pemahaman**/
    printf("\n1. JumGanjil : %d\n", JumGanjil(L));
    printf("2. GantiLast : "); GantiLast(&L,10); PrintInfo(L);
    printf("3. NilaiTengahGenap : %d", NilaiTengahGenap(L));
    return 0;
}
