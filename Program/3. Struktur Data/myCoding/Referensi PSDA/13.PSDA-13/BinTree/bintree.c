#include "bintree.h"

BinTree Alokasi(infotype X) {
    BinTree P;

    P = (BinTree)malloc(sizeof(Node));
    if(P!=Nil) {
        Info(P) = X;
        Left(P) = Nil;
        Right(P) = Nil;
    }
    return P;
}

void Dealokasi(BinTree *P) {
    free(*P);
}

infotype GetAkar(BinTree P) {
    return (Info(P));
}

BinTree GetLeft(BinTree P) {
    return (Left(P));
}

BinTree GetRight(BinTree P) {
    return Right(P);
}

BinTree Tree(infotype Akar, BinTree L, BinTree R) {
    BinTree P;

    P = Alokasi(Akar);
    if(P!=Nil) {
        Left(P) = L;
        Right(P) = R;
    }
    return P;
}

void MakeTree(infotype Akar, BinTree L, BinTree R, BinTree *P) {
    *P = Alokasi(Akar);
    if((*P)!=Nil) {
        Info(*P) = Akar;
        Left(*P) = L;
        Right(*P) = R;
    }
}

boolean IsTreeEmpty(BinTree P) {
    return (P==Nil);
}

boolean IsOneElmt(BinTree P) {
    return (!(IsTreeEmpty(P)) && (Left(P)==Nil && Right(P)==Nil));
}

boolean IsUnerLeft(BinTree P) {
    return (Right(P)==Nil && Left(P)!=Nil);
}

boolean IsUnerRight(BinTree P) {
    return (Right(P)!=Nil && Left(P)==Nil);
}

boolean IsBiner(BinTree P) {
    return (Right(P)!=Nil && Left(P)!=Nil);
}

void PrintPreorder(BinTree P) {
    if(IsTreeEmpty(P))
        return;
    else {
        printf("%d ", Info(P));
        PrintPreorder(Left(P));
        PrintPreorder(Right(P));
    }
}

void PrintInorder(BinTree P) {
    if(IsTreeEmpty(P))
        return;
    else {
        PrintInorder(Left(P));
        printf("%d ", Info(P));
        PrintInorder(Right(P));
    }
}

void PrintPostorder(BinTree P) {
    if(IsTreeEmpty(P))
        return;
    else {
        PrintPostorder(Left(P));
        PrintPostorder(Right(P));
        printf("%d ", Info(P));
    }
}

void PrintTree(BinTree P, int h) {
    int i;

    if(IsTreeEmpty(P)) {
        return;
    } else {
        printf(" %d", Info(P));
        printf("\n");
        if(!IsTreeEmpty(Left(P))) {
            for(i=0;i<h;i++) {
                printf("");
                return (PrintTree(Left(P),h+1));
            }
        }
        if(!IsTreeEmpty(Right(P))) {
            for(i=0;i<h;i++) {
                printf("");
                return (PrintTree(Right(P),h+1));
            }
        }
    }
}

boolean Search(BinTree P, infotype X) {
    if(IsTreeEmpty(P))
        return false;
    else {
        if(Info(P)==X)
            return true;
        else
            return (Search(Left(P),X));
    }
}

int NbElmt(BinTree P) {
    if(IsTreeEmpty(P))
        return 0;
    else
        return (1 + NbElmt(Left(P)) + NbElmt(Right(P)));
}

int NbDaun(BinTree P) {
    if(IsOneElmt(P))
        return 1;
    else {
        if(IsUnerLeft(P))
            return (NbDaun(Left(P)));
        else if(IsUnerRight(P))
            return (NbDaun((Right(P))));
        else
            return (NbDaun(Left(P)) + NbDaun(Right(P)));
    }
}

boolean IsSkewLeft(BinTree P) {
    if(IsTreeEmpty(P))
        return true;
    else {
        if(!(IsTreeEmpty(Right(P))))
            return false;
        else
            return (IsSkewLeft(Left(P)));
    }
}

boolean IsSkewRight(BinTree P) {
    if(IsTreeEmpty(P))
        return true;
    else {
        if(!(IsTreeEmpty(Left(P))))
            return false;
        else
            return (IsSkewRight(Right(P)));
    }
}

