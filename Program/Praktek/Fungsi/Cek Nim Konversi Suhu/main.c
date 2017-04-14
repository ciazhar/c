#include <stdio.h>
#include <stdlib.h>
#include "string.h"

///prototype
float konversiCK(int suhu, char awal, char akhir);
int isNimFik(char nim[]);
///A11.2015.09000

int main()
{
   /* ///Latihan 1, Konversi suhu
    printf("Konversi Suhu Celcius Kelvin\n");
    float s;
    char awal,akhir;

    printf("Input Suhu : ");scanf("%f",&s);///menginputkan suhu

    printf("\n Skala Awal : ");
    fflush(stdin);
    awal=getchar();/// Input skala awal

    printf("\n Skala Akhir : ");
    fflush(stdin);
    akhir=getchar();/// Input skala akhir

    ///pemanggilan fungsi konversi
    printf("\nSuhu %.2f %c ke %c adalah %.2f",s,awal,akhir,konversiCK(s,awal,akhir));*/



    //////////////Cek Nim FIK
    char nim[14];
    printf("\nMasukkan NIM : ");scanf("%s",&nim);

    ///pemanggilan fungsi cek NIM FIK
    printf("Apakah NIM FIK UDINUS? %d",isNimFik(nim));

    return 0;
}

float konversiCK(int suhu, char awal, char akhir){
    int hasil;
    if((awal=='c'||awal=='C')&&(akhir=='k'||akhir=='K')){
        hasil=suhu+273;
    }
    else if((awal=='K'||awal=='k')&&(akhir=='c'||akhir=='C')){
        hasil=suhu-273;
    }
    return hasil;
}

int isNimFik(char nim[]){
    ///A11.2015.09000
    ///panjang 14
    ///array 3 = .
    ///array 8 = .
    ///depanya A atau a

    if(strlen(nim)==14&&nim[3]=='.'&&nim[8]=='.'&&(nim[0]=='A'||nim[0]=='a')){
        return 1;///jika kondisi diatas terpenuhi, akan menampilkan 1
    }
    else{
        return 0;///jika kondisi diatas terpenuhi, akan menampilkan 0
    }
}
