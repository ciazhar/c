#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#define true 1
#define false 0
#define boolean unsigned char

/* definisi struktur data Tanggal*/

/* Variabel Global*/
int DD;//1-31 hari
int MM;//1-12 bln
int YY;//>0 thn

void HitungSelisihHari(int D1, int M1, int Y1, int D2, int M2, int Y2);

void ResetTanggal();
boolean IsTanggalValid(int D, int M, int Y);
boolean IsKabisat(int Y);
void MakeTanggal(int h, int b, int t);
void BacaTanggal();
void TulisTanggal();
int HariKe(int h, int b, int t);
void NextDay(int h, int b, int t);
void PrevDay(int h, int b, int t);
void NextNDay(int h, int b, int t, int N);
void PrevNDay(int h, int b, int t, int N);
boolean IsEqD(int h1,int b1,int t1,int h2,int b2,int t2);
boolean IsBefore(int h1,int b1,int t1,int h2,int b2,int t2);
boolean IsAfter(int h1,int b1,int t1,int h2,int b2,int t2);


#endif // TANGGAL_H_INCLUDED
