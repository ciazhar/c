#include <stdio.h>
#include <stdlib.h>
#include "List Stack.h"
int main()
{
    Stack S;
    infotype deli;
    printf("push 5~1\n");
    CreateEmpty(&S);
    Push(&S,5);
    Push(&S,4);
    Push(&S,3);
    Push(&S,2);
    Push(&S,1);
    Push(&S,0);
    printinfo(S);
    printf("pop deli\n");
    Pop(&S,&deli);
    printinfo(S);
    printf("deli : %d\n",deli);
    printf("jumlah ganjil :  %d\n",jumlahganjil(S));
    printf("sisa stack:  %d\n",sisastack(S,2));
    printf("Hello world!\n");
    return 0;
}
