#include "pustaka.h"

void selectionSort1(int data[]){
    int i,j,k,min,temp;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(data[j]<data[min]){
                min=j;
            }
        }
        temp=data[i];
        data[i]=data[min];
        data[min]=temp;
    }
    printf("\nArray setelah sort\n");
    for(i=0;i<n;i++){
        printf("%d,",data[i]);
    }
}
int BinarySearch(int A[],int K){
    int l=0,r=n-1,m;
    while(l<=r){
        m=((l+r)/2);
        if(K==A[m]){
            return m;
        }
        else if(K<A[m]){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}

void BinarySearchProsedur(int A[],int K){
    int l=0,r=n-1,m;
    while(l<=r){
        m=((l+r)/2);
        if(K==A[m]){
            printf("Angka %d ada di indeks %d",K,m);
            break;
        }
        else if(K<A[m]){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    if(l>r){
        printf("Angka %d ada di indeks 0",K);
    }
}
