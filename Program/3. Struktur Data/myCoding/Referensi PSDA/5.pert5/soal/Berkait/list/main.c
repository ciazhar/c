#include "list.h"



int main()
{

	List L, L1;
	address P;

	infotype X,Y;
    /* Algoritma */

	InitTab();
    CreateList(&L);

    InsVFirst(&L, 2);
    InsVFirst(&L, 4);
    InsVFirst(&L, 8);
    InsVFirst(&L, 5);
    InsVFirst(&L, 3);
    InsVFirst(&L, 2);

    PrintInfo(L);
    printf("\nNilai Ganjil Pertama: %d",NilaiGanjilPertama(L));
    SwapFirstSecond(&L);
    printf("\n\nSetelah di swap");
    PrintInfo(L);

    return 0;
}
