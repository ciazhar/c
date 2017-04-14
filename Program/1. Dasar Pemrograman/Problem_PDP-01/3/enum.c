/* FIle : enum.c */
/* Deklarasi dan pemakaian type enumerasi */
int main ()
{
    /*KAMUS*/
    /*"type"*/
    enum hari {senin, selasa, rabu, kamis, jumat, sabtu}
    hariku;/*hariku : variabel*/
    enum {satu, dua, tiga} angka; /*variabel*/
    enum {KEYWORD = 01, EXTERNAL = 03, STATIC = 04};
    /*sekedar enumerasi "konstanta" bernama ",mengelompokkan*/
    typedef enum {merah, putih, kuning} warna; /*nama type*/
    unsigned int flags;
    warna w = kuning;

    /*AlGORITMA*/
    angka = tiga;
    printf("Angka %d\n", angka);
    hariku = 0;
    printf ("Hari %d\n", hariku);
    printf ("Masukkan sebuah angka [0..2]");
    scanf("%d", &angka);
    printf("Angka %d \n", angka);
    flags = EXTERNAL;
    printf("flags %d \n", flags);
    printf("Warna = %d \n", w);
    return 0;

}
