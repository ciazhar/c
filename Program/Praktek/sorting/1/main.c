#include <stdio.h>
#include <stdlib.h>

void s1(int data[]);
void s2(int data[]);
void s3(int data[]);

int main()
{
    int datax[16]={31,47,28,75,14,90,62,98,97,65,88,73,19,17,45};

    s1(datax);
}

void s1(int data[]){
    int i=0,j=0,k;
    int mini;

    while(i<16){
        while(j<16){
                if(data[j]<data[j+1]){
                    mini=data[j];
                }
                j++;
        }
        data[i]=mini;
        i++;
    }
    for(k=0;k<16;k++){
        printf("%d ",data[j]);
    }
}
