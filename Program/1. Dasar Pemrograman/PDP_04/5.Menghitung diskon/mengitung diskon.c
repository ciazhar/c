#include <stdio.h>
#include <stdlib.h>

main ()
{
    int jml,b,c,d,e;

    printf("masukan jumlah pembelian balon :");
    scanf("%d",&jml);

    b=jml*30;
    c=jml*25;
    d=jml*20;
    e=jml*10;

    if (jml==1)
    {
        printf("jadi harga balon setelah di diskon adalah: %d",b);
    }
    else if( (jml>=2) && (jml<=10) )
    {
        printf("jadi harga balon setelah di diskon adalah: %d",c);
    }
    else if( (jml>=11) && (jml<=50))
    {
        printf("jadi harga balon setelah di diskon adalah: %d",d);
    }
    else
    {
        printf("jadi harga balon setelah di diskon adalah: %d",e);
    }
    return 0;
}
