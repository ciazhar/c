#include "pustaka.h"

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
boolean IsInfoTopGenap(Stack S){
/*
    mengecek apakah nilai tumpukan paling atas bernilai
    genap
*/
    int i;
    for(i=Top(S); i>0; i--){
        if(S.T[i]%2==0){
            return 1;
        }
        else {
            return 0;
        }
    }
}

int SumOfBlack(Stack S){
/*
    menjumlahkan nilai tumpukan berwarna gelap, liat soal
*/
    int i;
    int sum=0;
    for(i=Top(S); i>0; i--){
        if(i%2==0){
            sum=sum+S.T[i];
        }
        else {
            continue;
        }
    }
    return sum;
}

void ChangeInfoTop(Stack *S, infotype X){
/*
        untuk menjumlahkan infotop dengan x
*/
    int i;
    for(i=Top(*S); i>0; i--){
        if(Top(*S)==i){
            (*S).T[i]=(*S).T[i]+X;
        }
        else {
            continue;
        }
    }
}
boolean IsInfotopSameWithX(Stack S, infotype X){
/*
    mengecek apakah infotop = x
*/
    return (InfoTop(S)==X);
}
void PushGanjil (Stack *St,int x)
{

    /*
        buatlah sebuh prosedur untuk menambahkan elemen yang hanya berangka Ganjil saja , jika tidak ganjil
        maka tidak akan di PUSH.
    */
    if (x % 2 == 1)
    {
        Push(St,x);
    }
}

void SumGanjilGenap (Stack *S)
{
    /*
        buatlah sebuah prosedur untuk menghitung jumlah banyaknya Elemen pada STack yang genap dan ganjil
    */
    int i, sum_genap=0, sum_ganjil=0;
    while(!IsEmpty(*S))
    {
        if(InfoTop(*S)%2 == 0)
        {
            sum_genap++;
        }
        else
        {
            sum_ganjil++;
        }
        Pop(S,&i);
    }
    printf("Genap : %d\n",sum_genap);
    printf("Ganjil : %d\n",sum_ganjil);
}
