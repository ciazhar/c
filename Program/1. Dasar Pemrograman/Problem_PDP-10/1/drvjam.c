#include <stdio.h>
#include <stdlib.h>
#include "jam.h"
#include "boolean.h"

int HH1=16,MM1=41,SS1=13;
int HH2=23,MM2=30,SS2=33;
int detik=65378;
int main()
{
    ///fungsi jam
    printf("IsJValid : %d\n",IsJValid(HH1,MM1,SS1));
    printf("%d:%d:%d = %d detik\n",HH1,MM1,SS1,JamToDetik(HH1,MM1,SS1));
    DetikToJam(detik);
    printf("%d detik sama dengan %d:%d:%d \n",detik,HH,MM,SS);
    JPlus(HH1,MM1,SS1,HH2,MM2,SS2);
    printf("%d:%d:%d ditambah %d:%d:%d sama dengan %d:%d:%d \n",HH1,MM1,SS1,HH2,MM2,SS2,HH,MM,SS);
    JMinus(HH1,MM1,SS1,HH2,MM2,SS2);
    printf("%d:%d:%d dikurang %d:%d:%d sama dengan %d:%d:%d \n",HH2,MM2,SS2,HH1,MM1,SS1,HH,MM,SS);
    NextDetik(21,49,24);
    printf("Next Detik dari 21:49:24 = %d:%d:%d\n",HH,MM,SS);
    NextNDetik(21,49,24,15);
    printf("Next %d Detik dari 21:49:24 = %d:%d:%d\n",15,HH,MM,SS);
    PrevDetik(21,49,24);
    printf("Prev Detik dari 21:49:24 = %d:%d:%d\n",HH,MM,SS);
    PrevNDetik(21,49,24,15);
    printf("Next %d Detik dari 21:49:24 = %d:%d:%d\n",15,HH,MM,SS);
    printf("Durasi dari 24:10:00 - 23:10:00 = %d detik\n",Durasi(24,10,0,23,10,0));
   return 0;
}
