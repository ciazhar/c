#include <stdio.h>
#include <stdlib.h>

struct hitung{
    int x;
    int y;
    int jml;
};

typedef struct{
    char merk[50];
    char type[50];
    int tahun;
    int harga;
}sepeda;

typedef struct{
    char *merk;
    char *type;
    int tahun;
    int harga;
}sepeda2;

typedef struct{
    char nama[10];
    char nim[10];
    char fakultas[10];
    char jurusan[10];
    int tahun;
}datamahasiswa;

int main(){
    ///Pake struct
    /*struct hitung a;
    a.x=10;
    a.y=12;
    a.jml=a.x+a.y;
    printf("Hasil %d + %d = %d",a.x,a.y,a.jml);*/

    ///Pake typedef
    /*sepeda baru={"polygon","sepeda gunung",2013,20000};
    printf("merk : %s\n",baru.merk);
    printf("type : %s\n",baru.type);
    printf("tahun : %d\n",baru.tahun);
    printf("harga : %d",baru.harga);*/

    ///Pake typedef pointer
    /*sepeda2 baru2;
    baru2.merk="wimcycle";
    baru2.type="sepeda gunung";
    baru2.tahun=2013;
    baru2.harga=20000;
    printf("merk : %s\n",baru2.merk);
    printf("type : %s\n",baru2.type);
    printf("tahun : %d\n",baru2.tahun);
    printf("harga : %d",baru2.harga);*/

    ///
    datamahasiswa datadiri;
    datamahasiswa datateman;
    fflush(stdin);
    printf("INPUT\n");
    printf("\n--data diri--\n");
    printf("\nmasukkan nama      : ");scanf("%s",&datadiri.nama);
    printf("masukkan nim         : ");scanf("%s",&datadiri.nim);
    printf("masukkan fakultas    : ");scanf("%s",&datadiri.fakultas);
    printf("masukkan jurusan     : ");scanf("%s",&datadiri.jurusan);
    fflush(stdin);
    printf("masukkan tahun       : ");scanf("%d",&datadiri.tahun);

    fflush(stdin);
    printf("\n--data teman--\n");
    printf("\nmasukkan nama      : ");scanf("%s",&datateman.nama);
    printf("masukkan nim         : ");scanf("%s",&datateman.nim);
    printf("masukkan fakultas    : ");scanf("%s",&datateman.fakultas);
    printf("masukkan jurusan     : ");scanf("%s",&datateman.jurusan);
    fflush(stdin);
    printf("masukkan tahun       : ");scanf("%d",&datateman.tahun);

    printf("OUTPUT\n");
    printf("\n--data diri--\n");
    printf("\nnama      : %s",datadiri.nama);
    printf("\nnim         : %s",datadiri.nim);
    printf("\nfakultas    : %s",datadiri.fakultas);
    printf("\njurusan     : %s",datadiri.jurusan);
    printf("\ntahun       : %d",datadiri.tahun);

    printf("\n--data teman--\n");
    printf("\nnama      : %s",datateman.nama);
    printf("\nnim         : %s",datateman.nim);
    printf("\nfakultas    : %s",datateman.fakultas);
    printf("\njurusan     : %s",datateman.jurusan);
    printf("\ntahun       : %d",datateman.tahun);

}
