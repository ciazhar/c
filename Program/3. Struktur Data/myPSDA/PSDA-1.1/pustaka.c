#include "pustaka.h"
#include "boolean.h"

void CreateEmpty(Stack *S){
/*
    Untuk mengosongkan seluruh nilai stack
*/
    Top(*S)=Nil;///mengkondisikan top ke nil
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
    if(Top(S)==MaxEl){///mengecek Top ada di maxel tidak
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
void Pop(Stack *S, infotype *X){
/*
    mengambil elemen dari stack
*/
    if(IsEmpty(*S)){/// cek kosong
        printf("Stack udah kosong");
    }
    else{
        *X=InfoTop(*S);
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
