#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    List L;
    CreateEmpty(&L);
    infotype X;
    InsertFirst(&L,6);
    InsertFirst(&L,4);
    InsertFirst(&L,10);
    //InsertFirst(&L,10);
    InsertFirst(&L,2);
    InsertFirst(&L,7);
    PrintList(L);
    printf("\n\n");
    ///printf("A. Angka sebelum elemen terakhir : %d \n", PrintBeforeLast(L));
    ///printf("B. Apakah ListGenap ? %d \n", ListGenap(L));
    printf("C. "); kalitengah(&L,100);
    PrintList(L);
    return 0;
}
