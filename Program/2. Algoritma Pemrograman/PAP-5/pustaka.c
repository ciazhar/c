#include "pustaka.h"

int sequentSearch(int angka, int data[]){
    int i;
    int balikan=0;

    for(i=0;data[i]!='\0';i++){
        if(data[i]==angka){
            balikan=1;
        }
    }
    return balikan;
}
int isInverse(int list1[], int list2[]){
    int batas1=sizeof(list1);
    int batas2=sizeof(list2);
    int m, n=batas2-1;

    m=1;
    while(m<batas1 && list1[m] != list2[n]){
        m+=1;
        n--;
    }
    if(list1[m] == list2[n]){
        return 1;
    }
    else
        return 0;
}
void minMax(int data[],int *Min,int *Max){
    int i,batas=0;
    *Min=999999;
    *Max=0;

    for(i=0;i<6;i++){
        if(data[i]!='\0'){
            batas++;
        }
    }
    for(i=0;i<batas;i++){
        if(data[i]>*Max){
            *Max=data[i];
        }
        if(data[i]<*Min){
            *Min=data[i];
        }
    }
}

int minMaxGap(int data[]){
    int i,gap;
    int batas=0;
    int Min=999999;
    int Max=0;

    for(i=0;i<6;i++){
        if(data[i]!='\0'){
            batas++;
        }
    }
    for(i=0;i<batas;i++){
        if(data[i]>Max){
            Max=data[i];
        }
        if(data[i]<Min){
            Min=data[i];
        }
    }
    gap=Max-Min;
    return Max-Min;
}
int atleast(char huruf, int jml, char teks[]){
    int i,hitung=0;

    for(i=0;teks[i]!='\0';i++){
        if(teks[i]==huruf){
            hitung++;
        }
    }
    if(hitung>=jml){
        return 1;
    }
    else{
        return 0;
    }

}
