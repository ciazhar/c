#include "pustaka.h"

void swapValue(int *num1, int *num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void changeValue(int *target, int num1, int num2){
    *target=num1+num2;
}
void initDynArray(int *arrData, int size){
    int i=0;

    while(i<size){
        arrData[i]=i+1;
        printf("%d",arrData[i]);
        if(i<size-1){
            printf(", ");
        }
        i=i+1;
    }
}
void printArray(int *arrData, int size){
    int i;
    i=0;

    while(i<size){
        printf("%d",arrData[i]);
        if(i<size-1){
            printf(" - ");
        }
        i=i+1;
    }
}
void putAverage(float *avg, int *arrData, int size){
    int sum=0;
    int i=0;

    while(i<size){
        sum=arrData[i]+sum;
        i=i+1;
    }
    *avg=sum/i;
    printf("%.2f\n",*avg);
}


