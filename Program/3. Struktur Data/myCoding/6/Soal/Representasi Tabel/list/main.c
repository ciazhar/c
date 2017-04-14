#include "list.h"



int main()
{

	List L, L1;
	address P;

	infotype X,Y;
    /* Algoritma */

	InitTab();
    CreateList(&L);

    InsVFirst(&L, 10);
    InsVFirst(&L, 5);
    InsVFirst(&L, 4);
    InsVFirst(&L, 3);
    InsVFirst(&L, 2);
    InsVFirst(&L, 50);

    PrintInfo(L);
    printf("\n\nSetelah di Swap\n");
    SwapFirstLast(&L);
    PrintInfo(L);

    return 0;
}
