#include"jam.h"

boolean IsJValid (int H,int M,int S)
{
    if((H>=0&&H<=23)&&(M>=0&&M<=59)&&(S>=0&&S<=59))
        return true;
    else
        return false;
}

void MakeJam ()
{
    if(IsJValid(HH,MM,SS)==true)
    {
        printf("\nJam valid");
    }
    else
    {
        printf("\nJam tidak valid");
    }
}

void TulisJam ()
{
    printf("Inputkan Jam   = ");scanf("%d",&HH);
    printf("Inputkan Menit = ");scanf("%d",&MM);
    printf("Inputkan Detik = ");scanf("%d",&SS);
    if(IsJValid(HH,MM,SS)==false)
        {
        printf("\nTidak valid. Inputkan kembali.");
        printf("\nInputkan Jam (0-23)= ");scanf("%d",&HH);
        printf("Inputkan Menit (0-59)= ");scanf("%d",&MM);
        printf("Inputkan Detik (0-59)= ");scanf("%d",&SS);
        }
    printf("%d : %d : %d",HH,MM,SS);
}

int JamToDetik (int HH, int MM, int SS)
{
    long int detik;
    if(HH<24&&MM<60&&SS<60)
    {
        detik= (3600*HH) + (MM*60) + SS;
    }
    return detik;
}

void DetikToJam (int N)
{
    long int N1;
    if(N>=86400)
    {
        N1=N%86400;
        HH=N1/3600;
        MM=(N1%3600)/60;
        SS=(N1%3600)%60;
    }
    else
    {
        HH=N/3600;
        MM=(N%3600)/60;
        SS=(N%3600)%60;
    }
}

void JPlus (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    long int detik;
    detik=(HH1*3600)+(HH2*3600)+(MM1*60)+(MM2*60)+SS1+SS2;
    HH=detik/3600;
    MM=(detik%3600)/60;
    SS=detik%60;
}

void JMinus (int HH1, int MM1, int SS1, int HH2, int MM2, int SS2)
{
    long int detik;
    if((HH2>HH1)||(HH2==HH1&&MM2>MM1)||(HH2==HH1&&MM2==MM1&&SS2>SS1)||(HH1==HH2&&MM1==MM2&&SS1==SS2))
    {
        detik=(HH2*3600)-(HH1*3600)+(MM2*60)-(MM1*60)+SS2-SS1;
        HH=detik/3600;
        MM=(detik%3600)/60;
        SS=(detik%3600)%60;
    }
}

void NextDetik (int h, int m, int s)
{
    if(s==59)
    {
        HH=h;
        MM=m+1;
        SS=0;
    }
    else if(s==59&&m==59)
    {
        HH=h+1;
        MM=0;
        SS=0;
    }
    else if(s<=58)
    {
        HH=h;
        MM=m;
        SS=s+1;
    }
}

void NextNDetik (int h, int m, int s,int N)
{
    int detik;
    detik=s+N;
    if(detik>=60)
    {
        HH=h;
        MM=m+1;
        SS=detik-60;
    }
    else if(detik>=60&&m>=59)
    {
        HH=h+1;
        MM=0;
        SS=detik-60;
    }
    else
    {
        HH=h;
        MM=m;
        SS=s+N;
    }
}

void PrevDetik (int h, int m, int s)
{
    if(s==0)
    {
        HH=h;
        MM=m-1;
        SS=59;
    }
    else if(s==0&&m==0)
    {
        HH=h-1;
        MM=59;
        SS=59;
    }
    else if(s>=1)
    {
        HH=h;
        MM=m;
        SS=s-1;
    }
}

void PrevNDetik (int h, int m, int s, int N)
{
    int detik;
    detik=s-N;
    if(detik<0)
    {
        HH=h;
        MM=m-1;
        SS=60+detik;
    }
    else if(detik<0&&m<0)
    {
        HH=h-1;
        MM=59;
        SS=60+detik;
    }
    else if(s>N)
    {
        HH=h;
        MM=m;
        SS=s-N;
    }
}

int Durasi(int HH1, int MM1, int SS1, int HH2, int MM2,int SS2)
{
    long int detik;
    detik=(HH2*3600)-(HH1*3600)+(MM2*60)-(MM1*60)+(SS2-SS1);
    return detik;
}
