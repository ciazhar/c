#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

# define Nil NULL

typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    int info;
    address next;
} ElmtList;

typedef address List;

#define Info(P) (P)->info
#define Next(P) (P)->next
#define Prec(n) (n-1)

///
address Alokasi (int X);
void Dealokasi (address P);
///
List Konso (List L, int e);
List KonsB(List L, int e);
///
int FirstElmt (List L);
List Tail (List L);
int LastElmt(List L);
List Head(List L);
///
boolean IsEmpty (List L);
boolean IsOneElmt (List L);
///
///islistint
///
boolean IsEqual(List L1, List L2);
///
int NbElmt(List L);
int ElmtKeN(int N, List L);
List Copy(List L);
List Inverse(List L);
List Konkat(List L1, List L2);
///
boolean IsMember(int X, List L);
boolean IsFirst(List L, int X);
boolean IsLast(List L, int X);
boolean IsNbElmtN(List L, int N);
boolean IsInverse(List L1, List L2);
boolean IsXElmtKeN(int X, int N, List L);
///
int max2(int a, int b);
int MaxList(List L);
int Dimensi(List L);
List ListPlus(List L1, List L2);
List Insort(List L);
List Insert(List L, int X);
int HitungX(List L, int X);
int MaxNb(List L);
///
void PrintList(List L);
