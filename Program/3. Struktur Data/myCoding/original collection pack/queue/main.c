#include "queue.h"

int main()
{
    queue q;
    int x;

    inisialisasi(&q);
    display(q);
    printf("queue %s",isEmpty(q)?"kosong":"tidak kosong");
    enqueue(&q,10);
    display(q);
    enqueue(&q,20);
    display(q);
    enqueue(&q,30);
    display(q);
    dequeue(&q,&x);
    printf("\nx =%d",x);
    display(q);
    return 0;
}
