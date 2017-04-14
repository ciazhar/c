#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char jalan[25];
    int rt;
    int rw;
}alamat;

typedef struct{
    char nama[50];
    char nim[15];
    float ipk;
    alamat x;
}mahasiswa; //nama struct

int main()
{
    //tipe  nama var
    int n;
    printf("Banyak Data: ");
    scanf("%d",&n);

    mahasiswa satu[n];
    int i;
    for(i=0;i<n;i++){
            fflush(stdin);
    printf("Masukkan Nama Mahasiswa   : ");
    gets(satu[i].nama);
    printf("Masukkan NIM Mahasiswa    : ");
    gets(satu[i].nim);
    printf("Masukkan IPK Mahasiswa    : ");
    scanf("%f",&satu[i].ipk);
    printf("Masukkan Alamat Mahasiswa : \n");
        fflush(stdin);
    printf("\tJalan : "); gets(satu[i].x.jalan);
    printf("\tRT    : "); scanf("%d",&satu[i].x.rt);
    printf("\tRW    : "); scanf("%d",&satu[i].x.rw);}


    ///output
    for(i=0;i<n;i++){
    printf("Nama Mahasiswa   : %s\n",satu[i].nama);
    printf("NIM Mahasiswa    : %s\n",satu[i].nim);
    printf("IPK Mahasiswa    : %.2f\n",satu[i].ipk);

    printf("Alamat Mahasiswa : \n");
    printf("\tJalan  : %s\n",satu[i].x.jalan);
    printf("\tRT     : %d\n",satu[i].x.rt);
    printf("\tRW     : %d\n",satu[i].x.rw);}
    return 0;
}
