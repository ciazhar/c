#include <stdio.h>
#include <stdlib.h>
main ()
{
    int bil;

    printf("masukan nilai bilangan : ");
    scanf("%d",&bil);

    if(bil%2==0)
    {
        printf("\nGENAP\n");
    }
    else
    {
        printf("\nGANJIL\n");
    }
return 0;
}
