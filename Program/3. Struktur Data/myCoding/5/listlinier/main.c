#include "pustaka.h"

int main()
{
    List L;
    createList(&L);

    insVFirst(&L,5);
    insVFirst(&L,4);
    insVFirst(&L,3);
    insVFirst(&L,2);
    insVFirst(&L,1);
    printInfo(L);
}
