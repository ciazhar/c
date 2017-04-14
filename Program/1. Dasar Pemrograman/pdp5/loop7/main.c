#include <stdio.h>
int main ()
{
    int i,sum;
    sum=0;
    printf("Program ini Akan berhenti Jika Anda Menginputkan Angka 9999\n");
    for (i!=9999;;i++)
    {
        printf("Masukkan nilai Anda = ",i);scanf("%d",&i);
        printf("%d\n",i);
        sum=sum+i;

        if (i==9999)
        {
         sum=sum-9999;
         break;
        }

    }
    printf("\njumlah bilangan = %d",sum);
    return 0;
}
