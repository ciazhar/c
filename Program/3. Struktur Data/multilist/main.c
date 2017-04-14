#include "header.h"

int main()
{
    List L;
    CreateTeam(&L);
    Cetak(L);

    TambahStriker(&L,"cantik");
    TambahStriker(&L,"sekali");
    TambahStriker(&L,"kurnia");
    TambahStriker(&L,"meiga");
    TambahMidfield(&L,"buka ");
    TambahMidfield(&L,"lapak");
    TambahDefender(&L,"sakit");
    TambahDefender(&L,"jiwa");
    Cetak(L);

    HapusStriker(&L);
    HapusMidfield(&L);
    HapusDefender(&L);
    Cetak(L);

    TambahMidfield(&L,"lapak");
    TambahDefender(&L,"jiwa");
    Cetak(L);

    TambahBelakangPosition(&L,"mantab");
    CetakPosition(L);
    HapusPosition(&L,"Midfield");
    printf("\n");
    CetakPosition(L);
}
