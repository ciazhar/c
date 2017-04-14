#include "list.h"

int main()
{
    List L; //deklarasi variabel List

    createList(&L);

    IsEmpty(L);

    TambahDepan(&L,5);
    TambahDepan(&L,7);
    TambahDepan(&L,3);
    TambahDepan(&L,10);
    TambahDepan(&L,9);

    PrintInfo(L);

    return 0;
}
