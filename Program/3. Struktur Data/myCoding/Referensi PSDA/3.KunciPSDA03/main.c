#include "listlinier.h"
int main()
{
    List L;
    createList(&L);


    InsVFirst(&L,10);
    InsVFirst(&L,55);
    InsVFirst(&L,71);
    InsVFirst(&L,3);
    InsVFirst(&L,12);

    ShowData(L);

    InsVFirstGanjil(&L,2);
    InsVFirstGanjil(&L,7);
    ShowData(L);


    return 0;
}
