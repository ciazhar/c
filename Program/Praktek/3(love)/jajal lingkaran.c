#include <stdio.h>
#include <stdlib.h>

main ()
{
   float r1,r2,L1,L2,L3;
   float phi=3.14;

   printf("masukan jari2 lingkaran 1 : ");
   scanf("%f", &r1);
   printf("masukan jari2 lingkaran 2 : ");
   scanf("%f", &r2);

   L1=phi*r1*r1;
   L2=phi*r2*r2;

   if (L1>L2)
   {
       L3=L1-L2;
   }
   else
   {
       L3=L2-L1;
   }

   printf("\nluas lingkaran1 :%0.2f\n", L1);
   printf("\nluas lingkaran2 :%0.2f\n", L2);
   printf("\nselisih 2 lingkaran adalah:%0.2f\n", L3);

   return 0;
}
