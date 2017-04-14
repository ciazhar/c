#include "pustaka.h"

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

void InsertAfter(List *L, address P, address Prec) {
    Next(P) = Next(Prec);
	Next(Prec) = P;
}

void InsertLast(List *L, address P) {
    address Last;

	if (ListEmpty(*L)) {
		InsertFirst(&(*L), P);
	} else {
		Last = First(*L);
		while(Next(Last) != Nil) {
			Last = Next(Last);
		}
		InsertAfter(&(*L), P, Last);
	}
}

void DelFirst(List *L, address *P) {
    (*P) = First(*L);
    First(*L) = Next(First(*L));
}

void DelLast(List *L, address *P) {
    address Last, PrecLast;

	Last = First(*L);
	PrecLast = Nil;
	while(Next(Last) != Nil) {
		PrecLast = Last;
		Last = Next(Last);
	}
	(*P) = Last;
	if(PrecLast == Nil) {
		First(*L) = Nil;
	} else {
		Next(PrecLast) = Nil;
	}
}

void DelAfter(List *L, address *Pdel, address Prec) {
    (*Pdel) = Next(Prec);
	Next(Prec) = Next(Next(Prec));
	Next(*Pdel) = Nil;
}

void DelP(List *L, infotype X) {
    address P, t;

	P = Search(*L, X);
	if(P != Nil) {
        if(P == First(*L)) {
            DelFirst(&(*L), &t);
        } else {
            P = SearchPrec(*L, X);
            DelAfter(&(*L), &t, P);
        }
        DeAllocTab(t);
	}
}

boolean FSearch(List L, address P) {
    address Pt;
	boolean Found = false;

	Pt = First(L);
	while(Pt != Nil && !Found) {
		if(P == Pt) {
			Found = true;
		} else {
			Pt = Next(Pt);
		}
	}
	return Found;
}

address Search(List L, infotype X) {
    address P;

	P = First(L);
	while(P != Nil && Info(P) != X) {
		P = Next(P);
	}
	return P;
}

