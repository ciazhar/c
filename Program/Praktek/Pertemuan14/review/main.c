#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deklarasi variabel
    int ukuran; //variabel untuk ukuran array

    //proses inputan
    printf("Masukkan ukuran Array = "); scanf("%d",&ukuran);

    int array_angka[ukuran];

    //proses

    int index; //variabel untuk index array

    for(index=0;index<ukuran;index+=1)
    {
        //input per elemen array
        printf("Input Data = "); scanf("%d",&array_angka[index]);
    }

    //proses outputnya
    for(index=0;index<ukuran;index++)
    {
        printf("[%d] ",array_angka[index]);
    }

    //proses cari nilai max
    int max;
    max=array_angka[0]; //inisialisasi nilai max di index awal

    for(index=0;index<ukuran;index++)
    {
        if(array_angka[index]>=max)
        {
            //nilai max menjadi array_angka ke index
            max=array_angka[index];
        }
    }

    printf("Nilai Max = %d\n",max);


    return 0;
}
