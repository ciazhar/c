#include <stdio.h>
#include <stdlib.h>

int Pangkat(int basis,int eksp)
{
    int hasil=1,i;
    for(i=1;i<=eksp;i++)
    {
        hasil=hasil*basis;
    }

    return hasil;
}

void nilai(int a)
{
    char huruf;
    if(a>100){
        printf("Salah Input");}
    if(85>=a && a==100)
        printf("Nilai Anda = 'A'");
    else if(a>=70 && a<=84)
        printf("Nilai Anda = 'B'");
    else if(a>=55 && a<=69)
        printf("Nilai Anda = 'C'");
    else if(a>=40 && a<=54)
        printf("Nilai Anda = 'D'");
    else printf("Nilai Anda = 'E'");

}



int main()
{
    int basis, eksp;

    printf("Masukkan basis : "); scanf("%d",&basis);
    printf("Masukkan eksp  : "); scanf("%d",&eksp);
    printf("Hasil %d dipangkatkan %d adalah %d \n\n",basis,eksp, Pangkat(basis,eksp));


system("pause");
system("cls");

    int angka;

    printf("Masukkan Nilai : "); scanf("%d",&angka);
    nilai(angka);
    return 0;
}
