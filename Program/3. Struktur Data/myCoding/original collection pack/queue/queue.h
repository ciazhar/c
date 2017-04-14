#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *data;
    int head;
    int tail;
}queue;

void inisialisasi(queue *q);
int isEmpty(queue q);
void enqueue(queue *q, int angka);
void dequeue(queue *q, int *angka);
void display(queue q);
