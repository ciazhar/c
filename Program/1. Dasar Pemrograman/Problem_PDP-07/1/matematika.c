#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

int Max2(int a, int b)
{
    int mx;
    if (a>b){
        mx=a;
    }
    else {
        mx=b;
    }
    return (mx);
}

int Max3(int a, int b, int c)
{
    int mx;
    if (a>b&&a>c){
        mx=a;
    }
    else if (b>a&&b>c){
        mx=b;
    }
    else {
        mx=c;
    }
    return (mx);
}
int Max4(int a, int b, int c, int d)
{
    int mx;
    if(a>b&&a>c&&a>d){
        mx=a;
    }
    else if(b>a&&b>c&&b>d){
        mx=b;
    }
    else if(c>a&&c>b&&c>d){
        mx=c;
    }
    else {
        mx=d;
    }
}
boolean IsGanjil(int N)
{
    boolean bole;
    if(N%2==1){
        bole=true;
    }
    else {
        bole=false;
    }
}
boolean IsPrima(int N)
{
    int a,jml=0;
    for (a=1;a<=N;a++){
        if(N%a==0){
            jml=jml+1;
        }
    }

    if(jml==2){
        return true;
    }
    else {
        return false;
    }
}
int NumOfPrima(int N)
{
    int a,jml=0;

    for (a=2;a<=N;a++){
        if(IsPrima(a)==true){
            jml=jml+1;
        }
    }
    return (jml);
}
int Pangkat(int basis, int eksp)
{
    int a,kali=1;
    for(a=0;a<eksp;a++){
        kali=kali*basis;
    }
    return kali;
}
int SumOfN(int N)
{
    int a,sum=0;
    for(a=0;a<=N;a++){
        sum=sum+a;
    }
    return sum;
}
int ProductOfN(int N)
{
    int a,cross=1;
    for(a=1;a<=N;a++){
        cross=cross*a;
    }
    return cross;
}
int Average(int N, int count)
{
    int a,sum=0;
    float ave;
    for(a=0;a<=N;a++){
        sum=sum+a;
    }
    ave=sum/count;
    return ave;
}
int AveSumOfN(int N)
{
    int a,sum=0;
    float ave;
    for(a=0;a<=N;a++){
        sum=sum+a;
    }
    ave=sum/N;
    return ave;
}
int AveProdOfN(int N)
{
    int a,cross=1;
    float ave;
    for(a=1;a<=N;a++){
        cross=cross*a;
    }
    ave=cross/N;
    return ave;
}
int FPB(int n, int m)
{
    int x,y,r;
    if(0<n<m){
        x=m;
        y=n;
    }
    else{
        x=n;
        y=m;
    }
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
        }
    return m;
}
float C2F(float C)
{
    float F;
    F=(9/5*C)+32;
    return F;
}
float F2C(float F)
{
    float C;
    C=(F-32)*5/9;
    return C;
}
float C2R(float C)
{
    float R;
    R=4/5*C;
    return R;
}
float R2C(float R)
{
    float C;
    C=5/4*R;
    return C;
}
float Cel2Cal(float Cel)
{
    float Cal;
    Cal=Cel+273;
    return Cal;
}
float Cal2Cel(float Cal)
{
    float Cel;
    Cel=Cal-273;
    return Cel;
}
float R2F(float R)
{
    float F;
    F=(9/4*R)+32;
    return F;
}
float F2R(float F)
{
    float R;
    R=(F-32)*4/9;
    return R;
}
int main()
{
    ///fungsi matematika
    printf("Max2 --> 2 dan 5    : %d\n",Max2(2,5));
    printf("Max3 --> 2,5,1      : %d\n",Max3(2,5,1));
    printf("Max4 --> 7,2,5,1    : %d\n",Max4(7,2,5,1));
    printf("IsPrima 7  : %d\n",IsPrima(7));
    printf("IsPrima 17 : %d\n",IsPrima(17));
    printf("IsPrima 70 : %d\n",IsPrima(70));
    printf("FPB(36,48) : %d\n",FPB(36,48));
    printf("IsGanjil 93     : %d\n",IsGanjil(93));
    printf("IsGanjil 1324   : %d\n",IsGanjil(1324));
    printf("Pangkat(2,8)    : %d\n",Pangkat(2,8));
    printf("SumOfN(15)      : %d\n",SumOfN(15));
    printf("ProductOfN(15)  : %d\n",ProductOfN(15));
    printf("AveSumOfN(15)   : %d\n",AveSumOfN(15));
    printf("AveProdOfN(15)  : %d\n",AveProdOfN(15));
    printf("%2.f C adalah %2.f F\n",72.5,C2F(72.5));
    printf("%2.f F adalah %2.f C\n",72.5,F2C(13.5));
    printf("%2.f C adalah %2.f R\n",72.5,C2R(72.5));
    printf("%2.f R adalah %2.f C\n",72.5,R2C(22.5));
    printf("%2.f C adalah %2.f K\n",72.5,Cel2Cal(72.5));
    printf("%2.f K adalah %2.f C\n",72.5,Cal2Cel(172.5));
    printf("%2.f R adalah %2.f F\n",72.5,R2F(72.5));
    printf("%2.f F adalah %2.f R\n",72.5,F2R(62.5));
    printf("\n");

return 0;

}
