#include "drive.h"

void ResetTanggal()
{
    DD=1, MM=1, YY=1901;
}
boolean IsTanggalValid(int D, int M, int Y)
{
    if (D>=1 && D<=31)
    {
        if (M>=1 && M<=12)
            {
                if (Y>0)
                {
                    return true;
                }
            }
    }
     else
            return false;
}
boolean IsKabisat(int Y)
{
    if ((Y%4==0 && Y%100==0) || (Y%400==0))
        return true;
    else
        return false;
}
void MakeTANGGAL(int h, int b, int t)
{
    if (IsTanggalValid(h, b, t))
    {
        DD=h;MM=b;YY=t;
    }
    else
        ResetTanggal();
}
void BacaTANGGAL()
{
    int h, b, t;
    printf("Masukkan tanggal [DD MM YYYY] : ");scanf("%2d %2d %4d", &h, &b, &t);
    MakeTANGGAL(h, b, t);
}
void TulisTANGGAL()
{
    printf("%d/%d/%d\n", DD, MM, YY);
}
int HariKe(int h,int b,int t)
{
    int i;
    int sum=0;
    for(i=1;i<b;i++)
    {
        sum=sum+DayofMonth(i,t);
    }
    return (sum+h);
}
int DayofMonth(int m,int y)
{
    int d;
        if(m==2)
        {
            if(IsKabisat(y)==true) d=29;
            else return 28;
        }
        else if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)) d=31;
        else if ((m==4)||(m==6)||(m==9)||(m==11)) d=30;
        return d;
}
void NextDay (int h,int b,int t)
{
    if ((h==31)&&(b==12)) MakeTANGGAL(1,1,t+1);
    else if(h==(DayofMonth(b,t))) MakeTANGGAL(1,b+1,t);
    else MakeTANGGAL(h+1,b,t);
}
void PrevDay (int h,int b,int t)
{
    if ((h==1)&&(b==1)) MakeTANGGAL(31,12,t-1);
    else if(h==1) MakeTANGGAL(DayofMonth(b-1,t),b-1,t);
    else MakeTANGGAL(h-1,b,t);
}
void NextNDay (int h,int b,int t,int N)
{
    int i=0;
    while(i<N)
    {
        if ((h==31)&&(b==12))
        {
            h=1;b=1;t=t+1;
        }
        else if(h==(DayofMonth(b,t)))
        {
            h=1;b=b+1;
        }
        else h=h+1;
        i++;
    }
    MakeTANGGAL(h,b,t);
}
void PrevNDay (int h,int b,int t,int N)
{
    int i=0;
    while(i<N)
    {
        if ((h==1)&&(b==1))
        {
            h=31;b=12;t=t-1;
        }
        else if(h==1)
        {
            h=DayofMonth(b-1,t);b=b-1;
        }
        else h=h-1;
        i++;
    }
    MakeTANGGAL(h,b,t);
}
boolean IsEqD(int h1,int b1,int t1,int h2,int b2,int t2)
{
    if(h1==h2 && b1==b2 && t1==t2)
        return true;
    else
        return false;
}
boolean IsBefore(int h1,int b1,int t1,int h2,int b2,int t2)
{
    if(t1>t2)
        return false;
    else if(b1>b2)
        return false;
    else if(h1>h2)
        return false;
    else return
        true;
}
boolean IsAfter(int h1,int b1,int t1,int h2,int b2,int t2)
{
    if(t1<t2)
        return false;
    else if(b1<b2)
        return false;
    else if(h1<h2)
        return false;
    else return
        true;
}
