#include <stdio.h>
#include <stdlib.h>

int hasil(int bil);
int bil;

main()
{
    int faktorial;
    printf("isi nilai : "); scanf("%d",&bil);

    faktorial=hasil(bil);

    printf("Hasil = %d",faktorial);
    return 0;
}

int hasil(int bil)
{
    int a,hasil=1;
    for(a=bil;a>=1;a--)
    {
        hasil=hasil*a;

    }
    return (hasil);

}

