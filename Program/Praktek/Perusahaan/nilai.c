#include <stdio.h>
#include <stdlib.h>

main ()
{
    char nama[100],makul[100];
    float nilai,teori,prkt,tgs;

    printf("Nama : "); scanf("%s",&nama);
    printf("Mata Kuliah : "); scanf("%s",&makul);
    printf("Masukkan nilai Ujian Teori  : "); scanf("%f",&teori);
    printf("Masukkan nilai Ujian Praktek : "); scanf("%f",&prkt);
    printf("Masukkan nilai Tugas : "); scanf("%f",&tgs);

    nilai=(teori*30/100)+(prkt*30/100)+(tgs*40/100);

    if ((nilai>=80)&&(nilai<=100))
    {
        printf("\nNama : %s",nama);
        printf("\nMata Kuliah : %s",makul);
        printf("\nNilai angka akhir : %0.2f",nilai);
        printf("\nNilai huruf : A");
        printf("\nAnda dinyatakan : Lulus Cumlaude");
    }
    else if ((nilai>=70)&&(nilai<=84))
        {
            printf("\nNama : %s",nama);
            printf("\nMata Kuliah : %s",makul);
            printf("\nNilai angka akhir : %0.2f",nilai);
            printf("\nNilai huruf : B");
            printf("\nAnda dinyatakan : Lulus Baik");
        }
        else if ((nilai>=60)&&(nilai<=69))
            {
                printf("\nNama : %s",nama);
                printf("\nMata Kuliah : %s",makul);
                printf("\nNilai angka akhir : %0.2f",nilai);
                printf("\nNilai huruf : C");
                printf("\nAnda dinyatakan : Lulus Cukup");
            }
            else if ((nilai>=50)&&(nilai<=59))
                    {
                        printf("\nNama : %s",nama);
                        printf("\nMata Kuliah : %s",makul);
                        printf("\nNilai angka akhir : %0.2f",nilai);
                        printf("\nNilai huruf : D");
                        printf("\nAnda dinyatakan : Tidak Lulus");
                    }
                else if((nilai>=0)&&(nilai<=49))
                        {
                            printf("\nNama : %s",nama);
                            printf("\nMata Kuliah : %s",makul);
                            printf("\nNilai angka akhir : %0.2f",nilai);
                            printf("\nNilai huruf : E");
                            printf("\nAnda dinyatakan : Gagal");
                        }
    return 0;
}
