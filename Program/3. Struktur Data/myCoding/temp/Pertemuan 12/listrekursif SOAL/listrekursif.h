#ifndef LISTREKURSIF_H_INCLUDED
#define LISTREKURSIF_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

# define Nil NULL

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    infotype info;
    address next;
} ElmtList;

typedef address List;

/* Selektor */
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prec(n) (n-1)

/* Manajemen Memori */
address Alokasi (infotype X);
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
void Dealokasi (address P);
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/* Pemeriksaan Kondisi List */
int IsEmpty (List L);
/* Mengirimkan 1 jika L kosong dan 0 jika L tidak kosong */
int IsOneElmt (List L);
/* Mengirimkan 1 jika L berisi 1 elemen dan 0 jika > 1 elemen atau kosong */
/* Primitif-Primitif Pemrosesan List */
infotype FirstElmt (List L);
/* Mengirimkan elemen pertama sebuah list L yang tidak kosong */
List Tail (List L);
/* Mengirimkan list L tanpa elemen pertamanya, mungkin menjadi list kosong */
List LastElmt(List L);
/*Menghasilkan elemen terakhir list L*/
List Head(List L);
/*Menghasilkan list tanpa elemen terakhir list L*/
List Konso (List L, infotype e);
/* Mengirimkan list L dengan tambahan e sebagai elemen pertamanya. e dialokasi
terlebih dahulu. Jika alokasi gagal, mengirimkan L */
/* Fungsi dan Prosedur Lain */

List KonsB(List L, infotype e);
void PrintList(List L);
int NbElmt(List L);
List CopyList(List L);
boolean IsMember(infotype X, List L);
List Inverse(List L);
boolean IsEqual(List L1, List L2);
List Konkat(List L1, List L2);
int ElmtKeN(int N, List L);
boolean IsFirst(List L, infotype X);
boolean IsLast(List L, infotype X);
boolean IsNbElmtN(List L, int N);
boolean IsInverse(List L1, List L2);
boolean IsXElmtKeN(infotype X, int N, List L);
int max2(int a, int b);
int MaxList(List L);
int Dimensi(List L);
List ListPlus(List L1, List L2);
List Insert(List L, infotype X);
List Insort(List L);
int HitungX(List L, infotype X);
int MaxNb(List L);

int CountKelipatanX(List L, infotype X);
int FindFirstGenap(List L);
List MakeAllGanjil(List L);


int CountGenap (List L);


#endif // LISTREKURSIF_H_INCLUDED
