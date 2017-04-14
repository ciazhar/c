#include "pustaka.h"

int pangkat(int a, int b)
{
    int hasil;
    if(b==0)
    {
        return 1;
    }
    else
    {
        hasil=pangkat(a,b-1)*a;
    }
    return hasil;
    }
int cariX(int data[], int X, int n)
{
    if(n==0)
    {
        if(data[n]==X)
            return 1;
        else
            return 0;
    }
    else
    {
        if(data[n]==X)
            return 1;
        else
            return cariX(data,X,n-1);
    }
}
int RecMax(int data[], int cur, int ar){
    if(ar<0){
        return cur;
    }
    else{
        if(data[ar]>cur){
            cur=data[ar];
        }
    }
    RecMax(data,cur,ar-1);
}
/**
int data={5,10,7,8,9};

cur=0, ar=4
if(data[4]>0) --> if(9>0)
    cur=data[0]=5
RecMax(data,5,3)

cur=5, ar=3
if(data[3]>5) --> if(8>5) v
    cur=data[3]=8
RecMax(data,8,2)

cur=8, ar=2
if(data[2]>8) --> if(7>8) x
RecMax(data,8,1)

cur=8, ar=1
if(data[1]>8) --> if(10>8) v
    cur=data[1]=9
RecMax(data,9,0)

cur=9, ar=0
if(data[0]>9) --> if(5>9) x
RecMax(data,9,-1)

cur=9, ar=-1
if(ar<0) --> if(-1<0) v
return cur --> return 9

**/
int maxRec (int data[], int cur,int ar)
{
    if (cur==ar)
    {
        return data[cur];
    }
    else
    {
        return max2(data[cur] , maxRec(data,cur+1,ar));
    }
}

int max2 (int a,int b)
{
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
