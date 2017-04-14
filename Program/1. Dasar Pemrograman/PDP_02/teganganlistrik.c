#include<stdio.h>
#include<stdlib.h>

main()
{
    float V,I,R;

    printf("masukan nilai arus listrik :");
    scanf("%f",&I);
    printf("masukan nilai hambatan :");
    scanf("%f",&R);

    V=I*R;

    printf("tegangan listriknya adalah : %f",V);
    return 0;

}
