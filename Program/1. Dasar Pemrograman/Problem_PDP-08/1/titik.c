#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "titik.h"

///Variabel Global untuk absis dan ordinat
float X; //Absis
float Y; //Ordinat

///Konstruktor
void MakePoint(float a,float b)
{
    X=a;
    Y=b;
}
///Selektor
float GetAbsis()
{
    float absis;
    absis=X;
    return absis;
}
float GetOrdinat()
{
    float ordinat;
    ordinat=Y;
    return ordinat;
}
///Kolektor
void SetOrdinat(float *Ordinat,float newy)
{
    Y=newy;
}
void SetAbsis(float *Absis,float newx)
{
    X=newx;
}


///Baca Tulis
void BacaPoint()
{
    float a, b;
    a=X;
    b=Y;
}
void Tulis(float x,float y)
{
    X=x;
    Y=y;
    printf("(%f,%f)\n",X,Y);
}
///Operasi aritmatika
void AddP(float x1, float y1, float x2, float y2)
{
    X=x1+x2;
    Y=y1+y2;
}
void MinP(float x1, float y1, float x2, float y2)
{
    X=x1-x2;
    Y=y1-y2;
}
void MulDot(float x1, float y1, float x2, float y2)
{
    X=x1*x2;
    Y=y1*y2;
}


///Posisi
boolean IsOrigin()
{
    if(X==0&&Y==0){
        return true;
    }
    else return false;
}
boolean IsOnSbX()
{
    if(Y==0){
        return true;
    }
    else return false;
}
boolean IsOnSbY()
{
    if(X==0){
        return true;
    }
    else return false;
}
int Kuadran()
{
    int ku;
    if(X!=0&&Y!=0){
        if(X>0&&Y>0){
            ku=1;
        }
        else if(X<0&&Y>0){
            ku=2;
        }
        else if(X>0&&Y<0){
            ku=3;
        }
        else ku=4;
    }
    else {printf("\n<x,y> Titik Origin/Terletak pada satu sumbu");
    }
    return ku;
}

///Operasi Tipe
void NextX()
{
    X=X+1;
}
void NextY()
{
    Y=Y+1;
}
void PlusDelta(float deltax,float deltay)
{
    X=X+deltax;
    Y=Y+deltay;
}
void MirrorOf(boolean sbx)
{
    if(sbx==true){
        X=X;Y=-Y;
    }
    else{
        X=X;Y=Y;
    }
}
float JarakPst()
{
    float xkuadrat,ykuadrat,z;
    xkuadrat=X*X;
    ykuadrat=Y*Y;
    z=sqrt(xkuadrat+ykuadrat);
    return z;
}

void Geser(float deltax,float deltay)
{
    X=X+deltax;
    Y=Y+deltay;
}
void GeserSbX()
{
    X=X;
    Y=0;
}
void GeserSbY()
{
    X=0;
    Y=Y;
}
void MirrorP(boolean sbx)
{
    if(sbx==true){
        X=X;
        Y=-Y;
    }
}
void Putar(float sudut)
{
    X=X *cos(sudut) - Y *sin (sudut);
    Y=X *sin(sudut) - Y *cos (sudut);
}


