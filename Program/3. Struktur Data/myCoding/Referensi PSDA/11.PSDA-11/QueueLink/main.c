#include "queuelink.h"

int main()
{
    Queue Q;
    int X, i, N;

    CreateEmpty(&Q);
    printf("Apakah Queue Q kosong? %d\n", IsEmpty(Q));

    printf("\nAdd Elemen Queue\n\n");
    printf("Berapa banyak elemen yg dimasukkan? ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d Queue: ", i);scanf("%d",&X);
        Add(&Q,X);
    }
    printf("InfoHead Queue Q: %d\n", InfoHead(Q));
    printf("InfoTail Queue Q: %d\n", InfoTail(Q));

    printf("\nDel Elemen Queue\n\n");
    Del(&Q,&X);
    printf("InfoHead Queue Q: %d\n", InfoHead(Q));
    printf("InfoTail Queue Q: %d\n", InfoTail(Q));

    return 0;
}
