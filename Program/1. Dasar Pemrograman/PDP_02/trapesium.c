#include <stdio.h>
#include <stdlib.h>

main()
{
    float luas,a,b,tinggi;

    printf("masukan nilai a : ");
    scanf("%f",&a);
    printf("masukan nilai b : ");
    scanf("%f",&b);
    printf("masukan nilai tinggi : ");
    scanf("%f",&tinggi);

    luas=(a+b)*tinggi*1/2;

    printf("luasnya adalah : %0.2f",luas);
    return 0;
}
