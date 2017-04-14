#include "header.h"

address Alokasi (int X) {
    address P;

    P = (address)malloc(sizeof(ElmtList));
    if(P!=Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
}

void Dealokasi (address P) {
    free(P);
}

boolean IsEmpty (List L) {
    return (L==Nil);
}

boolean IsOneElmt (List L) {
    return ((!IsEmpty(L)) && (IsEmpty(Tail(L))));
}

int FirstElmt (List L) {
    return (Info(L));
}

List Tail (List L) {
    return (Next(L));
}

int LastElmt(List L) {
//    address P;
//
//    P = (L);
//    while(Next(P)!=Nil) {
//        P = Next(P);
//    }
//    return Info(P);
    if(IsOneElmt(L))
        return FirstElmt(L);
    else
        return LastElmt(Tail(L));
}

List Head(List L) {
    if(Next(L)==Nil) {
        return 0;
    } else {
        return (Konso(Head(Tail(L)),FirstElmt(L)));
    }
}

List Konso (List L, int e) {
    address P;

    P = Alokasi(e);
    if(P==Nil) {
        return L;
    }
    else {
        Next(P) = L;
    }

    return P;
}

List KonsB(List L, int e) {
    address P, Last;

    P = Alokasi(e);
    if(P==Nil) {
        return L;
    }
    else {
        if(IsEmpty(L)) {
            return L;
        }
        else {
            Last = L;
            while(Next(Last)!=Nil) {
                Last = Next(Last);
            }
            Next(Last) = P;
            return L;
        }
    }
}

void PrintList(List L) {
    if(IsEmpty(L))
        return;
    else {
        printf("%d ", Info(L));
        PrintList(Next(L));
    }
}

int NbElmt(List L) {
    if(IsEmpty(L))
        return 0;
    else {
        return (1+NbElmt(Tail(L)));
    }
}

List Copy(List L) {
    if(IsEmpty(L))
        return L;
    else {
        return (Konso(Tail(L),FirstElmt(L)));
    }
}

List Inverse(List L) {
    if(IsOneElmt(L))
        return L;
    else {
        return (KonsB(Inverse(Tail(L)),FirstElmt(L)));
    }
}

boolean IsMember(int X, List L) {
    if(IsEmpty(L))
        return false;
    else {
        if(FirstElmt(L)==X)
            return true;
        else
            IsMember(X,Tail(L));
    }
}

boolean IsEqual(List L1, List L2) {
    if(IsEmpty(L1) && (IsEmpty(L2)))
        return true;
    else if(IsEmpty(L1) && (!(IsEmpty(L2))))
        return false;
    else if((!(IsEmpty(L1))) && (IsEmpty(L2)))
        return false;
    else {
        if(FirstElmt(L1)==FirstElmt(L2))
            IsEqual(Tail(L1),Tail(L2));
        else
            return false;
    }
}

List Konkat(List L1, List L2) {
    if(IsEmpty(L1))
        return (Copy(L2));
    else
        return (Konso(FirstElmt(L1),Konkat(Tail(L1),L2)));
}

int ElmtKeN(int N, List L) {
    if(N==1)
        return (FirstElmt(L));
    else
        return ElmtKeN(Prec(N),Tail(L));
}

boolean IsFirst(List L, int X) {
    if(IsEmpty(L)) {
        return false;
    } else {
        if(FirstElmt(L)==X) {
            return true;
        } else {
            return (IsFirst(Head(L),X));
        }
    }
}

boolean IsLast(List L, int X) {
    if(IsEmpty(L))
        return false;
    else {
        if(LastElmt(L)==X) {
            return true;
        } else {
            return (IsLast(Tail(L),X));
        }
    }
}

boolean IsNbElmtN(List L, int N) {
    if(N==0) {
        if(IsEmpty(L))
            return true;
        else
            return false;
    }
    else {
        return (IsNbElmtN(Tail(L),Prec(N)));
    }
}

boolean IsInverse(List L1, List L2) {
    if(NbElmt(L1)==NbElmt(L2)) {
        if(IsEmpty(L1) && IsEmpty(L2)) {
            return true;
        } else {
            if(FirstElmt(L1)==LastElmt(L2))
                return (IsInverse(Tail(L1),Head(L2)));
            else
                return false;
        }
    } else
        return false;
}

boolean IsXElmtKeN(int X, int N, List L) {
    if(IsMember(X,L)) {
        if(N==1 && FirstElmt(L)==X) {
            return true;
        }
        else {
            return (IsXElmtKeN(X,Prec(N),Tail(L)));
        }
    }
    else
        return false;
}

int max2(int a, int b) {
    if(a>b)
        return a;
    else
        return b;
}

int MaxList(List L) {
    if(IsOneElmt(L))
        return FirstElmt(L);
    else
        return max2(FirstElmt(L),MaxList(Tail(L)));
}

int Dimensi(List L) {
    if(IsEmpty(L)) {
        return 0;
    } else {
        return (1 + Dimensi(Tail(L)));
    }
}

List ListPlus(List L1, List L2) {
    if(Dimensi(L1)==0 && Dimensi(L2)==0)
        return 0;
    else {
        if(Dimensi(L1)==Dimensi(L2)) {
            return (Konso(ListPlus(Tail(L1),Tail(L2)),(FirstElmt(L1)+FirstElmt(L2))));
        } else {
            return 0;
        }
    }
}

List Insert(List L, int X) {
    if(IsEmpty(L))
        Konso(L,X);
    else {
        if(X<=FirstElmt(L)) {
            Konso(L,X);
        } else {
            return (Konso(Insert(Tail(L),X),FirstElmt(L)));
        }
    }
}

List Insort(List L) {
    if(IsEmpty(L)) {
        return L;
    } else {
        return (Insert(Insort(Tail(L)),FirstElmt(L)));
    }
}

int HitungX(List L, int X) {
    if(IsEmpty(L))
        return 0;
    else {
        if(FirstElmt(L)==X)
            return (1 + HitungX(Tail(L),X));
        else
            return HitungX(Tail(L),X);
    }
}

int MaxNb(List L) {
    if(IsOneElmt(L))
        return 1;
    else
        return HitungX(L,MaxList(L));
}

void print_reverse (List L)
{
    if (IsEmpty(L))
    {
        printf("");
    }
    else
    {
        printf("%d ",LastElmt(L));
        print_reverse(Head(L));
    }
}
