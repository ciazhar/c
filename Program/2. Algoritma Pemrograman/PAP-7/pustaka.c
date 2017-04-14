#include "pustaka.h"

int addRec(int num1, int num2){
    int x;
    if(num2!=0){
        printf("%d + ",1);
        x=addRec(num1,num2-1)+1;
    }
    else{
        x=num1;
        printf("%d",num1);
    }
    return x;
}

int subRec(int num1,int num2){
    int x;
    if(num2!=0){
        printf("- %d ",1);
        x=(subRec(num1,num2-1))-1;
    }
    else{
        printf("+ %d",num1);
        x=num1;
    }
    return x;
}
int mulRec(int num1,int num2){
    int x;
    if(num2==0){
        x=0;
    }
    else{
        x=mulRec(num1,num2-1)+num1;
        printf("+ %d ",num1);
    }
    return x;
}
int divRec(int num1,int num2){
    int x;
    if(num1==0){
        x=0;
    }
    else{
        x=divRec(num1-num2,num2)+1;
        printf("- %d ",num2);
    }
    return x;
}
int powRec(int num1, int num2){
    int x;
    if(num2==0){
        x=1;
        printf("%d ",x);
    }
    else{
        x=powRec(num1,num2-1)*num1;
        printf("x %d ",num1);
    }
    return x;
}
int factorial(int number){
    int x;
    if(number==0){
        x=1;
    }
    else {
        printf("%d x ",number);
        x=number*factorial(number-1);
    }
    return x;
}
int fibonacci(int number){
    int x;

    if(number==0){
        x=0;
    }
    else if(number==1){
        x=1;
    }
    else{
        printf("%d,",1);
        x=fibonacci(number-2)+fibonacci(number-1);
        printf("%d,",x);
    }
    return x;
}
int sumTransversal(int data[],int cur){
    int x;
    if(data[cur]==0){
        x = 0;
    }
    else {
        x = sumTransversal(data,cur+1)+data[cur];
    }
    return x;
}

