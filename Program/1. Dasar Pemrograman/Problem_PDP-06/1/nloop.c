#include <stdio.h>
#include <stdlib.h>


int main()
{
   ///Kamus
   int i,j;
   int daftar,item;
   int x,sum,sum2,average;

   ///Algoritma
   printf("Berapa Jumlah Daftar Yang di buat ? ");
   scanf("%d",&daftar);
   sum2=0;
   for(i=1;i<=daftar;i++)
   {
       printf("Daftar ke-%d\n",i);
       printf("Berapa Banyak item ? ");
       scanf("%d",&item);
       sum=0;
       for(j=1;j<=item;j++)
       {
           printf("x = ");
           scanf("%d",&x);
           sum=sum+x;
           average=sum/item;
        }
       printf("Rata-Ratanya : %d\n",average);
       sum2=sum2+average;
   }

   printf("Total rata-ratanya : %d",sum2);

}
