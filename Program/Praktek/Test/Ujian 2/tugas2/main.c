#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///KAMUS
    int sapi1, kerbau1, kambing1, kuda1;
    int sapi2, kerbau2, kambing2, kuda2;
    int sapi3, kerbau3, kambing3, kuda3;
    int bny_tahun;

    ///PROGRAM
    printf("Berapa Jumlah Sapi, Kerbau, Kambing dan Kuda ?");
    scanf("%d %d %d %d", &sapi1, &kerbau1, &kambing1, &kuda1);

    printf("Pak Indro Membeli %d Sapi, %d Kerbau, %d Kambing, %d Kuda \n", sapi1, kerbau1, kambing1, kuda1);
    printf("Berapa Tahun Pak Indro Beternak ?");
    scanf("%d", &bny_tahun);
    sapi2 = sapi1 + (bny_tahun*1);
    kerbau2 = kerbau1 + (bny_tahun*1);
    kambing2 = kambing1 + (bny_tahun*3);
    kuda2 = kuda1 + (bny_tahun*0);

    ///OUTPUT
    printf("Jumlah Sapi Setelah 10 Tahun adalah %d \n", sapi2);
    printf("Jumlah Kerbau Setelah 10 Tahun adalah %d \n", kerbau2);
    printf("Jumlah Kambing Setelah 10 Tahun adalah %d \n", kambing2);
    printf("Jumlah Kuda Setelah 10 Tahun adalah %d \n", kuda2);


    ///BONUS
    sapi3=sapi2-(bny_tahun*)
    printf("Jumlah Sapi Sisa = " );

}
