#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define Nil 0  // constact Nil : 0

#define True 1
#define False 0
#define boolean unsigned char



typedef int infotype ;      // type infotype : integer
typedef int address ;       // type address  : integer

typedef struct {        // type
    infotype *T;    // *T berukuran 1 byte . krna dinamic *T diubah jadi array dgn malloc. *T -> T[]
    address TOP;    // alamat TOP : elemen Paling Atas
    int Ukuran;     // Ukuran Stack
}Stak;              // type bentukan & struktur Stack

void CreateEmpty ( Stak *L , int Uk );
void Destruct ( Stak *L);

boolean IsEmpty ( Stak L);
boolean IsFull ( Stak L );

void Push ( Stak *L, infotype X);
void POP ( Stak *L, infotype *X);
void PrintALLStack (Stak L);

void PrintStack(Stak S);
#endif // HEADER_H_INCLUDED
