#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

boolean isGenap(int x);


//void kelipatan(int x);


int main()
{
    int a, b, i;
    boolean c;
    printf("Masukkan angka = "); scanf("%d", &a);
    c = isGenap(a);
    if(c==1)
    {
        printf("genap\n");

        for(i=a; i<=100; i+i)
        {
            printf("%d ", i);
            i=i+a;
        }

    }else{
        printf("ganjil");
    }
}

boolean isGenap(int x){
    if(x%2==0){
       return true;
    }else{
        return false;
    }
}








void kelipatan(int x)
{
    int i;
    for(i=x; i<=10; i++)
    {
        i=+2;
    }
    printf("%d ", i);
}
