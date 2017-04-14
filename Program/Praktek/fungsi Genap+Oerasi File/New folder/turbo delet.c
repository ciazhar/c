#include <stdio.h>
#include <stdlib.h>
#define PJG 65
main()
{
int kode;
char namafile[PJG];
printf("Namafile yang akan dihapus: ");
gets(namafile);
kode= remove(namafile);
if(kode == 0)
printf("Filesudahdihapus\n");
else
printf("Gagaldalammenghapusfile\n");
}
