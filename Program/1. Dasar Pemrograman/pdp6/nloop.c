#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jumlah,daftar,item,i,j,x,sum,sumrat,rata;



    printf("Berapa jumlah daftar yang dibuat? = "); scanf("%f",&jumlah);
    for (j=1;j<=jumlah;j++)
       {
           sum=0;
            printf("Daftar ke - %0.0f",j);
            printf("\nBerapa Banyak Item ? "); scanf("%f",&item);
                for (i=1;i<=item;i++)
                {
                    printf("x = "); scanf("%f",&x);
                    sum=sum+x;
                }
            rata=sum/item;
            printf("Rata-ratanya = %0.2f\n\n",rata);
            sumrat=sumrat+rata;
        }

    printf("\n\nTotal Rata-ratanya = %0.2f",sumrat);

    return 0;
}
