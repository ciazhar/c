#include "pustaka.h"

int binarySearch(int angka,int data[]){
    int i=0;
    int j=angka-1;
    int k;
    while(i<=j){
        k=((i+j)/2);
        if(angka==data[k]){
            return 1;
        }
        else if(angka<data[k]){
            j=k-1;
        }
        else{
            i=k+1;
        }
    }
    return 0;
}
int searchWord(char word[],char text[]){
    int batasword=strlen(word);
    int batastext=strlen(text);
    int batas=batastext-batasword;
    int i=0,j=0,hitung=0;

    while(j<batastext){
        if(word[i]==text[j]){
            int I=i, J=j;
            while(I<batasword){
                if(word[I]==text[J]){
                    hitung++;
                }
                I++;
                J++;
            }
            if(hitung==batasword){
                return 1;
                break;
            }
            else{
                I=0;
                J=0;
                j++;
                hitung=0;
            }
        }
        else{
            j++;
        }
    }
return 0;
}
