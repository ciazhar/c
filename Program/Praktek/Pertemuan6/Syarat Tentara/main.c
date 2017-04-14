#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tinggi;
    char nama[20];
    char tgl[20];
    char sex;
    int i;

    printf("Masukkan Nama\t\t: ");
    gets(nama);
    printf("Masukkan Tanggal Lahir\t: ");
    scanf("%s",&tgl);
    fflush(stdin);
    printf("Masukkan Sex(L/P)\t: ");
    scanf("%c",&sex);
    printf("Masukkan Tinggi Badan\t: ");
    scanf("%d",&tinggi);

    while(i=1)
    if (sex=='L'||'l')
    {
        if (tinggi>165)
        {
            printf("Silahkan Melanjutkan Tes Kesehatan Jasmani & Rohani");
        }else printf("Maaf Anda Tidak Lolos");
    }else if (sex=='P'||'p')
    {
        if(tinggi>160)
        {
            printf("Silahkan Melanjutkan Tes Kesehatan Jasmani & Rohani");
        }else printf("Maaf Anda Tidak Lolos");
    }
    return 0;
}
