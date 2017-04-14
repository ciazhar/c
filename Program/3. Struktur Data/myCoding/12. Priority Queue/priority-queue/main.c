#include "header.h"

/*
    Muhammad Hafidz
    A11.2015.09000
    Prority Queue
*/

int main()
{
    Queue Q;
    int X;

    CreateEmpty(&Q);
    Add(&Q,10,2);
    PrintQueue(Q);
    Add(&Q,30,70);
    PrintQueue(Q);
    Add(&Q,20,60);
    PrintQueue(Q);
    Del(&Q,&X);
    PrintQueue(Q);
}
