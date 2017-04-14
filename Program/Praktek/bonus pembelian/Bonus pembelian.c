#include <stdio.h>
#include <stdlib.h>
main ()
{
    int jml,jml1,jml2,jml3,jml4;

    printf("masukan jumlah pembelian boneka :");
    scanf("%d",&jml);

    jml1=jml*30;
    jml2=jml*25;
    jml3=jml*20;
    jml4=jml*10;

    if (jml==1)
    {
        printf("harga balon adalah Rp.%d",jml1);
    }
    else if ((jml>=2)&&(jml<=10))
    {
        printf("harga balon adalah Rp.%d",jml2);
    }
    else if ((jml>=11)&&(jml<=50))
    {
        printf("harga balon adalah Rp.%d",jml3);
    }
    else if (jml>=50)
    {
        printf("harga balon adalah Rp.%d",jml4);
    }
    else
    {
        printf("salah input");
    }
    return 0;
}
