#include <stdio.h>
#include <stdlib.h>


float konversiCK(int suhu, char awal, char akhir);

int main()
{
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
    printf("\nSuhu %.2f %c ke %c adalah %.2f",s,awal,akhir,konversiCK(s,awal,akhir));
    return 0;
}

float konversiCK(int suhu, char awal, char akhir){
    float hasil;
    if((awal=='c'||awal=='C')&&(akhir=='f'||akhir=='F')){
        hasil=(suhu/5*9)+32;
    }
    else if((awal=='c'||awal=='C')&&(akhir=='R'||akhir=='r')){
        hasil=suhu/5*4;
    }
    else if((awal=='c'||awal=='C')&&(akhir=='k'||akhir=='K')){
        hasil=suhu+273;
    }
    else if((awal=='F'||awal=='f')&&(akhir=='c'||akhir=='C')){
        hasil=(suhu-32)/9*5;
    }
    else if((awal=='F'||awal=='f')&&(akhir=='r'||akhir=='R')){
        hasil=(suhu-32)/9*4;
    }
    else if((awal=='F'||awal=='f')&&(akhir=='k'||akhir=='K')){
        hasil=(suhu-32)/9*5+273;
    }
    else if((awal=='K'||awal=='k')&&(akhir=='c'||akhir=='C')){
        hasil=suhu-273;
    }
    else if((awal=='K'||awal=='k')&&(akhir=='r'||akhir=='R')){
        hasil=(suhu-273)/5*4;
    }
    else if((awal=='K'||awal=='k')&&(akhir=='f'||akhir=='F')){
        hasil=(suhu-273)/5*9+32;
    }
    else if((awal=='R'||awal=='r')&&(akhir=='C'||akhir=='c')){
        hasil=suhu/4*5;
    }
    else if((awal=='R'||awal=='r')&&(akhir=='F'||akhir=='f')){
        hasil=suhu/4*9+32;
    }
    else if((awal=='R'||awal=='r')&&(akhir=='K'||akhir=='k')){
        hasil=suhu/4*5+273;
    }
    else {
        hasil=0;
    }

    return hasil;
    }
