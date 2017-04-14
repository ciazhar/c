#include "header.h"


void inisialisasi(stack *s,int Size){
    s->data=(int)malloc((Size+1) *sizeof(int));
    s->top=NULL;
    s->size=Size;
}

int isEmpty(stack s){
    if(s.top==0){
        return 1;
    }
    else {
        return 0;
    }
}
int isFull(stack s){
    if(s.top==s.size){
        return 1;
    }
    else {
        return 0;
    }
}
void display(stack s){
    int i;
    int pass=s.top;

    if(isEmpty(s)==1){
        printf("stack kosong\n");
    }
    else{
        while(s.top!=0){
            printf("\n[%d]",s.data[s.top]);
            if(pass==s.top){
                printf("<==== TOP");
            }
            s.top--;
        }
        printf("\n");

    }
}

void push(stack *s, int angka){
    if(isFull(*s)==1){
        printf("Stack Overflow");
    }
    else{
        s->top ++;
        s->data[s->top] = angka;
    }
}

void pop(stack *s, int *angka){
    if(isEmpty(*s)==1){
        printf("Stack Kosong");
    }
    else{
        *angka=s->data[s->top];
        s->top--;
    }
}