int Level(BinTree P, infotype X) {
    if(IsOneElmt(P))
        return 1;
    else {
        if(IsUnerLeft(P))
            return (1 + Level(Left(P),X));
        else if(IsUnerRight(P))
            return (1 + Level(Right(P),X));
        else {
            if(Search(Left(P),X))
                return (1 + Level(Left(P),X));
            else
                return (1 + Level(Right(P),X));
        }
    }
}

void AddDaunTerkiri(BinTree *P, infotype X) {
    address N;

    if(IsTreeEmpty(*P)) {
        N = Alokasi(X);
        if(N!=Nil) {
            *P = N;
        }
    } else {
        return (AddDaunTerkiri(&(Left(*P)),X));
    }
}

void AddDaun(BinTree *P, infotype X, infotype Y, boolean Kiri) {
    address N;

    if(IsOneElmt(*P)) {
        if(Info(*P)==X) {
            N = Alokasi(Y);
            if(N!=Nil) {
                if(Kiri==true) {
                    Left(*P) = N;
                } else {
                    Right(*P) = N;
                }
            }
        }
    } else {
        if(IsUnerLeft(*P)) {
            return (AddDaun(&(Left(*P)),X,Y,Kiri));
        } else if(IsUnerRight(*P)) {
            return (AddDaun(&(Right(*P)),X,Y,Kiri));
        } else {
            return (AddDaun(&(Left(*P)),X,Y,Kiri));
            return (AddDaun(&(Right(*P)),X,Y,Kiri));
        }
    }
}

void DelDaunTerkiri(BinTree *P, infotype *X) {
    if(IsOneElmt(*P)) {
        *X = Info(*P);
        Dealokasi(&(*P));
        *P = Nil;
    } else {
        DelDaunTerkiri(&(Left(*P)),X);
    }
}

void DelDaun(BinTree *P, infotype X) {
    infotype *Y;

    if(IsTreeEmpty(*P)) {
        return;
    } else if(IsOneElmt(*P)) {
        if(Info(*P)==X) {
            *Y = Info(*P);
            Dealokasi(&(*P));
            *P = Nil;
        } else {
            return;
        }
    } else {
        DelDaun(&(Left(*P)),X);
        DelDaun(&(Right(*P)),X);
    }
}

addresList AlokListNode(infotype X) {
    addresList P;

    P = (addresList)malloc(sizeof(ListOfNode));
    if(P!=Nil) {
        InfoList(P) = X;
        NextList(P) = Nil;
    }
    return P;
}

void DealokListNode(addresList *P) {
    free(*P);
}

ListOfNode MakeListDaun(BinTree P) {
    addresList L = Nil;
    addresList T;

    if(IsTreeEmpty(P)) {
        return Nil;
    } else {
        if(IsOneElmt(P)) {
            T = AlokListNode(Info(P));
            if(L==Nil) {
                L = T;
            } else {
                NextList(T) = L;
                L = T;
            }
        } else {
            return (MakeListDaun(Left(P)));
            return (MakeListDaun(Right(P)));
        }
    }
    return L;
}

ListOfNode MakeListPreorder(BinTree P) {
    addresList L = Nil;
    addresList T;
    addresList last;

    if(IsTreeEmpty(P)) {
        return Nil;
    } else {
        T = AlokListNode(Info(P));
        if(L==Nil) {
            L = T;
        } else {
            last = L;
            while(NextList(last)!=Nil) {
                last = NextList(last);
            }
            NextList(last) = T;
        }
        return (MakeListPreorder(Left(P)));
        return (MakeListPreorder(Right(P)));
    }
    return L;
}

ListOfNode MakeListLevel(BinTree P, int N) {
    addresList L;
    addresList T;

    if(IsTreeEmpty(P)) {
        return Nil;
    } else {
        if(Level(P,Info(P))==N) {
            T = AlokListNode(Info(P));
            if(L==Nil) {
                L = T;
            } else {
                NextList(T) = L;
                L = T;
            }
        } else {
            return (MakeListLevel(Left(P),N));
            return (MakeListLevel(Right(P),N));
        }
    }
}

BinTree BuildBalanceTree(int n) {
    address P;
    BinTree L, R;
    infotype X;
    int nL, nR;

    if(n==0)
        return Nil;
    else {
        printf("Masukkan X: ");scanf("%d",&X);
        P = Alokasi(X);
        if(P!=Nil) {
            nL = n/2;
            nR = n - nL - 1;
            L = BuildBalanceTree(nL);
            R = BuildBalanceTree(nR);
            Left(P) = L;
            Right(P) = R;
        }
    }
    return P;
}
