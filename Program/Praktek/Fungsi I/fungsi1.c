#include <stdio.h>
#include <stdlib.h>

int x,y,z;

main()
{
    int hasil;
    printf("Input A : "); scanf("%d",&x);
    printf("Input B : "); scanf("%d",&y);

    hasil=jumlah(x,y);

    if(hasil%2==0)
    {
        printf("GENAP ");
        printf("Hasil = %d",hasil);
    }

    else if(hasil%2==1)
    {
        printf("GANJIL ");
        printf("Hasil = %d",hasil);
    }
    return 0;
}

int jumlah (int a, int b)
{
    return (a+b);
}


