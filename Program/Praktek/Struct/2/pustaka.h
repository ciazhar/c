#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tgl;
    int bln;
    int thn;
}date;

typedef struct {
    char nim[15];
    char nama[20];
    date tgl_lahir;
    float ipk;
}mahasiswa;

mahasiswa mhs[2];


#endif // PUSTAKA_H_INCLUDED
