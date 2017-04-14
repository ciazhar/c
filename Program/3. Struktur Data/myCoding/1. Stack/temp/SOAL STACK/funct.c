#include "stack.h"

void createempty (Stack *St)
{
    TOP(*St) = nil;
}

boolean isempty (Stack St)
{

    return (TOP(St) == nil);
}

boolean isfull (Stack St)
{
    return (TOP(St) == idxmax);
}

void push (Stack *St ,int x)
{
    TOP(*St)++;
    InfoTop(*St) = x;
}

void pop (Stack *St , int *x)
{
    *x = InfoTop(*St);
    TOP(*St)--;
}

void printStack(Stack S)
{
    int index;
    index = TOP(S);
    printf("********\n");
    while (index!=0)
    {
        printf("| %d |\n",S.T[index]);
        index--;
    }
    printf("********\n");
}
boolean IsTOPGenap (Stack S)
{
    /*
        Buatlah sebuah fungsi untuk menentukan apakah nilai dari elemen TOP berangka Genap ?
        jika Genap maka true , jika tidak false.
    */
    return (InfoTop(S) % 2 == 0);
}

void PushGanjil (Stack *St,int x)
{

    /*
        buatlah sebuh prosedur untuk menambahkan elemen yang hanya berangka Ganjil saja , jika tidak ganjil
        maka tidak akan di PUSH.
    */
    if (x % 2 == 1)
    {
        push(St,x);
    }
}

void SumGanjilGenap (Stack *S)
{
    /*
        buatlah sebuah prosedur untuk menghitung jumlah banyaknya Elemen pada STack yang genap dan ganjil
    */
    int i, sum_genap=0, sum_ganjil=0;
    while(!isempty(*S))
    {
        if(InfoTop(*S)%2 == 0)
        {
            sum_genap++;
        }
        else
        {
            sum_ganjil++;
        }
        pop(S,&i);
    }
    printf("Genap : %d\n",sum_genap);
    printf("Ganjil : %d\n",sum_ganjil);
}



