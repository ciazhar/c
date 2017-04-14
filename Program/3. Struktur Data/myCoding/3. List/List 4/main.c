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
    InsVFirstGanjil(&L,3);
    printf("\rList : ");
    PrintInfo(L);
    MakeListGenap(&L);
    printf("\rList : ");
    PrintInfo(L);
    return 0;
}
