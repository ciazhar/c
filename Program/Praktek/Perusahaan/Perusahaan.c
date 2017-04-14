#include <stdio.h>
#include <stdlib.h>

main ()
{
    char nama [100];
    float IPK,rata2,akd, ktr, PS;

    printf("Nama : "); scanf("%s",&nama);
    printf("IPK : "); scanf("%f",&IPK);

    if (IPK>3.0)
    {
        printf("Tes Akademik : "); scanf("%f",&akd);
        printf("Tes Keterampilan : "); scanf("%f",&ktr);
        printf("Tes Psikologi : "); scanf("%f",&PS);

        rata2=(akd+ktr+PS)/3;

        if ((akd>ktr)||(akd>PS))
        {
            printf ("Nilai Rata-rata = %0.2f",rata2);
            printf ("\nSelamat %s anda diterima, dan ditempatkan di bagian administrasi",nama);
        }
        else if ((ktr>akd)&&(ktr>PS))
        {
            printf ("Nilai Rata-rata = %0.2f",rata2);
            printf ("Selamat %s anda diterima, dan ditempatkan di bagian produksi",nama);
        }
        else
        {
            printf ("Nilai Rata-rata = %0.2f",rata2);
            printf ("Selamat %s anda diterima, dan ditempatkan di bagian pemasaran",nama);
        }

    }

    else if (IPK<=3.0)
    {
        printf("Saudara %s anda tidak diterima", nama);
    }
return 0;
}
