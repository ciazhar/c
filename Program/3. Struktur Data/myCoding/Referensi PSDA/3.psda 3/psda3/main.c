#include "listeks.h"

int main()
{
    List L;
    address P;

    int i, X;

    /*===CREATE LIST===*/

    CreateList(&L);

    printf("\nInput 5 Nilai ke dalam List \n\n");

    for(i=1; i<=5; i++){

        printf("Nilai %d : ", i);
        scanf("%d", &X);

        InsVLast(&L,X);
    }

    printf("\rList : ");
    PrintInfo(L);

     //printf ("jumlah List =%d",JumList (L));



     //No 1
    printf("Difflist : %d", DiffList(L));

    //No 2
    printf("\nJumGenap: %d", JumGenap(L));

    return 0;
}
