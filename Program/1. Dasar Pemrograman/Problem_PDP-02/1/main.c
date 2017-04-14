#include <stdio.h>
#include <stdlib.h>

///MUHAMMAD HAFIDZ
///A11.2015.09000
///MENGHITUNG VOLUME GAS IDEAL

int main()
{
    //KAMUS
     float V; //volume gas ideal
     float P; //tekanan(kiloPascal)
     float n; //mol gas(mol)
     float T; //temperatur(kelvin)
     const R = 8.314; //konstanta gas ideal

    //PROSES
     printf("Masukkan Besar mol, Suhu dan Tekanan : ");
     scanf("%f %f %f", &n, &T, &P);
     V = n*R*T/P;


    //OUTPUT
     printf("Volume gas ideal : %f", V);

}
