#include "header.h"

int main()
{
    List L;
    CreateEmpty(&L);
    Konso(&L,18);
    Konso(&L,9);
    Konso(&L,4);
    Konso(&L,3);
    Konso(&L,1);

    CetakList(L);

    printf("\n jumlah list %d",JumlahList(L));
    return 0;
}
