#include "listsirkuler.h"

int main()
{
    List L;

    CreateList(&L);

    InsVFirst(&L,6);
    InsVFirst(&L,5);
    InsVFirst(&L,4);
    InsVFirst(&L,3);
    InsVFirst(&L,2);
    InsVFirst(&L,1);
    PrintInfo(L);

    //printf("\nDeret : %d",deret(L));
   // printf("\nDeretN: %d\n",deretN(L));
   // InsertFirstGenap(&L,2);
    //PrintInfo(L);
   // printf("\n");
    return 0;
}
