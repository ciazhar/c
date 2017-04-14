#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TNode *elemen;
typedef struct TNode{
    char nama[10];
    elemen NextPosition;
    elemen NextPlayer;
}TNode;



typedef struct{
    elemen CurrentPosition;
    elemen Striker;
    elemen Midfield;
    elemen Defender;
    elemen CurrentStriker;
    elemen CurrentMidfield;
    elemen CurrentDefender;
}List;


#define Nama(P) (P)->nama
#define NextPosition(P) (P)->NextPosition
#define NextPlayer(P) (P)->NextPlayer
#define CurrentPosition(L) (L).CurrentPosition
#define Striker(L) (L).Striker
#define Midfield(L) (L).Midfield
#define Defender(L) (L).Defender
#define CurrentStriker(L) (L).CurrentStriker
#define CurrentMidfield(L) (L).CurrentMidfield
#define CurrentDefender(L) (L).CurrentDefender
#define Nil NULL

void CreateTeam(List *L);
elemen CreatePosition(List *L,char s[]);
void TambahStriker(List *L, char s[]);
void HapusStriker(List *L);
void CetakStriker(List L);
void TambahMidfield(List *L, char s[]);
void HapusMidfield(List *L);
void CetakMidfield(List L);
void TambahDefender(List *L, char s[]);
void HapusDefender(List *L);
void CetakDefender(List L);
void Cetak(List L);
void TambahBelakangPosition(List *L,char s[]);
void HapusPosition(List *L, char s[]);
