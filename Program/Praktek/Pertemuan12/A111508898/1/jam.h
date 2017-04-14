#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include "boolean.h"
/* Variabel Global jam,menit dan detik*/
int HH;//jam
int MM;//menit
int SS;//detik

/*
    DEFINISI PRIMITIF
    KELOMPOK VALIDASI TERHADAP TYPE
*/

boolean IsJValid(int H, int M, int S);
void MakeJam(int HH, int MM, int SS);
int GetHour();
int GetMinute();
int GetSecond();
void SetHH(int *HH, int newHH);
void SetMM(int *MM, int newMM);
void SetSS(int *SS, int newSS);
void BacaJam(int HH, int MM, int SS);
void Tulisjam();
int JamToDetik (int HH,int MM, int SS);
void DetikToJam(int N);
boolean JEQ(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
boolean JNEQ(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
boolean JLT(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
boolean JGT(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
void JPlus(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
void JMinus(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
void NextDetik(int HH, int MM, int SS);
void NextNDetik(int HH, int MM, int SS, int N);
void PrevDetik(int HH, int MM, int SS);
void PrevNDetik(int HH, int MM, int SS, int N);
int Durasi(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);

#endif // HEADER_H_INCLUDED

