#include "container.h"

int main()
{
    Stack S;
    CreateEmpty(&S);

    Push(&S, 2);
    Push(&S, 6);
    Push(&S, 12);
    Push(&S, 9);
    Push(&S, 8);

    printf("Isi STACK : \n");
    PrintStack(S);
    printf("\nInfoTOP : %d\n", InfoTop(S));

   // printf("\n\nMenambahkan 8 dan 9 ke STACK : \n");
   // Push(&S, 8);
   // Push(&S, 9);
   // PrintStack(S);
   // printf("\nInfoTOP : %d\n", InfoTop(S));

    //printf("\n\nMengambil 9 dari STACK : \n");
   // int x=9;
    //Pop(&S, &x);
    //PrintStack(S);
    //printf("\nInfoTOP : %d\n", InfoTop(S));

    printf("\n jumlah bilangan pada index ganjil : %d", JumBilJil(S));
    printf("\n jumlah bilangan genap adalah : %d", jumlahgenap(S));
   // sisastack(&S,nilai);
    printf("\njumlah sisa stacknya adalah  ", sisastack(S,12));
    PrintStack(S);

    printf("\n");
    return 0;
}
