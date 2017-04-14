#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char
#define Nil NULL

typedef int infotype;
typedef struct ElmtStack *address;
typedef struct ElmtStack {
    infotype info;
    address next;
}ElmtStack;

typedef struct {
    address TOP;
}Stack;

#define InfoTop(S) (S).TOP->info
#define TOP(S) (S).TOP
#define Next(P) (P)->next
#define Info(P) (P)->info


void CreateStack(Stack *S);
boolean isEmpty(Stack S);
address Alokasi(infotype X);
void DeAlokasi(address *P);
void Push(Stack *S, infotype X);
void Pop(Stack *S, infotype *X);
void PrintStack(Stack S);
