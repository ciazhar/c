#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    int a,b,c,d,e, hasil;


    ///Proses
    printf("Input a,b,c,d,e : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a % 2 == 1) {a=a*-1;}
        else {a=a;}
    if (b % 2 == 1) {b=b*-1;}
        else {b=b;}
    if (c % 2 == 1) {c=c*-1;}
        else {c=c;}
    if (d % 2 == 1) {d=d*-1;}
        else {d=d;}
    if (e % 2 == 1) {e=e*-1;}
        else {e=e;}

    hasil=a+b+c+d+e;

    printf("Maka : %d + %d + %d + %d + %d = %d",a,b,c,d,e,hasil);
}
