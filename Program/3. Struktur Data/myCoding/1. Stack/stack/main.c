#include "stack.h"

int main()
{
    Stack S;



    createempty(&S);
    printf("\nStack kosong? (%s)\n\n ",isempty(S)?"True":"False");

    if (isfull(S)!=true)
    {

        push(&S, 4);
        push(&S, 3);
        push(&S, 5);
        push(&S, 10);
        push(&S, 13);


    }


    psh = 1;

    while (isempty(S)==false)
    {
         printf("is top ganjil ? ?  (%s)\n", IsTopGanjil(S)? "true":"false");
        printstack(S);
        pop(&S,&poop);
        psh++;
    }

        return 0;
}
