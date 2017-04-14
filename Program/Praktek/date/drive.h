#include <stdio.h>
#include <stdlib.h>

#ifndef DRIVE_H_INCLUDED
#define DRIVE_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char

//variabel global
int DD;
int MM;
int YY;

//deklarasi fungsi dan prosedur (prototype)
void ResetTanggal();
boolean IsTanggalValid(int D, int M, int Y);
boolean IsKabisat(int Y);
void MakeTANGGAL(int h, int b, int t);
void BacaTANGGAL();
void TulisTANGGAL();
int HariKe(int h, int b, int t);
int DayofMonth(int m,int y);
void NextDay (int h,int b,int t);
void PrevDay (int h,int b,int t);
void NextNDay (int h,int b,int t,int N);
void PrevNDay (int h,int b,int t,int N);
boolean IsEqD(int h1,int b1,int t1,int h2,int b2,int t2);
boolean IsBefore(int h1,int b1,int t1,int h2,int b2,int t2);
boolean IsAfter(int h1,int b1,int t1,int h2,int b2,int t2);

#endif // DRIVE_H_INCLUDED
