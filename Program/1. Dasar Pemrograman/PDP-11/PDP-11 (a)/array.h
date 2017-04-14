#ifndef array_h
#define array_h
#include<stdio.h>
#include<stdlib.h>
#include "boolean.h"
#define maxdata 20
//membuat tipe data array untuk int, float dan char sebesar 20 elemen
typedef int DataInt[maxdata];
typedef float DataFloat[maxdata];
typedef char DataChar[maxdata];
//Header Fungsi
//Baca elemen array sebesar n elemen
void BacaTabelInt(DataInt d, int n);
void BacaTabelFloat(DataFloat f,int n);
void BacaTabelChar(DataChar c,int n);
//Tulis elemen array sebesar n elemen
void TulisTabelInt(DataInt d,int n);
void TulisTabelFloat(DataFloat f,int n);
void TulisTabelChar(DataChar c,int n);
//Cari data pada d,f,c berlemenen n,
//mengembalikan nilai boolean
boolean IsAdaInt(DataInt d,int n, int data);
boolean IsAdaFloat(DataFloat f,int n,float data);
boolean IsAdaChar(DataChar c,int n,char data);
//Cari data pada d,f,c berlemenen n,
//mengembalikan nilai yang di cari
int CariInt(DataInt d,int n,int data);
float CariFloat(DataFloat f,int n,float data);
char CariChar(DataChar c,int n,char data);
//Cari data pada d berlemenen n,
//mengembalikan nilai index pada array
int CariIdxInt(DataInt d,int n,int data);
int CariIdxFloat(DataFloat f,int n,float data);
int CariIdxChar(DataChar c,int n,char data);
#endif
