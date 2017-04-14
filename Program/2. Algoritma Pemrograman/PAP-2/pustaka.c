#include "pustaka.h"

void swapNumber(int *num1, int *num2){
    int temp;

    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int sumOfDigits(int digit){
    int sum,sat,pul,rat,rib,pulrib,ratrib,jut;

    ///Ubah digit mjd digit[]
    ///looping digit[0]sampe batas
    if(digit<10000000&&digit>=1000000){
        jut=digit/1000000;
    }
    else {
        jut=0;
    }
    digit=digit%1000000;
    if(digit<100000&&digit>=100000){
        ratrib=digit/100000;
    }
    else {
        ratrib=0;
    }
    digit=digit%100000;
    if(digit<100000&&digit>=10000){
        pulrib=digit/10000;
    }
    else {
        pulrib=0;
    }
    digit=digit%10000;
    if(digit<10000&&digit>=1000){
        rib=digit/1000;
    }
    else {
        rib=0;
    }
    digit=digit%1000;
    if(digit<1000&&digit>=100){
        rat=digit/100;
    }
    else {
        rat=0;
    }
    digit=digit%100;
    if(digit<100&&digit>=10){
        pul=digit/10;
    }
    else {
        pul=0;
    }
    digit=digit%10;
    if(digit<10&&digit>=1){
        sat=digit/1;
    }
    else {
        sat=0;
    }
    sum=sat+pul+rat+rib+pulrib+ratrib+jut;

    return sum;
}
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
int textPalindrome(char text[]){
    int batas=strlen(text);
    int i=0;
    int j=batas-1;
    int hitung=0;
    while(text[i]!='\0'){
        if(text[i]==text[j]){
            hitung++;
        }
        i++;
        j--;
    }
    if(hitung==batas){
        return 1;
    }
    else{
        return 0;
    }
}
int numPalindrome(int num){
    ///Ubah num menjadi array
    ///pake looping

    char numstr[300]={};
    char temp[300]={};
    sprintf(numstr,"%d",num);

    strcpy(temp,numstr);
    strrev(temp);

    if(strcmp(numstr,temp)==0){
        return 1;
    }
    else {
        return 0;
    }
}
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
            printf("%4i",a);
        }
        printf("\n");
    }
}
