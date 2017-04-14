#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b=5;
    int c;
    float d=5.90,e=15,f,g;

    c = a+b;
    f = e-d;
    g = c-f;

    printf("c = %d\n", c);
    printf("f = %.2f\n", f);
    printf("g = %.2f\n", g);


        //Luas Segitiga
    int alas, tinggi;
    float luas;

    printf("alas=");
    scanf("%d" ,&alas);
    printf("tinggi=");
    scanf("%d" ,&tinggi);
    luas= (alas*tinggi)/2;
    printf("luas= %2.f", luas);

}
