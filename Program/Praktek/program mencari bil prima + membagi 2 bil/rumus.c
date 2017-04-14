#include "rumus.h"

int isPrima(int num){
    int i,j=0;
    int hasil;

    for(i=1;i<=num;i++){
        if(num%i==0){
            j++;
            }
    }
    if(j==2){
        hasil=1;
    }
    else{
        hasil=0;
    }

    return hasil;
}
void arrayUrutdiv2(int arr[],int batas){
    int i,j,k,temp;
    for(i=0;i<=batas-2;i++){
        for(j=0;j<=batas-2-i;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nArray Setelah Sorting : \n");
    for(i=0;i<batas;i++){
        printf("Array ke %d = %d\n",i+1,arr[i]/2);
    }
}

