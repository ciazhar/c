#ifndef ARRAYSORT_H_INCLUDED
#define ARRAYSORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#define maxdata 100
//var global untuk output nilai max dan min HARGA EXTRIM
//membuat tipe data array untuk int, float dan char sebesar 20 elemen
typedef int DataInt[maxdata];

void TulisTabelInt(DataInt d,int n);
void TulisTabelInt3(DataInt d,int n);
void BacaTabelInt(DataInt dataX,int n);
void TulisTabelInt2(DataInt dataX,int Ni);
//harga extrem value
//void PMin1(DataInt d, int n,int *MIN);
//void PMax1(DataInt d, int n,int *MAX);
/*
  Mencari Nilai maximum dari array d[0..n]
  menentukan maximum sementara ke MAX dari d[0]
  Lakukan traversal dari d[1..n] dan selama traversal
  lakukan perbandingan nilai MAX dalam d[1..n]
*/
//void PMaxVal2(DataInt d, int n,int *pos);
/*
  Mencari Posisi Index Nilai maximum dari array d[0..n]
  set index 0 ke pos
  Lakukan traversal dari d[i=1..n] dan selama traversal
  lakukan perbandingan nilai d[pos] dengan d[i] dalam
  d[i=1..n]
  set i ke pos jika  d[pos]<d[i]
*/
//harga extrem idx
//void PMaxPos1(DataInt d, int n,int *MAX);
/*
  Mencari Posisi Index Nilai maximum dari array d[0..n]
  set nilai MAX dengan integer terkecil
  Lakukan traversal dari d[i=0..n] dan selama traversal
  lakukan perbandingan nilai MAX dengan d[i] dalam d[i=0..n]
  set i ke MAX jika  MAX<d[i]
*/
//void FMaxPos2(DataInt d, int n,int *MAX);
/*
  set MAX dengan integer terkecil
  lakukan iterasi dari i=0..n
  jika MAX<d[i] makan set d[i] ke MAX
*/
//void CountingSort(DataInt d, int n);
/*
  Siapkan array baru sebesar nilai max dari d, yaitu
  TabCount[MAX1+1];
  Inisialkan TabCount dengan 0, mulai dari i=0..(MAX-MIN+1 dr d)
  Update frekuensi elemen di d pada TabCount, mulai dari i=0..n
  Isi d dengan nilai TabCount dengan range MIN..MAX
  Lihat referensi slide 11 Array 2, hal 12
*/
//void SelectionSort(DataInt d, int n);
/*
  Mengurutkan data array dengan cara MEMILIH elemen mulai
  (d[0..n]) dalam array tersebut
  untuk ditukarkan dengan elemen terbesar setelah elemen pertama
  (max(d[1..n])).
  Yang perlu di perhatikan bahwa proses utamanya adalah menemukan
  posisi index elemen
  terbesar, lalu lakukan pertukaran dengan elemen yang TERPILIH.
  Lihat referensi slide 11 Array 2, hal 13
*/
//void InsertionSort(DataInt d, int n);
/*
  Mengurutkan data array i..n dengan cara menyisipkan elemen
  terkecil
  pada array i..n, yang di temukan pada i+1..n. Dengan menggeser
  posisi menjadi d[i+1]=d[i]
  Lihat referensi slide 11 Array 2, hal 16
*/
//Header Fungsi
//Baca elemen array sebesar n elemen
//void BacaTabelInt(DataInt d, int n);
//Tulis elemen array sebesar n elemen
//void TulisTabelInt(DataInt d,int n);
//Cari data pada d,f,c berlemenen n,
//mengembalikan nilai boolean
//boolean IsAdaInt(DataInt d,int n, int data);
//Cari data pada d berlemenen n,
//mengembalikan nilai yang di cari
//int CariInt(DataInt d,int n,int data);
//Cari data pada d berlemenen n,
//mengembalikan nilai index pada array
//int CariIdxInt(DataInt d,int n,int data);
//Sorting Data

#endif // ARRAYSORT_H_INCLUDED
