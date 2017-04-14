#include "pustaka.h"

int countArray(int data[]){
    int i;
    int hitung=0;

    for(i=0;i<10;i++){
        if(data[i]==0){
            hitung=hitung;
        }
        else{
            hitung++;
        }
    }
    return hitung;
}
int cekUrut(int data[]){
    int i;
    int check=0;
    int balikan;

    for(i=0;i<5;i++){
        if(data[i]<data[i+1]){
            check++;
        }
        else{
            break;
        }
    }
    if(check==4){
        balikan=1;
    }
    else {
        balikan=0;
    }

    return balikan;
}
void bubbleSort1(int data[]){
    int i,j,k,temp;
    for(i=0;i<=5-2;i++){
        for(k=0;k<5;k++){
                printf("%d  ",data[k]);
            }
            printf("\n");

        for(j=0;j<=5-2-i;j++){
            if(data[j+1]<data[j]){
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
        }
    }
}
void bubbleSort2(int data[]){
    int i,j,k,l,temp,check=0;
    for(i=0;i<=5-2;i++){
        for(k=0;k<5;k++){
            printf("%d  ",data[k]);
        }
        printf("\n");

        for(j=0;j<=5-2-i;j++){
            if(data[j+1]<data[j]){
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
            for(l=0;l<5;l++){
            if(data[l]<data[l+1]){
                check++;
            }
            else{
                break;
            }
            if(check==4){
                break;
            }
        }
        }


    }
}
