#include"pustaka.h"

int cariX(int data[], int x, int n){
    if(n==0){
        if(data[n]==x){
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if(data[n]==x){
            return 1;
        }
        else {
            cariX(data,x,n-1);
        }
    }
}

int max2(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int recMax(int data[],int cur, int arrSize){
    int maks=data[cur];

    if(data[cur]>maks){
        maks=data[cur];
    }
    else{
        maks=data[cur+1];
    }
    if(cur<arrSize){
        recMax(data,cur+1,arrSize);
    }
    else {
        maks=0;
    }
    return maks;
}
