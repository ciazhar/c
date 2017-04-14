#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Kamus
    int pilihan;
    char awal,jawaban;

awal:{
    printf("\t\t MENU TUGAS\n");
    printf("\t\t************\n");

    printf("1. Akar Persamaan Kuadrat\n");
    printf("2. Bonus Pegawai\n");
    printf("3. Segitiga\n");
    printf("4. Tahanan\n");
    printf("5. Gaji\n");
    printf("6. Determinan\n");
    printf("7. Exit\n");
    printf("Pilih Tugas: "); scanf("%d",&pilihan);}

while(pilihan<7)
{
    if(pilihan==1)
    {
    system("cls");
    ///Kamus
    float a,b,c;
    float x1,x2,D;

    ///Algoritma
    printf("Mencari Akar Persamaan Kuadrat dari Persamaan AX^2+BX+C\n");

    printf("Masukkan A : ");scanf("%f",&a);
    printf("Masukkan B : ");scanf("%f",&b);
    printf("Masukkan C : ");scanf("%f",&c);

    D=b*b-(4*a*c);

    printf("D : %f\n",D);

    x1= -b + sqrt(D);
    x2= -b - sqrt(D);

    if (D>0)
    {
    printf("Akar 1 : %f\n",x1);
    printf("Akar 2 : %f",x2);
    } else
    { printf("Akar 1 : Imajiner\n");
      printf("Akar 2 : Imajiner");}

    pilih: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih;
    }
    }
else if(pilihan==2)
    {
    system("cls");
    ///Kamus
    int masakerja, umur, bonus;
    char gol;

    ///ALGORITMA
    printf("BONUS PEGAWAI\n");

    printf("Masukkan Masa Kerja   : "); scanf("%d",&masakerja);
    printf("Masukkan Umur         : "); scanf("%d",&umur);
    fflush(stdin);
    printf("Masukkan Golongan(S/B): "); scanf("%c",&gol);

    if (gol=='S'||gol=='s')
    {
        if (masakerja>=5&&umur>=50)
            bonus=1000000;
        else if (masakerja<5)
            bonus=500000;
        else if (umur<50)
            bonus=300000;
    } else if (gol=='B'||gol=='b')
    {
        if (masakerja>=5&&umur>=50)
            bonus=400000;
        else if (umur<50)
            bonus=250000;
    } else bonus=0;

    printf("Bonus                  :%d",bonus);

    pilih2: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih2;
    }
    }
else if(pilihan==3)
    {
    system("cls");
    ///Kamus
    int a,b,c;

    ///Algoritma
    printf("Segitiga\n");

    printf("Masukkan bilangan pertama\t: "); scanf("%d",&a);
    printf("Masukkan bilangan kedua\t\t: "); scanf("%d",&b);
    printf("Masukkan bilangan ketiga\t: "); scanf("%d",&c);

    if (a>b&&a>c)
    {
        if (a*a==(b*b)+(c*c))
        {
            printf("Dapat membentuk segitiga");
        } else printf("Tidak dapat membentuk segitiga");
    }else if (b>a&&b>c)
    {
        if (b*b==(a*a)+(c*c))
        {
             printf("Dapat membentuk segitiga");
        } else printf("Tidak dapat membentuk segitiga");
    } else if (c>a&&c>b)
    {
        if (c*c==(a*a)+(b*b))
        {
             printf("Dapat membentuk segitiga");
        } else printf("Tidak dapat membentuk segitiga");
    }

    pilih3: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih3;
    }
    }
else if(pilihan==4)
    {
    system("cls");
     ///Kamus
    int R1, R2, R3;
    char sambung;
    int seri;
    float para;
    float paralel;

    ///Algoritma

    printf("Menghitung Tahanan Total\n");

    printf("Masukkan R1\t\t: "); scanf("%d",&R1);
    printf("Masukkan R2\t\t: "); scanf("%d",&R2);
    printf("Masukkan R3\t\t: "); scanf("%d",&R3);
    fflush(stdin);
    printf("Masukkan Rangkaian(S/P)\t: "); scanf("%c",&sambung);

    fflush(stdin);
    seri=R1+R2+R3;
    para=R1*R2+R2*R3+R3*R1;
    paralel=R1*R2*R3/para;

    if (sambung=='S'||sambung=='s')
    {
        printf("Nilai Tahanan\t\t: %d",seri);

    } else if (sambung=='P'||sambung=='p')
    {
        if (R1==0&&R2>0&&R3>0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R1=0)");
        else if (R1>0&&R2==0&&R3>0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R2=0)");
        else if (R1>0&&R2>0&&R3==0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R3=0)");
        else if (R1==0&&R2==0&&R3>0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R1=0,R2=0)");
        else if (R1==0&&R2>0&&R3==0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R1=0,R3=0)");
        else if (R1>0&&R2==0&&R3==0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R2=0,R3=0)");
        else if (R1==0&&R2==0&&R3==0)
            printf("Nilai Tahanan\t\t: Tidak Terdefinisi(R1=0,R2=0,R3=0)");
        else printf("Nilai Tahanan\t\t: %f",paralel);
    } else printf("Salah Input");

    pilih4: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih4;
    }
    }
else if(pilihan==5)
    {
    system("cls");
    ///Kamus
    fflush(stdin);
    int gol,gt,gpj,lembur;
    char nama[100];
    int jm,jp,mm,mp,jam;
    int gaji;

    ///Algoritma
    printf("Gaji\n");

    printf("Input Golongan : ");scanf("%d",&gol);
    fflush(stdin);
    printf("Input Nama : ");gets(nama);
    printf("Input Jam Masuk : ");scanf("%d.%d",&jm,&mm);
    printf("Input Jam Pulang : ");scanf("%d.%d",&jp,&mp);

    jam=(((jp*60)+mp)-((jm*60)+mm))/60*30;

    if(gol==1){gt=500000;gpj=5000;}
        else if(gol==2){gt=300000;gpj=3000;}
            else if(gol==3){gt=250000;gpj=2000;}
                else if(gol==4){gt=100000;gpj=1500;}
                    else if(gol==5){gt=50000;gpj=1000;}
                        else {printf("Salah Input");}
    if(jam>150){lembur=(jam-150)*gpj*1.5;gaji=gt+(gpj*150)+lembur;}
        else {lembur=0;gaji=gt+(gpj*jam);}

    printf("Gaji : %d",gaji);

    pilih5: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih5;
    }
    }
else if(pilihan==6)
    {
    system("cls");
    ///Kamus
    float a,b,c,D;

    ///Algoritma
    printf("Masukkan a,b,c : ");scanf("%f,%f,%f",&a,&b,&c);

    D=b*b-(4*a*c);

    if(D<0){printf("Determinan Negatif");}
        else if(D=0){printf("Determinan Nol");}
            else {printf("Determinan Positif");}

    pilih6: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);
    getchar();
    if (jawaban=='Y'||jawaban=='y')
    {

        system("cls");

        goto awal;
    } if(jawaban=='N'||jawaban=='n')
    {
        break;
    } else printf("Input Salah");
    {
        goto pilih6;
    }
    }

else
    {
        break;
    }

}
    return 0;
}
