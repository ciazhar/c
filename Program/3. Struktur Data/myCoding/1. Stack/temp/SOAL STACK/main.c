#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"


int main ()
{
    Stack S;
    createempty(&S);

    push(&S,4);
    push(&S,3);
    push(&S,5);
    push(&S,10);
    push(&S,12);

    printf("Kondisi STACK Normal.\n");
    printStack(S);

    printf("\n\n===============TESTING===============\n");

    // SOAL NO 1//
    printf("> Uji Soal No 1\n");
    printf("IsTopGenap = %d\n",IsTOPGenap(S));
    printf("--------------------------------\n");
    // SOAL NO 1//

    //SOAL NO 2//
    printf("> Uji Soal No 2\n");
    PushGanjil(&S,21);
    printf("Kondisi STACK setelah ditambah.\n");
    printStack(S);
    printf("--------------------------------\n");
    //SOAL NO 2//

    //SOAL NO 3//
    printf("> Uji Soal No 3\n");
    SumGanjilGenap(&S);
    //SOAL NO 3//
    return 0;
}

