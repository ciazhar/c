#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" = %d",powRec(2,5));
}

int powRec(int num1, int num2){
    int x;
    if(num2==0){
        x=1;
    }
    else{
        x=powRec(num1,num2-1)*num1;
    }
    return x;
}
/*
x=pow (2,4)*2
x=pow (2,3)*2*2
x=pow (2,2)*2*2*2
x=pow (2,1)*2*2*2*2
x=pow (2,0)*2*2*2*2*2
x=1*2*2*2*2*2*/
