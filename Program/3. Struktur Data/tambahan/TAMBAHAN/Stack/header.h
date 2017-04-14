#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED

/*
#define false 0
#define True 1
#define boolean unsigned char
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
hanya penamaan
#define Nil 0       /// Nil nama lain dari 0
#define MaxEl 10    /// MaxEl nama lain dari 10
*/

/*
** Bahasa UDINUS menggunakan typedef
typedef int infotype ;
typedef int address;        /// indeks tabel

typedef struct {
    infotype T[MaxEl+1];
    address TOP;
}Stack;
*/

/// Bahasa ASLI C
typedef struct {
    int T[10+1];        /// nilai isi dalam tabel
    int TOP;            /// alamat
}Stack;

/*
#define TOP(K) (K).TOP      /// alamat paling atas dari Stack K (yang sudah digunakan)
#define InfoTop(K) (K).T[ (K).TOP ]     /// K adalah nama STACK, T tabel T di dalam Struct Stack
*/

/// Prototype
void CreateEmpty(Stack *S) ;
int isEmpty(Stack S);
int isFull (Stack S);
void Push (Stack *S, int X);
void POP (Stack *S, int *X);
void PrintStack(Stack S) ;
void PrintALLStack(Stack S);
#endif // BOOLEAN_H_INCLUDED
