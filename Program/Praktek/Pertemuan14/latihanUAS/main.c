#include <stdio.h>
#include <stdlib.h>

    char nama[30];
    char nim[20];
    float uts;
    float uas;
    float tgs;
    int rata;

void inputData()
{
    printf("Masukkan Nama      : "); gets(nama);
    printf("Masukkan NIM       : "); gets(nim);
    fflush(stdin);
    printf("Masukkan Nilai UTS : "); scanf("%f",&uts);
    printf("Masukkan Nilai UAS : "); scanf("%f",&uas);
    printf("Masukkan Nilai TGS : "); scanf("%f",&tgs);
}

float hitungNilai(float uts, float uas, float tgs)
{
    rata = (uts+tgs+uas)/3;
    return rata;
}
char nilaiHuruf(float total)
{
    if(total>=85 && total<=100)
    {
        return 'A';
    }
    if(total>=75 && total<=84)
    {
        return 'B';
    }
    if(total>=60 && total<=74)
    {
        return 'C';
    }
    if(total>=45 && total<=59)
    {
        return 'D';
    }
    if(total>=30 && total<=44)
    {
        return 'E';
    }
    else return 0;
}
void cetakNilai()
{
    int a,b;
    a=hitungNilai(uas,uts,tgs);
    b=nilaiHuruf(rata);
    printf("Masukkan Nama        : %s\n",nama);
    printf("Masukkan NIM         : %s\n",nim);
    printf("Masukkan Nilai Akhir : %d\n",a);
    printf("Masukkan Nilai Huruf : %c\n",b);
}



int main()
{
    inputData();
    hitungNilai(uts, uas, tgs);
    nilaiHuruf(rata);
    printf("\n");
    cetakNilai();

    return 0;
}
