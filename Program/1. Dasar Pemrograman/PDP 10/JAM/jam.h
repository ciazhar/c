#include <stdio.h>
#include <stdlib.h>
#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED
#include "boolean.h"

/*Variabel Global jam,menit dan detik*/
int HH; //jam
int MM; //menit
int SS; //detik
//extern const int maxdetik=86400;

/*
 DEFINISI PRIMITIF
 KELOMPOK VALIDASI TERHADAP TYPE
*/

boolean IsJValid (int H,int M,int S);
  /* Mengirim true jika H,M,S dapat membentuk J yang valid }
     {dipakai untuk mentest SEBELUM membentuk sebuah Jam}
  */
  /* Konstruktor: Membentuk sebuah JAM dari komponen-komponennya */

void MakeJam ();
  /* Membentuk sebuah JAM dari komponen-komponennya yang valid
     Prekondisi : HH, MM, SS valid untuk membentuk JAM
  */
  /*  Operasi terhadap komponen : selektor Get dan Set *** } */
  /* { *** Selektor *** } */

int GetHour ();
  /*{ Mengirimkan bagian HH (Hour) dari JAM }*/

int GetMinute ();
  /*{ Mengirimkan bagian Menit (MM) dari JAM }*/

int GetSecond ();
  /*{ Mengirimkan bagian Second (SS) dari JAM }*/
  /*{ *** Pengubah nilai Komponen *** }*/

void SetHH (int *HH, int newHH);
  /*{ Mengubah nilai komponen HH dengan newHH }*/

void SetMM (int *MM, int newMM);
  /*{ Mengubah nilai komponen MM dengan newMM }*/

void SetSS (int *SS, int newSS);
  /*{ Mengubah nilai komponen SS dg newSS}*/

  /*{ KELOMPOK BACA/TULIS }*/

void BacaJam (int *HH, int *MM, int *SS);
  /*I.S. : HH,MM,SS tidak terdefinisi
    F.S. : HH,MM,SS terdefinisi di Variabel global
    Proses :
    mengulangi membaca komponen H,M,S sehingga membentuk Jam yang
    valid. Tidak mungkin menghasilkan Jam yang tidak valid.
  */

void TulisJam ();
  /*
    { I.S. : sembarang }
    { F.S. : Nilai variable global ditulis dg format HH:MM:SS }
    { Proses : menulis nilai setiap komponen Jam ke layar }
  */

  /*{ KELOMPOK KONVERSI TERHADAP TYPE }*/

int JamToDetik (int HH, int MM, int SS);
  /*
    { Diberikan sebuah JAM, mengkonversi menjadi Detik }
    { Rumus : detik = 3600*hour+menit*60 + detik }
    { nilai maksimum = 3600*23+59*60+59*60 }
    { Hati-hati dengan representasi integer pada bahasa implementasi
    { kebanyakan sistem mengimplementasi integer, }
    { bernilai maksimum kurang dari nilai maksimum hasil konversi }
  */

void DetikToJam (int N);
  /*
    { Mengirim konversi detik ke JAM }
    { Catatan: Jika N  86400, maka harus dikonversi dulu menjadi
    jumlah detik yang mewakili jumlah detik yang mungkin dalam 1
    hari, yaitu dengan rumus: N1 = N mod 86400, baru N1 dikonversi
    menjadi JAM }
  */
  /*
    { KELOMPOK OPERASI TERHADAP TYPE }
    { *** Kelompok Operator Relational *** }
  */

boolean JEQ (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
    /*{ Mengirimkan true jika JAM1=JAM2, false jika tidak }*/
boolean JNEQ (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
    /*{ Mengirimkan true jika J1 tidak sama dengan J2 }*/
boolean JLT (int  HH1, int MM1, int SS1,int HH2, int MM2, int SS2);
    /*{ Mengirimkan true jika J1<J2 , false jika tidak }*/
boolean JGT (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
    /*{ Mengirimkan true jika J1>J2, false jika tidak }*/
    /*{ *** Operator aritmatika JAM *** }*/
void JPlus (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
    /*{ Menghasilkan JAM1+JAM2, dalam bentuk JAM di variable
    Global }*/
void JMinus (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2);
    /*{ Menghasilkan JAM2-JAM1, dalam bentuk JAM }*/
    /*{ Prekondisi : JAM1<=JAM2 }*/
void NextDetik (int HH, int MM, int SS);
    /*{ Mengirim 1 detik setelah HH,MM,SS dalam bentuk JAM di */
    /*variable global }*/
void NextNDetik (int HH, int MM, int SS,int N);
    /* Mengirim N detik setelah HH,MM,SS dalam bentuk JAM di */
    /* variabel global }*/
void PrevDetik (int h, int m, int s);
    /*{ Mengirim 1 detik sebelum HH,MM,SS dalam bentuk JAM di */
    /* variable global }*/
void PrevNDetik (int HH, int MM, int SS, int N);
    /*{ Mengirim N detik sebelum J dalam bentuk JAM }*/
    /*{ *** Kelompok Operator Aritmetika *** }*/
int Durasi (int HH1, int MM1, int SS1, int HH2, int MM2,int SS2);
    /*{ Mengirim JAM2-JAM1 dlm Detik, dengan kalkulasi }*/
    /*{ Hasilnya negatif jika JAM1 > JAM2 }*/

#endif // JAM_H_INCLUDED
