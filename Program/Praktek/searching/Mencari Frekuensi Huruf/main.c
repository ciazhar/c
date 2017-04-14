#include <stdio.h>
#include <stdlib.h>


int nbhuruf(char datatext[],char hurufdicari);
void cetakgenap(int data[]);
void ratagenap(int data[]);
int jumlahinput;

int main()
{
    ///Frekuensi Huruf
    char datatext[100];
    int i,cari;
    char huruf;

    printf("input teks : ");gets(&datatext);
    printf("inputan yang dicari : ");scanf("%c",&huruf);
    printf("frekuensi %c : %d",huruf,nbhuruf(datatext,huruf));

    ///cetak genap
    int i;
    int data[100];

    printf("\ninputkan jumlah data : ");scanf("%d",&jumlahinput);
    for(i=0;i<jumlahinput;i++){
        printf("input ke %d : ",i+1);scanf("%d",&data[i]);
    }
    printf("nilai yang genap : ");cetakgenap(data);

    ///rata genap
    ratagenap(data);
    return 0;
}

///Program mencari frekuensi huruf pada array string
int nbhuruf(char datatext[],char hurufdicari){
    int nbhuruf=0;
    int i;
    ///for(i=0;i<strlen(datatext);i++)atau
    for(i=0;datatext[i]!='\0';i++){
        if(hurufdicari==datatext[i]){
            nbhuruf++;
        }
    }
    return nbhuruf;
}

///Program mencetak bilangan genap pada array integer
void cetakgenap(int data[]){
    int i;
    for(i=0;i<jumlahinput;i++){
        if(data[i]%2==0){
            printf("%d ",data[i]);
        }
    }
}

void ratagenap(int data[]){
    int i,j,jumlah=0,nb=0;
    float rata;
    for(i=0;i<jumlahinput;i++){
        if(data[i]%2==0){
            nb++;
            jumlah=jumlah+data[i];
        }
    }
    rata=jumlah/nb;

    printf("\ntotal genap : %d",jumlah);
    printf("\nnb genap : %d",nb);
    printf("\naverage genap : %f",rata);
}
