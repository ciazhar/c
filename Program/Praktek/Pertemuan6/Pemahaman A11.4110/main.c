// Jawaban Pemahaman A11.4110
// Oleh : Basirudin Ansor
//13/10/15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int a,b,c,d,e;
    int total=0;

    //Algoritma
    printf("Input a b c d e : "); scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("\nMaka \t\t: ");

    if(a%2==0){
        printf("%d + ",a);
        total = total + a;
    } // kondisi a Genap
    else{
        total = total - a;
        printf("-%d + ",a);
    } // kondisi a Ganjil

    if(b%2==0){
        total = total + b;
        printf("%d + ",b);
    } // kondisi b Genap
    else{
        total = total - b;
        printf("(-%d) + ",a);
    } // kondisi b Ganjil

    if(c%2==0){
        total = total + c;
        printf("%d + ",c);
    } // kondisi c Genap
    else{
        total = total - c;
        printf("(-%d) + ",c);
    } // kondisi c Ganjil

    if(d%2==0){
        total = total + d;
        printf("%d + ",d);
    } // kondisi d Genap
    else{
        total = total - d;
        printf("(-%d) + ",d);
    } // kondisi d Ganjil

    if(e%2==0){
        total = total + e;
        printf("%d = ",e);
    } // kondisi e Genap
    else{
        total = total - e;
        printf("(-%d) = ",e);
    } // kondisi e Ganjil


     printf("%d\n\n",total); //output total

}
