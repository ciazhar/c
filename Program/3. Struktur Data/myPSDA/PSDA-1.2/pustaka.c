#include <malloc.h>
#include "pustaka.h"
#include "boolean.h"

void CreateEmpty(Stack *S, int Size_){
/*
    Untuk mengosongkan seluruh nilai stack dan
    menentukan jumlah maksimal tumpukan
*/
    (*S).T=(infotype *) malloc((Size_ + 1) *sizeof(infotype));///alokasi ukuran T[]
	Top(*S)=Nil;
	Size(*S)=Size_;
}

void Destruct(Stack *S){
/*
    untuk menghapus seluruh stack
*/
    free((*S).T);///menghapus data di T[]
	Top(*S)=Nil;
	Size(*S)=0;
}
boolean IsEmpty(Stack S){
/*
    untuk mengecek stack kosong atau tidak
*/
    if(Top(S)==Nil){ ///mengecek Top di nil atau tidak
        return 1;
    }
    else {
        return 0;
    }
}
boolean IsFull(Stack S){
/*
    untuk mengecek stack penuh atau tidak
*/
    if(Top(S)==Size(S)){///mengecek Top ada di maxel tidak
        return 1;
    }
    else {
        return 0;
    }
}
void Push(Stack *S, infotype X){
/*
    menyisipkan elemen ke stack
*/
    if(IsFull(*S)){///cek full
        printf("Stack udah full\n");
    }
    else{
        Top(*S)++;///incremen top
        InfoTop(*S)=X;///ngisi infotop dengan x
    }
}
void Pop(Stack *S, infotype X){
/*
    mengambil elemen dari stack
*/
    if(IsEmpty(*S)){/// cek kosong
        printf("Stack udah kosong\n");
    }
    else{
        X=InfoTop(*S);
        Top(*S)--;
    }
}

void printStack (Stack S){
/*
    untuk mencetak stack
*/
    int i;
    printf("=====\n");
    for(i=Top(S); i>0; i--){
        if(Top(S)==i){
            printf("| %d | <<== TOP Stack\n",S.T[i]);
        }
        else{
            printf("| %d |\n",S.T[i]);
        }
    }
    printf("=====\n");
}
