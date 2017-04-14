#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#define nil 0

#define false 0
#define true 1
#define boolean unsigned char

typedef int infotype;
typedef int address;

typedef struct
{
    infotype *T;
    address TOP;
    int Size;
}Stack;

#define TOP(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Siz(S) (S).Size

void CreateEmpty (Stack *S,int Size);
void Destruct (Stack *S);
boolean IsEmpty (Stack S);
boolean IsFull (Stack S);
void Push (Stack *S, infotype X);
void Pop (Stack *S, infotype *X);


#endif // HEADER_H_INCLUDED
