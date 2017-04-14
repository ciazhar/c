#include "list.h"

boolean MemFull() {
    return FirstAvail == Nil;
}

void InitTab() {
    address P;

	for(P = IndexMin; P < IndexMax; P++) {
		Next(P) = P + 1;
	}
	Next(IndexMax) = Nil;
	FirstAvail = IndexMin;
}

void AllocTab(address *P) {

    if(MemFull()) {
        (*P) = Nil;
        printf("Tidak tersedia lagi elemen siap pakai\n");
    } else {
        (*P) = FirstAvail;
        FirstAvail = Next(FirstAvail);
    }
}

void DeAllocTab(address P) {
    Next(P) = FirstAvail;
    FirstAvail = P;
}

boolean ListEmpty(List L) {
    return First(L) == Nil;
}

void CreateList(List *L) {
    First(*L) = Nil;
}

void InsertFirst(List *L, address P) {
    if(ListEmpty(*L)) {
        Next(P) = Nil;
        First(*L) = P;
    } else {
        Next(P) = First(*L);
        First(*L) = P;
    }
}

void InsVFirst(List *L, infotype X) {
    address P;

	AllocTab(&P);
	if(P != Nil) {
	    Info(P) = X;
		InsertFirst(&(*L), P);
	}
}

void PrintInfo(List L) {
    address P;

    printf("\nL : ");
	if(ListEmpty(L)) {
		printf("* List Kosong\n");
	} else {
		P = First(L);
		do {
			printf("%d ", Info(P));
			P = Next(P);
		} while (P != Nil);
	}
	printf("\n");
}

int NbElmt(List L) {
    address P;
    int jum=0;

    if(ListEmpty(L))
        return jum;
    else {
        P = First(L);
        while(P!=Nil) {
            jum = jum + 1;
            P = Next(P);
        }
    }

    return jum;
}

/* Soal Pemahaman */
void SwapFirstLast(List *L)
{
    infotype temp;
    address P;
    address tempP;

    P = First(*L);
    address I = First(*L);
		while (P != Nil){
            tempP = P;
			P = Next(P);
		}
    temp=Info(tempP);
    //printf("%d",temp);
    Info(tempP)=Info(I);
    Info(I)=temp;
}
