#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    /*printf("AWAL\n");
    input();
    pointerc=&c;
    pointeri=&i;
    pointerf=&f;
    cetak();
    printf("\nBARU\n");
    resetinput();
    fflush(stdin);
    input();
    cetak();*/
    inputbalok();
    cetakbalok();
    printf("\nNilai : %d",volumeBalok(p,l,t,&volume));
}
