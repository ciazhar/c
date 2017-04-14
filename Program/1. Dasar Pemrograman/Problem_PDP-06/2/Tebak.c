#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    ///Kamus
    int tebakan,x,angka;
    char pertanyaan;

    ///Algoritma
    sini :
        angka=rand()%50+1;
        for(x=1;x<=6;x++){
            if(x==6){
                printf("\n\nGagal yang benar adalah %d",angka);
                break;
                }
            printf("\n\nTebakan ke-%d, Masukkan Angka Tebakan Anda [1-50]: ",x);
            scanf("%d",&tebakan);
            if(tebakan>=1&&tebakan<=50){
                if(tebakan>angka){
                    printf("Angka Anda Lebih Besar\n");
                    }
                else if(tebakan<angka){
                    printf("Angka Anda Lebih Kecil\n");
                    }
                else {
                    printf("\nHebat Angka %d Berhasil Anda Tebak dalam %d kali tebakan\n",angka,x);
                    break;
                    }
                }
            else {
                printf("Typo Gan ?\n");
                break;
            }
        }
    sana :
        printf("\Apakah anda ingin bermain lagi ? [y/t]");
        scanf("%s",&pertanyaan);
        getchar();
            if(pertanyaan=='Y'||pertanyaan=='y'){
                goto sini;
                }
            else if(pertanyaan=='t'||pertanyaan=='T'){
                printf("Sampai Jumpa");
                }
            else {
                printf("\n\nSalah Input \n\n");
                goto sana;
                }
        return 0;
    }
