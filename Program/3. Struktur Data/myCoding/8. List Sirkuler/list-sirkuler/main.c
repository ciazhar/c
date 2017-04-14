#include "header.h"

int main()
{
    List L;
    int X;

    CreateEmpty(&L);
    printf("%s\n",ListEmpty(L)?"empty":"tidak");
    InsVFirst(&L,10);
    InsVFirst(&L,9);
    InsVFirst(&L,1);
    PrintInfo(L);
    //DelFirst(&L,&X);
    printf("\nDel : %d\n",X);
    PrintInfo(L);
    return 0;
}
