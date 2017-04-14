#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
FILE *pf;        //deklarasi variabel bertipe pointer ke file
int i, n, pilih;
char kode [5], nama [20], lagi;
float piutang;
do
{
printf("\n\nMenu:\n1.Rekam ke File\n2.Baca dari File\nPilih = ");
scanf("%d", &pilih);
switch (pilih)
{
case 1:
if ((pf = fopen("contoh.rhs", "a+")) == NULL)    //buka file
{
printf("ERROR: File tdk dpt dibuka!!!\n");
exit(1);
}
printf("jumlah data = "); scanf("%d", &n);
printf("\n");
for(i=1; i<=n; i++)
{
printf("Data ke %d : \n", i);
printf("Kode = "); fflush(stdin); scanf("%s", kode);
printf("Nama = "); fflush(stdin); scanf("%s", nama);
printf("Piutang = "); fflush(stdin); scanf("%f", &piutang);
printf("\n");
fprintf(pf, "%s\n", kode);    //tulis ke file
fprintf(pf, "%s\n", nama);
fprintf(pf, "%f\n", piutang);
}
fclose(pf);        //tutup file
break;
case 2:
i=0;
if ((pf = fopen("contoh.rhs", "r")) == NULL)
{
printf("ERROR: File tdk dpt dibuka!!!\n");
exit(1);
}
/* baca dari file -> copy data ke variabel */
while(fscanf(pf, "%s %s %f", kode, nama, &piutang) != EOF)
{
printf("Data ke %d : \n", ++i);
printf("Kode = %s\n", kode);
printf("Nama = %s\n", nama);
printf("Piutang = %f\n\n", piutang);
}
fclose(pf);
break;
}
    //bersihkan isi buffer
printf("Ulangi  ?"); lagi = getch();
}
while(lagi=='y');
}
