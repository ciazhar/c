#include "header.h"

/*
    Muhammad Hafidz
    A11.2015.09000
    Queue List
*/

int main()
{
    Queue Q;
    int X;

    CreateQueue(&Q);
    printf("stack %s\n",isEmpty(Q)?"empty":"tidak tempty");
    Add(&Q,10);
    PrintQueue(Q);
    Add(&Q,20);
    PrintQueue(Q);
    Add(&Q,30);
    PrintQueue(Q);
    Del(&Q,&X);
    printf("del : %d\n",X);
    PrintQueue(Q);
    return 0;
}
