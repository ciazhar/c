#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include "boolean.h"

///Knstruktor
void MakePoint(float,float);
///Selektor
float GetAbsis();
float GetOrdinat();
///Kolektor
void SetOrdinat(float *Ordinat,float newx);
void SetAbsis(float *Absis,float newy);

///Baca Tulis
void BacaPoint();
void Tulis(float,float);
///Operasi aritmatika
void AddP(float x1, float y1, float x2, float y2);
void MinP(float x1, float y1, float x2, float y2);
void MulDot(float x1, float y1, float x2, float y2);

///Posisi
boolean IsOrigin();
boolean IsOnSbX();
boolean IsOnSbY();
int Kuadran();

///Operasi Tipe
void NextX();
void NextY();
void PlusDelta(float deltax,float deltay);
void MirrorOf(boolean sbx);
float JarakPst();
void Geser(float deltax,float deltay);
void GeserSbX();
void GeserSbY();
void MirrorP(boolean sbx);
void Putar(float sudut);

#endif // HEADER_H_INCLUDED

