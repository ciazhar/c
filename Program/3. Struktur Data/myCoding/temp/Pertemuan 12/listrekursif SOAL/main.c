#include "listrekursif.h"

int main()
{
    List L=Nil;


    L = Konso(L,2);
    L = Konso(L,8);
    L = Konso(L,10);
    L = Konso(L,11);
    L = Konso(L,14);
    L = Konso(L,15);
    L = Konso(L,15);
    L = Konso(L,20);
    L = Konso(L,21);
    L = Konso(L,80);

    printf("List L: ");PrintList(L);


    printf("\nJumlah Genap\t\t= %d\n",CountGenap(L));


    printf("\nJumlah Kelipatan X\t= %d",CountKelipatanX(L,4));

    printf("\nFind First Genap\t\= %d",FindFirstGenap(L));


    printf("\nMake All Ganjil\t\t= ");
    PrintList(MakeAllGanjil(L));
    puts("");



    return 0;
}
