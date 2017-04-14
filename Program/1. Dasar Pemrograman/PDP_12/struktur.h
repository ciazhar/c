#ifndef STRUKTUR_H_INCLUDED
#define STRUKTUR_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "boolean.h"
#define maxnama 25
#define MaxData 20

typedef struct
{
    int NIM;
    char Nama[maxnama];
    float IPK;
    int i;
}Mhs;
typedef Mhs DATA[MaxData];
Mhs BacaData();
void TulisData(Mhs d);
void Sorting(DATA d,int n,int idx);
Mhs Searching1(DATA d,int n, int nim);
boolean Searching2(DATA d,int n, int nim);
#endif // STRUKTUR_H_INCLUDED
