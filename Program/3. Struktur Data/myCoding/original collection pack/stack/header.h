#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int *data;
	int top;
	int size;
}stack;

#define nil 0

void inisialisasi(stack *s,int size);
int isEmpty(stack s);
int isFull(stack s);
void push(stack *s, int angka);
void pop(stack *s, int *angka);
void display(stack s);
