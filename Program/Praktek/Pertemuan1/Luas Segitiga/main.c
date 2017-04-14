#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("Hussein Faisol\nA11.2015.08998\n");
    int a=10,b=5,c;

    float d=5.5,e=10.1,f,g;

    c = a+b;
    f = d-e;
    g = c+d;
    printf("C = %d\n",c);
    printf("F = %.3f\n",f);
    printf("G = %f\n",g);
    printf("\n");

    printf("\t\tLUAS SEGITIGA\n");

    int Alas,Tinggi;
    float Luas;

    printf("Alas=");
    scanf("%d",&Alas);
    printf("Tinggi=");
    scanf("%d",&Tinggi);

    Luas = Alas*Tinggi/2;
    printf("Luas= %.f",Luas);
    return 0;
}
