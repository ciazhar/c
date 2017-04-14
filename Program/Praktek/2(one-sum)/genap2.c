#include <stdio.h>
main()
{
int bil, balik;
printf("Sample Input\n");
scanf("%d", &bil);

while(bil != 1)
{
    if (bil%2==0)
    {
        bil=bil/2;
        printf(" %d",bil);
    }
    else
    {
        bil=(3*bil)+1;
        printf(" %d",bil);
    }
}

}
