#include <stdio.h>
#include <stdlib.h>

#include "pustaka.h"

/*
    Muhammad Hafidz
    A11.2015.09000
*/

int main()
{
    //deklarasi
    Stack S;
    infotype X;

    //
    CreateEmpty(&S);
    printf("Is Empty ? : %s\n",IsEmpty(S)?"iya":"tidak");
    Push(&S,4);
    Push(&S,6);
    Push(&S,5);
    Push(&S,10);
    Push(&S,9);
    Push(&S,8);
    Push(&S,2);
    Push(&S,8);
    Push(&S,2);
    Push(&S,2);
    printStack(S);
    printf("Is Full ? : %s\n",IsFull(S)?"iya":"tidak");
    printf("\n=====================================================\n");
    printf("1. Apakah InfoTop bernilai genap? %d\n\n", IsInfoTopGenap(S));
    printf("2. Jumlah tumpukan buku berwarna hitam = %d\n\n", SumOfBlack(S));
    printf("3. Setelah InfoTop ditambah 4 \n");
    ChangeInfoTop(&S,4);
    printStack(S);
    return 0;
}
