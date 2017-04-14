#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include "boolean.h"
#include "titik.h"

///Harasta Rahman T.P
///A11.2015.09002

///Variabel Global untuk absis dan ordinat
float X; //Absis
float Y; //Ordinat


int main()
{
    MakePoint(2.0,2.0);
    Tulis(X,Y);
    BacaPoint();
    Tulis(X,Y);
    printf("\nGetAbsis      : %d\n",(int)GetAbsis());
    printf("GetOrdinat    : %d\n",(int)GetOrdinat());
    SetAbsis(&X,4.0);SetOrdinat(&Y,4.0);
    printf("\nP4 stlh diset 4,4 : ");Tulis(X,Y);

    MakePoint(-2,2);
    printf(" \nP5 stlh diset -2,2 : ");Tulis(X,Y);

    AddP(2.0,2.0,-2.0,2.0);
    printf(" \nTulis P5 =P1+P2    :");Tulis(X,Y);
    MinP(2.0,2.0,-2.0,2.0);
    printf(" \nTulis P5 =P1-P2    :");Tulis(X,Y);
    MulDot(2.0,2.0,-2.0,2.0);
    printf(" \nTulis P5 =P1*P2    :");Tulis(X,Y);

    printf(" \nOrigin         ? %d",IsOrigin());
    printf(" \nIsOnSbX        ? %d",IsOnSbX());
    printf(" \nIsOnSbY            ? %d",IsOnSbY());
    printf(" \nX,Y di Kuadran Ke  : %d",Kuadran());
    NextX();
    printf(" \nNext X 1 titik       : ");Tulis(X,Y);
    NextY();
    printf(" \nNext Y 1 titik       : ");Tulis(X,Y);
    PlusDelta(2,2);
    printf(" \nPlusDelta (2,2) : ");Tulis(X,Y);
    MirrorOf(true);
    printf(" \nMiror ke SbX       : ");Tulis(X,Y);
    Geser(2,3);
    printf(" \nGeser ke (2,3)     : ");Tulis(X,Y);
    GeserSbX();
    printf(" \nGeser ke SbX       : ");Tulis(X,Y);
    GeserSbY();
    printf(" \nGeser ke SbY       : ");Tulis(X,Y);
    printf(" \nJarak  dr (0,0)  : %.2f\n",JarakPst());
    printf(" \nTitik sblm rot 30 CCW : ");Tulis(X,Y);
    Putar(30.0);
    printf(" \nTitik stlh rot 30 CCW : ");Tulis(X,Y);
    Putar(-30.0);
    printf("\nP1 stlh rot -30 CCW : ");Tulis(X,Y);
    printf("\nHello world!\n");
    return 0;

}
