#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include "boolean.h"
/* definisi struktur data Tanggal*/
/* Variabel Global*/
int DD;//1-31 hari
int MM;//1-12 bln
int YY;//>0 thn
//fungsi tanggal
void ResetTanggal();
boolean IsTanggalValid(int D, int M, int Y);
boolean IsKabisat(int Y);
void MakeTANGGAL(int h, int b, int t);
void BacaTANGGAL();
void TulisTANGGAL();
int HariKe(int h, int b, int t);
int DayofMonth(int m, int y);
void NextDay(int h, int b, int t);
void PrevDay(int h, int b, int t);
void NextNDay(int h, int b, int t, int N);
void PrevNDay(int h, int b, int t, int N);
boolean IsEqD(int h1, int b1, int t1, int h2, int b2, int t2);
boolean IsBefore(int h1, int b1, int t1, int h2, int b2, int t2);
boolean IsAfter(int h1, int b1, int t1, int h2, int b2, int t2);




#endif // HEADER_H_INCLUDED
