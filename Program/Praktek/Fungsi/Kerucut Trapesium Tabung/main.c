#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{

    int a,b,ttra,rtab,ttab,rker,tker;

    printf("input a : ");scanf("%d",&a);
    printf("input b : ");scanf("%d",&b);
    printf("input t : ");scanf("%d",&ttra);
    printf("trapesium : %f",ltrapesium(a,b,ttra));
    printf("\n\ninput r : ");scanf("%d",&rtab);
    printf("input t : ");scanf("%d",&ttab);
    printf("tabung : %f",vtabung(rtab,ttab));
    printf("\n\ninput r : ");scanf("%d",&rker);
    printf("input t : ");scanf("%d",&tker);
    printf("kerucut : %f",vkerucut(rker,tker));

}
