#include <stdio.h>
#include <stdlib.h>

///Muhammad Hafidz
///A11.2015.09000

int main()
{
    ///Kamus
    int i;

    ///Proses
    printf("Program Ini Akan Berhenti jika Anda Menginputkan Angka -99\n");
    for(i!=-99;i++;)
    {   printf("Masukkan Nilai Anda :");scanf("%d",&i);
        if (i==-99){printf("\nKeluar Karena Break\n");break;}
    }
}
