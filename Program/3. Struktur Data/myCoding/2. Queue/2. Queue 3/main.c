#include <stdio.h>
#include <stdlib.h>
#include "List Queue.h"
int main()
{
    Queue A;
    CreateEmpty(&A);
    add(&A,5);
    add(&A,4);
    add(&A,3);
    add(&A,2);
    add(&A,1);
    add(&A,0);
    printinfo(A);
    printf("nbelmt : %d\n",NBelmt(A));
    pindahkedepan(&A,2);
    printinfo(A);
    printf("Hello world!\n");
    return 0;
}
