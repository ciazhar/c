#include "header.h"

void CreateEmpty(BinTree *P){
    *P=Nil;
}
address Alokasi(int X){
    address P=(address)malloc(sizeof(tnode));
    if(P!=Nil){
        info(P)=X;
        Left(P)=Nil;
        Right(P)=Nil;
    }
    return P;
}

void DeAlokasi(address P){
    free(P);
}

infotype GetAkar(BinTree P){
    return info(P);
}

infotype GetLeft(BinTree P){
    return Left(P);
}

infotype GetRight(BinTree P){
    return Right(P);
}

boolean IsEmpty(BinTree P){
    return (P==Nil);
}

void InsertNode(BinTree *P,infotype X){
    if(IsEmpty(*P)){
        *P=Alokasi(X);
    }else{
        if(X <= info(*P)){
            InsertNode(&(Left(*P)),X);
        }else{
            InsertNode(&(Right(*P)),X);
        }
    }
}

void PrintInOrder(BinTree P){
    if(IsEmpty(P)){
        return;
    }else{
        PrintInOrder(Left(P));
        printf("%d ",info(P));
        PrintInOrder(Right(P));
    }

}
void PrintPreOrder(BinTree P){
    if(IsEmpty(P)){
        return;
    }else{
        printf("%d ",info(P));
        PrintInOrder(Left(P));
        PrintInOrder(Right(P));
    }

}

void PrintPostOrder(BinTree P){
    if(IsEmpty(P)){
        return;
    }else{
        PrintInOrder(Left(P));
        PrintInOrder(Right(P));
        printf("%d ",info(P));
    }

}
