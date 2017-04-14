#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

int x;
int y;

void coba()
{
    x = 1;
    printf("%d\n",x);
}

void coba2()
{
    x = x + 2;
    printf("%d\n",x);
}

void SetNilai(int *Nilai, int n)
{
    *Nilai = n;
}

boolean IsGanjil(int a)
{
    if(a%2==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

boolean RubahGenap(int a)
{
    if(IsGanjil(a))
    {
        return a+1;
    }
    else
    {
        return a;
    }
}

int main()
{
    int a;
    coba();
    coba2();

    SetNilai(&x,21);
    printf("%d\n",x);
    printf("%d\n",RubahGenap(x));
    return 0;
}
