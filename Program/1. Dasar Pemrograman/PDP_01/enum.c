int
main ()
{
enum hari { senin, selasa, rabu, kamis, jumat, sabtu }
hariku;
enum { satu, dua, tiga } angka;
enum { KEYWORD = 01, EXTERNAL = 03, STATIC = 04 };

typedef enum { merah,putih,kuning } warna;
unsigned int flags;
warna w = kuning;
angka = tiga;
printf ("Angka %d \n ", angka);
hariku = 0;
printf ("Hari %d \n ", hariku);
printf ("Masukkan sebuah angka [0..2] ");
scanf ("%d", &angka);
printf ("Angka %d \n ", angka);
flags = EXTERNAL;
printf ("flags %d \n ", flags);
printf ("Warna = %d\n", w);
return 0;
}
