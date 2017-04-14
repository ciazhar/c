#ifndef CONTAINER_H_INCLUDED
#define CONTAINER_H_INCLUDED

#include "boolean.h"
#include <stdio.h>
#include <stdlib.h>

#define Nil 0

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
    infotype info;
    address next;
} ElmtList;

/* Definisi list : */
/* List kosong : First(L) = Nil */
/* Setiap elemen dengan address P dapat diacu Info(P), Next(P) */
/* Elemen terakhir list : jika addressnya Last,
maka Next(Last) = First */
typedef struct {
    address First;
} List;

/* Selektor */
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) ((L).First)

/*--- Mengecek Apakah Ada Gerbong Pada Rangkaian Kereta Atau Tidak ---*/
boolean ListEmpty(List Q);
/*--------------------------------------------------------------------*/

/*--- Menbuat Rangkaian Kereta yang Siap Digunakan ---*/
void CreateList(List *Q);
/*----------------------------------------------------*/

/*--- Membuang Gerbong Kereta ---*/
void Dealokasi(address *x);
/*-------------------------------*/

/*--- Menyiapkan Gerbong Kosong yang Siap Digunakan */
address Alokasi(infotype x);
/*--------------------------------------------------*/

/*--- Menampilkan Isi Rangkaian Kereta ---*/
void PrintInfo(List Q);
/*---------------------------------------*/

/************** OPERASI PENAMBAHAN GERBONG PADA RANGKAIAN KERETA **************/

/*--- Penambahan Gerbong Pada Bagian Awal Rangkaian ---*/
void InsertFirst(List *Q, address x);

void InsertVFirst(List *Q, infotype x);
/*-----------------------------------------------------*/

/*----- Menambahkan Gerbong 'x' setelah Gerbong 'n' -----*/
void InsertAfter(List *Q, address x, address prec);

void InsertVAfter(List *Q, infotype x, infotype n);
/*-------------------------------------------------------*/

/*--- Menambahakan Gerbong Pada Bagian Akhir Rangkaian Kereta ---*/

void InsertLast(List *Q, address x, address prec);

void InsertVLast(List *Q, infotype x);
/*---------------------------------------------------------------*/

/******************************************************************************/


/************** OPERASI PELEPASAN GERBONG PADA RANGKAIAN KERETA **************/

/*--- Melepaskan Gerbong Pada Bagian Awal Rangkaian ---*/
void DelFirst(List *Q, address *x);

void DelVFirst(List *Q, infotype x);
/*-----------------------------------------------------*/

/*--- Melepaskan Gerbong 'x' setelah gerbong 'n' ---*/
void DelAfter(List *Q, address *x, address prec);

void DelVAfter(List *Q, infotype *x, infotype n);
/*--------------------------------------------------*/

/*--- Melepaskan Gerbong Pada Bagian Akhir Rangkaian ---*/
void DelLast(List *Q, address *x);

void DelVLast(List *Q, infotype *x);
/*------------------------------------------------------*/

/*****************************************************************************/

/*** PENCARIAN GERBONG PADA RANGKAIAN ***/

/*--- Mencari Alamat Gerbong 'x' Pada Rangkaian ---*/
address Search(List Q, infotype x);
/*------------------------------------------------*/

/*--- Mengecek Keberadaan Alamat Gerbong 'x' Pada Rangkaian ---*/
boolean FSearch(List Q, address x);
/*------------------------------------------------------*/

/****************************************/
#endif // CONTAINER_H_INCLUDED
