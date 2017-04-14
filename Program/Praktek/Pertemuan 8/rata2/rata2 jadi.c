#include <stdlib.h>
#include <stdio.h>

main ()
{
    int jumlah, banyak, j, i,x;
    float average, total=0;
    int sum;
    printf ("Jumlah daftar yang dibuat = "); scanf("%d",&jumlah);

    for (j=1;j<=jumlah;j++)
    {
        sum=0;
        printf ("Daftar ke %d\n",j);
        printf ("Banyak item ="); scanf ("%d",&banyak);
        for (i=1;i<=banyak;i++)
        {
            printf ("x="); scanf("%d",&x);
            sum=sum+x;
        }
        average=sum/banyak;
        total=total+average;
        printf ("Rata2 = %f\n\n",average);
    }
    printf ("total rata2= %f\n",total);
    return 0;
}
