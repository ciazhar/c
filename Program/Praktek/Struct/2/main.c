#include "pustaka.h"

int main()
{
    strcpy(mhs[0].nim,"A11.2015.09000");
    strcpy(mhs[0].nama,"Muhammad Hafidz");
    mhs[0].tgl_lahir.tgl=28;
    mhs[0].tgl_lahir.bln=8;
    mhs[0].tgl_lahir.thn=1997;
    mhs[0].ipk=3;

    printf("Data Diri\n");
    printf("NIM     : %s\n",mhs[0].nim);
    printf("Nama    : %s\n",mhs[0].nama);
    printf("TTL     : %d-%d-%d\n",mhs[0].tgl_lahir.tgl,mhs[0].tgl_lahir.bln,mhs[0].tgl_lahir.thn);
    printf("IPK     : %0.2f\n",mhs[0].ipk);

    strcpy(mhs[1].nim,"A11.2012.07228");
    strcpy(mhs[1].nama,"Nurul Anisa");
    mhs[1].tgl_lahir.tgl=25;
    mhs[1].tgl_lahir.bln=9;
    mhs[1].tgl_lahir.thn=1994;
    mhs[1].ipk=3;

    printf("Data Teman\n");
    printf("NIM     : %s\n",mhs[1].nim);
    printf("Nama    : %s\n",mhs[1].nama);
    printf("TTL     : %d-%d-%d\n",mhs[1].tgl_lahir.tgl,mhs[1].tgl_lahir.bln,mhs[1].tgl_lahir.thn);
    printf("IPK     : %0.2f\n",mhs[1].ipk);
}
