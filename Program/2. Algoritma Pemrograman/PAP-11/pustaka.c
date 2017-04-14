#include "pustaka.h"

pecahan makePecahan(int pemb, int peny){
    pecahan balikan;
    balikan.pembilang=pemb;
    balikan.penyebut=peny;
    return balikan;
}
void printPecahan(pecahan p){
    printf("%d/",p.pembilang);
    printf("%d\n",p.penyebut);
}
int pembilang(pecahan p){
    return p.pembilang;
}
int penyebut(pecahan p){
    return p.penyebut;
}
pecahan addPecahan(pecahan p1, pecahan p2){
    int newPembilang1,newPembilang2,newPenyebut;
    pecahan balikan;

    newPenyebut=p1.penyebut*p2.penyebut;
    newPembilang1=newPenyebut/p1.penyebut*p1.pembilang;
    newPembilang2=newPenyebut/p2.penyebut*p2.pembilang;

    balikan.pembilang=newPembilang1+newPembilang2;
    balikan.penyebut=newPenyebut;
    return balikan;
}
pecahan subPecahan(pecahan p1, pecahan p2){
    int newPembilang1,newPembilang2,newPenyebut;
    pecahan balikan;

    newPenyebut=p1.penyebut*p2.penyebut;
    newPembilang1=newPenyebut/p1.penyebut*p1.pembilang;
    newPembilang2=newPenyebut/p2.penyebut*p2.pembilang;

    balikan.pembilang=newPembilang1-newPembilang2;
    balikan.penyebut=newPenyebut;
    return balikan;
}
pecahan mulPecahan(pecahan p1, pecahan p2){
    pecahan balikan;

    balikan.pembilang=p1.pembilang*p2.pembilang;
    balikan.penyebut=p1.penyebut*p2.penyebut;
    return balikan;
}
pecahan divPecahan(pecahan p1, pecahan p2){
    pecahan balikan;
    int temp;

    temp=p2.pembilang;
    p2.pembilang=p2.penyebut;
    p2.penyebut=temp;

    balikan.pembilang=p1.pembilang*p2.pembilang;
    balikan.penyebut=p1.penyebut*p2.penyebut;
    return balikan;
}
float desimalPecahan(pecahan p){
    float fp;

    fp=p.pembilang/p.penyebut;
    return fp;
}
int isEqual(pecahan p1, pecahan p2){
    float fp1,fp2;

    fp1=p1.pembilang/p1.penyebut;
    fp2=p2.pembilang/p2.penyebut;
    if(fp1=fp2){
        return 1;
    }
    else {
        return 0;
    }
}
int isBigger(pecahan p1, pecahan p2){
    float fp1,fp2;

    fp1=p1.pembilang/p1.penyebut;
    fp2=p2.pembilang/p2.penyebut;
    if(fp1>fp2){
        return 1;
    }
    else {
        return 0;
    }
}
int isSmaller(pecahan p1, pecahan p2){
    float fp1,fp2;

    fp1=p1.pembilang/p1.penyebut;
    fp2=p2.pembilang/p2.penyebut;

    if(fp1<fp2){
        return 1;
    }
    else {
        return 0;
    }
}
