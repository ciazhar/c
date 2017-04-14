#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "boolean.h"
#define idxmax 10
#define nil 0

#endif // STACK_H_INCLUDED

typedef int InfoType;
typedef int address;

typedef struct
{
    InfoType T[idxmax+1];
    address TOP;
}
Stack; //"stack" -> nama fungsi di boolean ... "Stack" -> nama variabel

void createempty (Stack *St);   //createempty : membuat alamat kosong
boolean isempty (Stack St);   // isempty : apakah file alamat tsb itu kosong? | tanda (*) = pointer, St itu ky variabel alamat
boolean isfull (Stack St);   //isfull : apakah file alamat tsb itu penuh? | Stack ky variabel
void push (Stack *St, int x);  // push : untuk menambah elemen dr tumpukan itu tadi  | *St, int x -> alamat St tsb bertype integer x
void pop (Stack *St, int *x); // pop : untuk mengurangi elemen di tumpukan itu tadi | klo Stacknya kosong gk bisa dijala
void printstack (Stack s); // printstack: untuk

// SOAL PRAKTEK //
boolean IsGenap (Stack s);
void pushGanjil (Stack *St, int x);
void SumGanjilGenap (Stack *S);

#define TOP(S) (S).TOP
#define InfoTop(S) (S).T[(S.TOP]

