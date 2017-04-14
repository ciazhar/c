#include "header.h"

int main()
{
    Queue Q;
    infotype X;
    CreateEmpty(&Q);
    AddQueue(&Q,2);
    AddQueue(&Q,4);
    AddQueue(&Q,6);
    AddQueue(&Q,8);
    AddQueue(&Q,10);
    PrintQueue(Q);
    printf("\n\nNbElmt : %d", NbElmt(Q));
    ///printf("\nNo. 1 Jumlah : %d", Jumlah(Q));
    printf("\nNo. 2 HasilKrgTmbh : %d", HasilKrgTmbh(Q));
    return 0;
}
