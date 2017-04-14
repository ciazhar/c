#include "pustaka.h"


int isKabisat(int year){
    int hasil;
    if(year%4==0){
        hasil=1;
    }
    else{
        hasil=0;
    }
    return hasil;
}
int hitungVokal(char text[]){
    int i;
    int hasil=0;
    int batas;
    batas=strlen(text);

    for(i=0;i<batas;i++){
        if(text[i]=='A'||text[i]=='a'||text[i]=='I'||text[i]=='i'||text[i]=='U'||text[i]=='u'||text[i]=='E'||text[i]=='e'||text[i]=='O'||text[i]=='o'){
            hasil++;
        }
    }
    return hasil;
}
int checkPrime(int num){
    int i,j=0;

    for(i=1;i<=num;i++){
        if(num%i==0){
            j++;
            }
    }
    if(j==2){
        return 1;
    }
    else{
        return 0;
    }
}
void charFrequency(char text[]){
    int i=0;
    int count[26]={};
    while (text[i]!='\0'){
        if(text[i]>='a'&&text[i]<='z'){
            count[text[i]-'a']++;
        }
        else if(text[i]>='A'&&text[i]<='Z'){
            count[text[i]-'A']++;
        }
        i++;
    }
    for(i=0;i<26;i++){
        if(count[i]!=0){
            printf("'%c' = %d\n",i+'a',count[i]);
        }
    }
}
void printDiamond(int row){
    int i;
    int j;
    int temp;
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<row;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=2*row-2*i-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}
