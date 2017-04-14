#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    Queue Q;
    int X;

    CreateEmpty(&Q, 10);

    AddGanjil(&Q,5);
    AddGanjil(&Q,2);
    AddGanjil(&Q,3);
    AddGanjil(&Q,4);
    AddGanjil(&Q,5);
    printf("\tSOAL PEMAHAMAN\n\n");
    /*Soal Pemahaman*/
    printf("1. AddGanjil Queue\n\n");
    PrintQueue(Q);
    printf("\n\n2. MaxHeadTail : %d", MaxHeadTail(Q));
    printf("\n\n3. CariN : %d", CariN(Q,1));
    return 0;
}
