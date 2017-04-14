#include <stdio.h>
#include <stdlib.h>

#define boolean unsigned char
#define true 1
#define false 0

struct list{
    int data;
    struct list* next;
};


void inisialisasi(struct list* *l);
int isEmpty(struct list* l);
struct list* alokasi(int angka);
struct list* dealokasi(struct list* *l);
void insertDepan(struct list* *l, int angka);
void Insert_After (struct list* *l,int Posisi,int Data);


void display (struct list* l);
