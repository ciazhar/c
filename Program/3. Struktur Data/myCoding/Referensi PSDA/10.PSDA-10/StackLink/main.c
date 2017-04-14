#include "stacklink.h"

int main()
{
    Stack S;
    int X, i, N;

    CreateEmpty(&S);
    printf("Apakah Stack S kosong? %d\n", IsEmpty(S));
    printf("\n#Push Stack S\n\n");
    printf("Masukkan banyak elemen yg diinginkan: ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d Stack: ", i);scanf("%d",&X);
        Push(&S,X);
    }

    printf("Apakah Stack S kosong? %d\n", IsEmpty(S));
    printf("InfoTop(S): %d\n", InfoTop(S));
    printf("TOP(S): %p\n", TOP(S));

    printf("\n#Pop Stack S\n\n");
    Pop(&S,&X);
    printf("Apakah Stack S kosong? %d\n", IsEmpty(S));
    printf("InfoTop(S): %d\n", InfoTop(S));

    return 0;
}
