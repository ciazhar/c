#include <stdio.h>
main()
{
int bil, bil2, balik, balik2;
printf("Sample Input\n");
scanf("%d", &bil);

printf("\nSample Output\n");

while(bil > 0)
{
balik = bil % 10;
printf("%d", balik);
bil = bil / 10;
bil2=bil;


    while(bil2 > 0)
    {
        balik2 = bil2 % 10;
        printf("%d", balik2);
        bil2 = bil2 / 10;
    }
    printf("\n");
}
  }
