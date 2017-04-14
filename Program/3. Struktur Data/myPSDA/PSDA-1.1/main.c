#include <stdio.h>
#include <stdlib.h>

#include "pustaka.h"
#include "boolean.h"

/*
    Muhammad Hafidz
    A11.2015.09000
*/

int main()
{
    //deklarasi
    Stack S;
    infotype X;

    ///
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
    printf("Is Full ? : %s\n",IsFull(S)?"iya":"tidak");
    printStack(S);
    Pop(&S,&X);
    printStack(S);
    return 0;
}
