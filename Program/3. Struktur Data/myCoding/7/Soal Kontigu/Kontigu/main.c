#include "header.h"
int main()
{
    List L;
    CreateList(&L);
    printf("===List Kontigu===\n");
    PrintInfo(L);

    InsVFirst(&L,5);
    InsVFirst(&L,4);
    InsVFirst(&L,3);
    InsVFirst(&L,2);
    InsVFirst(&L,1);
    PrintInfo(L);
    printf("\n\n\nReverse List\n\n");
    ReverseList(L);
    return 0;
}
