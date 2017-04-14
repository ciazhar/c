#include "priorqueue.h"

int main()
{
    Queue Q;
    int X;

    CreateEmpty(&Q);
    printf("Apakah Queue Q kosong? %d\n", IsEmpty(Q));
    Add(&Q,4,3);Add(&Q,5,1);Add(&Q,6,2);Add(&Q,1,5);Add(&Q,2,4);
    printf("Isi Queue Q: ");PrintQueue(Q);
    printf("Jumlah Elemen Queue Q: %d\n", NbElmt(Q));
    Del(&Q,&X,1);
    printf("Isi Queue Q: ");PrintQueue(Q);

    return 0;
}
