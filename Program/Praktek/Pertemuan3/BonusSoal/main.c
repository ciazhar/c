#include <stdio.h>
#include <stdlib.h>

int main()
{
char namalengkap[30];
char alamatlengkap[30];
int nilaipraktik;
int nilaiteori;
int ratanilai;
   printf("Input Nama Lengkap\t:");
   gets(namalengkap);
   printf("Input Alamat Lengkap\t:");
   gets(alamatlengkap);
   printf("Input Nilai Praktek\t:");
   scanf("%d", &nilaipraktik);
   printf("Input Nilai Teori\t:");
   scanf("%d", &nilaiteori);

   ratanilai = (nilaipraktik+nilaiteori)/2;
   printf("Rata - Rata Nilai\t:%d\n",ratanilai);
   return 0;
}
