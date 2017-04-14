#include "list.h"


int main()
{
    struct list* l;
    createList(&l);
    display(l);
    printf("list %s\n",isEmpty(l)?"kosong":"tidak kosong");
    insertDepan(&l,10);
    display(l);
    insertDepan(&l,20);
    display(l);
    insertDepan(&l,30);
    display(l);

    Insert_After(&l,3,1);
    display(l);
    return 0;
}
