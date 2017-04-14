#include "header.h"

int main()
{
    List L;
    CreateEmpty(&L);
    InsVFirst(&L,5);
    InsVFirst(&L,4);
    InsVFirst(&L,3);
    InsVFirst(&L,2);
    InsVFirst(&L,1);

    PrintInfo(L);
}
