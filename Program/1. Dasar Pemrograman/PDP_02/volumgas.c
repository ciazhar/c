#include <stdio.h>
#include <stdlib.h>

main()
{
    float P,V,n,T,R;
    R=8.314;

    printf("masukan nilai mol :");
    scanf("%f",&n);
    printf("masukan nilai temperaatur : ");
    scanf("%f",&T);
    printf("masukan nilai tekanan : ");
    scanf("%f",&P);

    V=R*n*T/P;

    printf("besarnya tekanan adalah : %f kilopascal\n",V);
    return 0;
}
