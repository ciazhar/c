#include "header.h"

/**
* Muhammad Hafidz
* A11.2015.09000
* List Sirkuler
**/

int main()
{
    List L;
    int X;

    ///
    CreateEmpty(&L);
    printf("List is %s\n\n",ListEmpty(L)?"empty":"not empty");
    ///
    printf("InsertVFirst : \n");
    InsVFirst(&L,10);
    PrintInfo(L);
    InsVFirst(&L,9);
    PrintInfo(L);
    InsVFirst(&L,3);
    PrintInfo(L);
    printf("InsertVLast: \n");
    InsVLast(&L,3);
    PrintInfo(L);
    InsVLast(&L,4);
    PrintInfo(L);
    ///
    DelVFirst(&L,&X);
    printf("\nDelFirst : %d\n",X);
    PrintInfo(L);
    DelVLast(&L,&X);
    printf("\nDelLast : %d\n",X);
    PrintInfo(L);
    ///
    printf("search 9 : %p\n",Search(L,9));
    printf("fsearch 9 : %s\n",FSearch(L,Search(L,9))?"ada":"tidak");

    return 0;
}
