#include "pustaka.h"

void printPascal(int row){
    int i,j,k,a=0;

    for(i=0;i<=row;i++){
        for(k=0;k<((2*row)-(2*i));k++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            if(j==0||i==j){
                a=1;
            }
            else {
                a=a*(i+1-j)/j;
            }
            printf("%5i",a);
        }
        printf("\n");
    }
}