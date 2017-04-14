#include "header.h"

int main()
{
    Stack S;
    infotype X;

    CreateStack(&S);
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
