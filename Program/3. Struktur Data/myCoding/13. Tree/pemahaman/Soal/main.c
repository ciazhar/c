#include "header.h"

int main()
{
    Queue Q;
    int X;
    CreateEmpty(&Q);
    AddQueue(&Q,40,11);
    AddQueue(&Q,51,20);
    AddQueue(&Q,30,31);
    AddQueue(&Q,21,40);
    AddQueue(&Q,10,60);
    AddQueue(&Q,60,51);
    printf("Info|Prio -->\n");
    printf("\n");
    PrintInfo(Q);
    printf("\n\n");

    printf("1. SumGenapInfoPrio : %d\n", SumGenapInfoPrio(Q));
    ///printf("2. SumGanjilInfoPrio : %d", SumGanjilInfoPrio(Q));

    return 0;
}
