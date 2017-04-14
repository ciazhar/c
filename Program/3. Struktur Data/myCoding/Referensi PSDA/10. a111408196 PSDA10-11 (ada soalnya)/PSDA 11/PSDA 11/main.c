#include "container.h"

int main()
{
    Queue m;
    CreateEmpty(&m);

    Add(&m, 7);
    Add(&m, 8);
    Add(&m, 9);

    printf("Isi QUEUE : \n");
    PrintQueue(m);
    printf("\nInfoHead : %d\n", InfoHead(m));
    printf("InfoTail : %d\n", InfoTail(m));

    printf("\nMenambahkan 10 ke QUEUE :\n");
    Add(&m, 10);
    PrintQueue(m);
    printf("\nInfoHead : %d\n", InfoHead(m));
    printf("InfoTail : %d\n", InfoTail(m));

    printf("\nMengambil 7 dari QUEUE :\n");
    int a= 7;
    Del(&m, &a);
    PrintQueue(m);
    printf("\nInfoHead : %d\n", InfoHead(m));
    printf("InfoTail : %d\n", InfoTail(m));

    printf("\n");
    return 0;
}
