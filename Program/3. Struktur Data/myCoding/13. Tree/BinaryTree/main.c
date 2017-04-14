#include "header.h"

int main()
{
    BinTree P;

    CreateEmpty(&P);
    InsertNode(&P,15);
    InsertNode(&P,9);
    InsertNode(&P,18);
    InsertNode(&P,3);
    InsertNode(&P,17);
    InsertNode(&P,10);
    InsertNode(&P,20);
    printf("Print InOrder\t:");PrintInOrder(P);
    printf("\nPrint PreOrder\t:");PrintPreOrder(P);
    printf("\nPrint PostOrder\t:");PrintPostOrder(P);
    return 0;
}
