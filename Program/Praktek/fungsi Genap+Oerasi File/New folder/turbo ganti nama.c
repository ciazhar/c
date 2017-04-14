#include <stdio.h>
#include <stdlib.h>
#define PJG 65
main()
{
int kode;
char namafilelama[PJG], namafilebaru[PJG];
printf("Nama file yang akandi ganti:");
gets(namafilelama);
printf("Namafile yang baru : ");
gets(namafilebaru);
kode= rename(namafilelama, namafilebaru);
if(kode== 0)
printf("Nama file sudah diganti\n");
else
printf("Gagal dalam mengganti nama\n");
}