address SearchPrec(List L, infotype X) {
    address P, Prec;

	P = Search(L, X);
	Prec = First(L);
	while(Next(Prec) != Nil && Next(Prec) != P) {
		Prec = Next(Prec);
	}
	if(Next(Prec) == P) {
		return Prec;
	} else {
		return Nil;
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

void InsVLast(List *L, infotype X) {
    address P;

	AllocTab(&P);
	if(P != Nil) {
	    Info(P) = X;
		InsertLast(&(*L), P);
	}
}

void DelVFirst(List *L, infotype *X) {
    address P;

	DelFirst(&(*L), &P);
	(*X) = Info(P);
	Next(P) = Nil;
	DeAllocTab(P);
}

void DelVLast(List *L, infotype *X) {
    address P;

	DelLast(&(*L), &P);
	(*X) = Info(P);
	DeAllocTab(P);
}

void PrintInfo(List L) {
    address P;

    printf("\nL : ");
	if(ListEmpty(L)) {
		printf("* List Kosong\n");
	} else {
		P = First(L);
		puts("\n=============Data===============");
        printf("[");
		do {
            if(Next(P)!=Nil){
                printf("%d -> ",Info(P));
            }
            else {
                printf("%d ", Info(P));
            }
			P = Next(P);
		} while (P != Nil);
		puts("]");
        puts("=============Data===============");
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

infotype Max(List L) {
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
    }
    else {
        return Q;
    }
    while(P!=Nil) {
        if(Q<=R) {
            Q = R;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
        }
    }

    return Q;
}

address AdrMax(List L) {
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    max = P;
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
        min = P;
    }
    else {
        return max;
    }
    while(P!=Nil) {
        if(Q<=R) {
            Q = R;
            max = min;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
            min = P;
        }
    }

    return max;
}

infotype Min(List L) {
    address P;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
    }
    else {
        return Q;
    }
    while(P!=Nil) {
        if(Q>=R) {
            Q = R;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
        }
    }

    return Q;
}

address AdrMin(List L) {
    address P, min, max;
    infotype Q, R;

    P = First(L);
    Q = Info(P);
    min = P;
    P = Next(P);
    if(P!=Nil) {
        R = Info(P);
        max = P;
    }
    else {
        return min;
    }
    while(P!=Nil) {
        if(Q>=R) {
            Q = R;
            min = max;
        }
        P = Next(P);
        if(P!=Nil) {
            R = Info(P);
            max = P;
        }
    }

    return min;
}

float Average(List L) {
    address P;
    float rata;
    int sum = 0;

    P = First(L);
    while(P!=Nil) {
        sum = sum + Info(P);
        P = Next(P);
    }

    rata = sum/(float)NbElmt(L);

    return rata;
}

void DelAll(List *L) {
    address P;

    P = First(*L);
    while(P!=Nil) {
        DeAllocTab(P);
        P = Next(P);
    }
}

void InversList(List *L) {
    address First, Last;
    int i, NB, temp, jum;

    First = First(*L);
    Last = First(*L);
    NB = NbElmt(*L);
    for(i=0;i<NbElmt(*L)/2;i++) {
        jum = NB;
        while(jum>1) {
            Last = Next(Last);
            jum--;
        }
        NB--;
        temp = Info(First);
        Info(First) = Info(Last);
        Info(Last) = temp;
        First = Next(First);
        Last = First(*L);
    }
}

List FInversList(List L) {
    List LInvers;

    CreateList(&LInvers);
    LInvers = L;
    InversList(&LInvers);

    if(ListEmpty(LInvers))
        DelAll(&LInvers);

    return LInvers;
}

void CopyList(List *L1, List *L2) {
    (*L2) = (*L1);
}

List FCopyList(List L) {
    List LCopy;

    CreateList(&LCopy);
    CopyList(&L,&LCopy);

    if(ListEmpty(LCopy))
        DelAll(&LCopy);

    return LCopy;
}

void CpAlokList(List Lin, List *Lout) {
    address P;

    P = First(Lin);
    CreateList(&(*Lout));
    while(P!=Nil) {
        if(P==First(Lin)) {
            InsVFirst(&(*Lout),Info(P));
        }
        else {
            InsVLast(&(*Lout),Info(P));
        }
        P = Next(P);
    }
    DelAll(&Lin);
}

void Konkat(List L1, List L2, List *L3) {
    address P;

    CreateList(&(*L3));
    P = First(L1);
    if(ListEmpty(L1)) {
        P = First(L2);
        while(P!=Nil) {
            InsVLast(&(*L3),Info(P));
        }
    } else {
        while(P!=Nil) {
            if(P==First(L1)) {
                InsVFirst(&(*L3),Info(P));
                P = Next(P);
            } else {
                InsVLast(&(*L3),Info(P));
                P = Next(P);
            }
        }
        P = First(L2);
        while(P!=Nil) {
            InsVLast(&(*L3),Info(P));
            P = Next(P);
        }
    }
}

void Konkat1(List *L1, List *L2, List *L3) {
    address P;
    int i;

    CreateList(&(*L3));
    Konkat(*L1,*L2,&(*L3));

    for(i=1;i<=NbElmt(*L1);i++) {
        DelVFirst(&(*L1),&P);
    }

    for(i=1;i<=NbElmt(*L2);i++) {
        DelVFirst(&(*L2),&P);
    }
}

void PecahList(List *L1, List *L2, List L) {
    address P;
    int l1, l2;

    l1 = NbElmt(L)/2;
    l2 = NbElmt(L) - l1;
    P = First(L);
    if(P==Nil) {
        First(*L1) = First(*L2);
    }
    else {
        while(l1>0) {
            if(P==First(L)) {
                InsVFirst(&(*L1),Info(P));
                l1--;
                P = Next(P);
            }
            else {
                InsVLast(&(*L1),Info(P));
                l1--;
                P = Next(P);
            }
        }
        InsVFirst(&(*L2),Info(P));
        l2--;
        P = Next(P);
        while(l2>0) {
            InsVLast(&(*L2),Info(P));
            l2--;
            P = Next(P);
        }
    }
}
