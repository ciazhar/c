#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    char gender;
    int tinggi;
    char nama [100];
    char lahir [15];

    ///Algoritma
    printf("===Tes Fisik Penerimaan Karyawan===\n\n");
    printf("Nama\t\t\t\t:");
    gets(nama);
    printf("Tanggal Lahir\t\t\t:");
    gets(lahir);
    printf("Jenis Kelamin Saudara(L/P)? \t: ");
    scanf("%c",&gender);

    if (gender='L') {printf("Laki Laki\n");}
    else if (gender='P'){printf("Perempuan\n");}
            else {printf("Typo\n");}

    printf("Tinggi Badan Saudara \t\t: ");
    scanf("%d", &tinggi);
    printf("Tinggi \t\t\t\t: %d cm\n",tinggi);

    if(gender='L')
        {if(tinggi>=165)
                {printf("Anda telah lulus tes fisik, Lanjut Tes Jasmani dan Rohani");}
        else  {printf("Anda tidak lulus tes fisik");}
        }
    else if(gender='P')
        {if(tinggi>=160)
           {printf("Anda telah lulus tes fisik, Lanjut Tes Jasmani dan Rohani");}
        else {printf("Anda tidak lulus tes fisik");}}
    else {printf("Typo");}



}
