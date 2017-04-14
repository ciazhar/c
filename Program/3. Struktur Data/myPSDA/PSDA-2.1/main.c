#include "pustaka.h"
#include "boolean.h"

int main()
{
    Queue Q;
    infotype X;

    printf("Create empty\n");
    CreateEmpty(&Q,5);
    DeAlokasi(&Q);
    CreateEmpty(&Q,10);
    PrintQueue(Q);
    printf("\nIs Empty ? %s\n",IsEmpty(Q)?"ya":"tidak");
    Add(&Q,10);
    Add(&Q,11);
    Add(&Q,12);
    Add(&Q,13);
    Add(&Q,14);
    Add(&Q,12);
    Add(&Q,14);
    PrintQueue(Q);
    Del(&Q,X);
    printf("\nIs FUll ? %s\n",IsFull(Q)?"ya":"tidak");
    printf("ELelem ke %d\n",NBElmt(Q));




    return 0;
}
