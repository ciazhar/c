#include <stdio.h>
#include <stdlib.h>
#include "jam.h"
#include "boolean.h"


int HH,MM,SS;



boolean IsJValid(int H, int M, int S)
{
    if(H>=0&&H<=23&&M>=0&&M<=59&&S>=0&&S<=59){
        return true;
    }
    else {
        return false;
    }
}
void MakeJam(int HH, int MM, int SS)
{
    int sisas,sisam,S,M;
    if(IsJValid(HH,MM,SS)){
        HH=HH;
        MM=MM;
        SS=SS;
    }
    else {
        S=SS%60;
        sisas=SS/60;
        SS=S;
        MM=sisas+MM;
        M=MM%60;
        sisam=MM/60;
        MM=M;
        HH=sisam+HH;
    }
}
int GetHour()
{
    HH=HH;
    return HH;
}
int GetMinute()
{
    MM=MM;
    return MM;
}
int GetSecond()
{
    SS=SS;
    return SS;
}
void SetHH(int *HH, int newHH)
{
    HH=newHH;
}
void SetMM(int *MM, int newMM)
{
    MM=newMM;
}
void SetSS(int *SS, int newSS)
{
    SS=newSS;
}
void BacaJam(int HH, int MM, int SS)
{
    int H,M,S;

    H=HH;
    M=MM;
    S=SS;
}
void Tulisjam()
{
    printf("%d:%d:%d",HH,MM,SS);
}
int JamToDetik (int HH, int MM, int SS)
{
    int detik,nilai_maksimum;

    detik=(3600*HH)+(60*MM)+SS;
    nilai_maksimum=(3600*23)+(60*59)+60;
    if(detik<=nilai_maksimum){
        return detik;
    }
    else return 0;
}
void DetikToJam(int N)
{
    int sHH;
    HH=N/3600;
    sHH=N%3600;
    MM=sHH/60;
    SS=sHH%60;

}
boolean JEQ(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    if(HH1=HH2){
        return true;
    }
    else return false;
}
boolean JNEQ(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    if(HH1!=HH2){
        return true;
    }
    else return false;
}
boolean JLT(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    if(HH1<HH2){
        return true;
    }
    else return false;
}
boolean JGT(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    if(HH1>HH2){
        return true;
    }
    else return false;
}
void JPlus(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    int H,M,S,m=0,h=0;
    H=HH1+HH2;
    M=MM1+MM2;
    S=SS1+SS2;

    if(S>=60&&M>=60){
        m=S/60;
        S=S-60;
        M=M+m;
        h=M/60;
        M=M-60;
        HH=H+h;
        MM=M;
        SS=S;
        }
    else if(S>=60&&M<59){
        m=S/60;
        S=S-60;
        HH=H;
        MM=M+m;
        SS=S;
        }
    else if(S<60&&M>=60){
        h=M/60;
        M=M-60;
        HH=H+h;
        MM=M;
        SS=S;
    }
    else  {
        HH=H;
        MM=M;
        SS=S;
    }
}

void JMinus(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    int selisih,sj;
    int jam1,jam2;
    jam1=(3600*HH1)+(60*MM1)+SS1;
    jam2=(3600*HH2)+(60*MM2)+SS2;

    if(jam1>jam2){
        selisih=jam1-jam2;
        HH=selisih/3600;
        sj=selisih%3600;
        MM=sj/60;
        SS=sj%60;
    }
    else {
        selisih=jam2-jam1;
        HH=selisih/3600;
        sj=selisih%3600;
        MM=sj/60;
        SS=sj%60;
    }
}
void NextDetik(int H, int M, int S)
{
    S=S+1;
    if(S>59&&M<59){
        SS=0;
        MM=M+1;
        HH=H;
    }
    else if(S>59&&M>=59){
        SS=0;
        MM=0;
        HH=HH+1;
    }
    else {
        SS=S;
        MM=M;
        HH=H;
    }
}
void NextNDetik(int H, int M, int S, int N)
{
    S=S+N;
    if(S>59&&M<59){
        SS=N-1;
        MM=M+1;
        HH=H;
    }
    else if(S>59&&M>=59){
        SS=N-1;
        MM=0;
        HH=H+1;
    }
    else {
        SS=S;
        MM=M;
        HH=H;
    }
}
void PrevDetik(int H, int M, int S)
{
    S=S-1;
    if(S<0&&M<=0){
        SS=59;
        MM=59;
        HH=H-1;
    }
    else if(SS<0&&MM>0){
        SS=59;
        MM=M-1;
        HH=H;
    }
    else {
        SS=S;
        MM=M;
        HH=H;
    }
}
void PrevNDetik(int H, int M, int S, int N)
{
    S=S-N;
    if(S<0&&M<=0){
        SS=60-N;
        MM=59;
        HH=H-1;
    }
    else if(SS<0&&MM>0){
        SS=59;
        MM=M-1;
        HH=H;
    }
    else {
        SS=S;
        MM=M;
        HH=H;
    }
}

int Durasi(int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    int detik1,detik2,durasi;
    detik1=(3600*HH1)+(60*MM1)+SS1;
    detik2=(3600*HH2)+(60*MM2)+SS2;
    durasi=detik2-detik1;
    return durasi;
}
