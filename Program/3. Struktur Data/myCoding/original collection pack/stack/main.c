#include "header.h"

int main()
{
    stack s;
    int x;

    inisialisasi(&s,10);
    printf("%s\n",isEmpty(s)?"kosong":"tidak");
    printf("%s\n",isFull(s)?"penuh":"tidak");
    display(s);
    push(&s,1);
    display(s);
    push(&s,2);
    display(s);
    push(&s,3);
    display(s);
    pop(&s,&x);
    printf("%d\n",x);
    display(s);



}
