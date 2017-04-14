#include "boolean.h"
#define Nil 0 ///stack dengan elemen kosong

typedef int infotype;///akses nilai elemen
typedef int address;///akses path

///deklarasi struct
typedef struct{
    infotype *T; ///ini array
    address TOP;///ini counter
    int Size;/// ukuran stack
}Stack;

///deklarasi shortcut
#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Size(S) (S).Size

///deklarasi fungsi dan prosedur
void CreateEmpty(Stack *S, int Size_);/// mengkondisikan stack menjadi kosong
void Destruct(Stack *S); /// dealokasi seluruh memori sekaligus
boolean IsEmpty(Stack S);/// mengecek apakah stack kosong
boolean IsFull(Stack S);/// mengecek apakah stack penuh
void Push(Stack *S, infotype X); /// melakukan push
void Pop(Stack *S, infotype X); /// melakukan pop
void printStack(Stack S);
