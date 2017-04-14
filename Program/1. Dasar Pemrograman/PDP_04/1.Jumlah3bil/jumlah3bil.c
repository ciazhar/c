#include <stdio.h>
#include <stdlib.h>

main ()
{
    int a, b;
    float konstan=2.5;
    float c;

    printf ("niali a:"); scanf("%d", &a);
    printf ("niali b:"); scanf("%d", &b);
    printf("\n");

    c=a+b+konstan;

    printf("hasil:%0.2f", c);
    return 0;
}
