#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"
#include <ctype.h>


int main ()
{

     puts("\t--BAGIAN . 1 , PROGRAM STACK DENGAN ALOKASI MEMORI STATIK--");
    puts("\t-----------------------------------------------------------\n\n");

    int pick_up;
    Stack Pilar_1; //deklarasi variabel bertype "STACK" dengan nama "Pilar_1".
    Stack Pilar_2; //deklarasi variabel bertype "STACK" dengan nama "Pilar_2".
    Stack Pilar_3; //deklarasi variabel bertype "STACK" dengan nama "Pilar_3".

    createempty(&Pilar_1); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.
    createempty(&Pilar_2); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.
    createempty(&Pilar_3); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.

    //DEFAULT
    push(&Pilar_1,3);
    push(&Pilar_1,2);
    push(&Pilar_1,1);

    Show_Pilar(Pilar_1,Pilar_2,Pilar_3);

    //*****************AREA PENGERJAAN*****************//
    puts("Level 1");
    while(!isempty(Pilar_1))
    {
        pop(&Pilar_1,&pick_up);
        push(&Pilar_2,pick_up);
    }
    Show_Pilar(Pilar_1,Pilar_2,Pilar_3);

    createempty(&Pilar_1); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.
    createempty(&Pilar_2); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.
    createempty(&Pilar_3); // inisialisasi Stack , set posisi TOP di index 0 paling bawah.

    //DEFAULT
    push(&Pilar_1,3);
    push(&Pilar_1,2);
    push(&Pilar_1,1);

    puts("Level 2");
    pop(&Pilar_1,&pick_up);
    push(&Pilar_3,pick_up);

    pop(&Pilar_1,&pick_up);
    push(&Pilar_2,pick_up);

    pop(&Pilar_3,&pick_up);
    push(&Pilar_2,pick_up);

    pop(&Pilar_1,&pick_up);
    push(&Pilar_3,pick_up);

    pop(&Pilar_2,&pick_up);
    push(&Pilar_1,pick_up);

    pop(&Pilar_2,&pick_up);
    push(&Pilar_3,pick_up);

    pop(&Pilar_1,&pick_up);
    push(&Pilar_3,pick_up);

    Show_Pilar(Pilar_1,Pilar_2,Pilar_3);
    //*****************AREA PENGERJAAN*****************//

    return 0;
}

