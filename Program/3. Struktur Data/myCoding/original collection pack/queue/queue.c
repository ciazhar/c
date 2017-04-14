#include "queue.h"

void inisialisasi(queue *q){
    (*q).data = (int)malloc(sizeof(int));
    q->head= q->tail = -1;
}
int isEmpty(queue q){
    if(q.tail==-1){
        return 1;
    }
    else {
        return 0;
    }
}
void enqueue(queue *q, int angka){
    if(isEmpty(*q)==1){
        q->head=q->tail=0;
        q->data[q->tail]= angka;
    }
    else{
        q->tail++;
        q->data[q->tail]= angka;
    }
}
void dequeue(queue *q, int *angka){
    if(isEmpty(*q)==1){
        printf("Queue Kosong\n");
    }
    else{
        *angka = q->data[q->head];
        q->head++;

    }
}
void display(queue q){
    if(isEmpty(q)==0){
        int i;
        printf("\nHead ==> ");

        for(i=q.head;i<=q.tail;i++){
            printf("[%d] ",q.data[i]);
        }
        printf(" <==Tail");
    }
    else{
        printf("queue kosong\n");
    }
}
