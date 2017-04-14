#include <malloc.h>
#include "pustaka.h"
#include "boolean.h"

void CreateEmpty(Stack *S, int Size){
/*
    Untuk mengosongkan seluruh nilai stack dan
    menentukan jumlah maksimal tumpukan
*/
    (*S).T=(infotype) malloc((Size + 1) *sizeof(infotype));///alokasi ukuran T[]
	Top(*S)=Nil;
	Size(*S)=Size;
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
        printf("Stack udah full");
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
        printf("Stack udah kosong");
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
    if(IsEmpty(S)){
        printf("Stack Kosong\n");
    }
    else{
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
}
/*int nbelmt(Stack S){
    int i=0;
    address P= S.TOP;
    while(P!=Nil){
        i++;
        P=P->next;
    }
    return i;
}
int jumlahganjil(Stack S){
    int i=nbelmt(S);
    int k=0;
    address P=S.TOP;
    while(i!=0){
        if(i%2!=0){
            k=k+P->info;
        }
        i--;
        P=P->next;
    }
    return k;
}
int jumlahgenap(Stack S){
    int i=nbelmt(S);
    int k=0;
    address P=S.TOP;
    while(i!=0){
        if(i%2==0){
            k=k+P->info;
        }
        i--;
        P=P->next;
    }
    return k;
}
int sisastack(Stack S,int X){
    int i=0;
    address P= S.TOP;
    while(P->info!=X){
        P=P->next;
    }
    P=P->next;
    while(P!=Nil){
        i++;
        P=P->next;
    }
    return i;
}
*/
