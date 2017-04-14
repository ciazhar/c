#include "pustaka.h"

void printPrimes(int num){
    int i,j,k=0;

    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                k++;
            }
        }
        if(k==2){
            printf("%d, ",i);
        }
        k=0;
    }
}