#include <stdio.h>
int main ()
{
    int j,i;
    i=0;
    printf("Program ini Akan berhenti Jika Anda Menginputkan Angka 9999\n");
    for (j!=9999;;j++)
    {
        printf("Masukkan nilai Anda = ",j);scanf("%d",&j);
        printf("%d\n",j);
        i=i+1;

        if (j==9999)
        {
            i=i-1;
            break;
        }

    }
    printf("\njumlah bilangan = %d",i);
    return 0;
}
