#include "header.h"

/*
    Muhammad Hafidz
    A11.2015.09000
    Stack List
*/

int main()
{
    Stack S;
    infotype X;

    CreateEmpty(&S);
    printf("PUSH\n");
    Push(&S,10);
    PrintStack(S);
    Push(&S,9);
    PrintStack(S);
    Push(&S,8);
    PrintStack(S);
    Pop(&S,&X);
    printf("\nPOP : %d\n",X);
    PrintStack(S);
    return 0;
}
