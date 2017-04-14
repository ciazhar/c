// Pemahaman A11.4110
// Judul : Tes Fisik Penerimaan Karyawan
// Oleh : Basirudin Ansor
// 20/10/2015

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus

    char nama[20], ttl[20];
    char pilihan;
    int tinggi;
    int i=1;

    //Algoritma
    printf("\t\t===Tes Fisik Penerimaan Karyawan===\n\n\n");
    printf("Nama\t\t: "); gets(nama);    //input
    printf("Tanggal Lahir\t: "); gets(ttl);    //input

    //while(i=1)
    //{
    printf("Jenis Kelamin Saudara(L/P)? : "); scanf("%c", &pilihan);

    if(pilihan=='l'||pilihan=='L')
    {
        printf("Laki-Laki\n");
        printf("Tinggi Badan Saudara : "); scanf("%d",&tinggi);
        printf("Tinggi : %d cm\n",tinggi);
        if(tinggi>=165)
        {
            printf("Anda telah lulus tes fisik, Lanjut Tes Jasmani dan Rohani\n");
          // break;

        }
        else
        {
            printf("\nMohon Maaf Anda belum memenuhi syarat\n");
          //  break;
        }
    }

    else if(pilihan=='p'||pilihan=='P')
    {
        printf("Perempuan\n");
        printf("Tinggi Badan Saudara : "); scanf("%d",&tinggi);
        printf("Tinggi : %d cm\n",tinggi);
        if(tinggi>=160)
        {
            printf("Anda telah lulus tes fisik, Lanjut Tes Jasmani dan Rohani\n");
          //  break;
        }
        else
        {
            printf("\nMohon Maaf anda belum memenuhi syarat\n");
          //  break;
        }
    }
    else
    {
            printf("Salah Inputan\n");
    }
    //}
    return 0;
}
