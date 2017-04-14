#include "boolean.h"
#include "array.h"

void BacaTabelInt(DataInt d,int n)
{
    if (n<=maxdata)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Isi Elemen Integer ke-%d:",i+1);
            scanf("%d",&d[i]);
        }
    }
    else
    {
        exit(1);
    }
}

void BacaTabelFloat(DataFloat f,int n)
{
    if (n<=maxdata)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Isi Elemen Float ke-%d:",i+1);
            scanf("%f",&f[i]);
        }
    }
    else
    {
        exit(1);
    }
}

void BacaTabelChar(DataChar c,int n)
{
    if (n<=maxdata)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("Isi Elemen Char ke-%d:",i+1);
            scanf(" %c",&c[i]);
        }
    }
    else
    {
        exit(1);
    }
}

void TulisTabelInt(DataInt d,int n)
{
    printf("(");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ", d[i]);
    }
    printf(")\n");
}

void TulisTabelFloat(DataFloat f,int n)
{
    printf("(");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%0.2f ", f[i]);
    }
    printf(")\n");
}

void TulisTabelChar(DataChar c,int n)
{
    printf("(");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c ", c[i]);
    }
    printf(")\n");
}

boolean IsAdaInt(DataInt d,int n, int data)
{
    int i = 0;
    while ((i<n)&&(d[i]!=data))
    {
        i++;
    }
    if (d[i]==data)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsAdaFloat(DataFloat f,int n,float data)
{
    int i = 0;
    while ((i<n)&&(f[i]!=data))
    {
        i++;
    }
    if (f[i]==data)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsAdaChar(DataChar c,int n,char data)
{
    int i = 0;
    while ((i<n)&&(c[i]!=data))
    {
        i++;
    }
    if (c[i]==data)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CariInt(DataInt d,int n,int data)
{
    int i = 0;
    while((i<n)&&(d[i]!=data))
    {
        i++;
    }
    if (d[i]==data)
    {
        return d[i];
    }
    else
    {
        return -1;
    }
}

float CariFloat(DataFloat f,int n,float data)
{
    int i = 0;
    while ((i<n)&&(f[i]!=data))
    {
        i++;
    }
    if (f[i]==data)
    {
        return f[i];
    }
    else
    {
        return -1;
    }
}

char CariChar(DataChar c,int n,char data)
{
    int i = 0;
    while ((i<n)&&(c[i]!=data))
    {
        i++;
    }
    if (c[i]==data)
    {
        return c[i];
    }
    else
    {
        return -1;
    }
}

int CariIdxInt(DataInt d,int n,int data)
{
    int i = 0;
    while((i<n)&&(d[i]!=data))
    {
        i++;
    }
    if (d[i]==data)
    {
        return i+1;
    }
    else
    {
        return -1;
    }
}

int CariIdxFloat(DataFloat f,int n,float data)
{
    int i = 0;
    while((i<n)&&(f[i]!=data))
    {
        i++;
    }
    if (f[i]==data)
    {
        return i+1;
    }
    else
    {
        return -1;
    }
}

int CariIdxChar(DataChar c,int n,char data)
{
    int i = 0;
    while((i<n)&&(c[i]!=data))
    {
        i++;
    }
    if (c[i]==data)
    {
        return i+1;
    }
    else
    {
        return -1;
    }
}
