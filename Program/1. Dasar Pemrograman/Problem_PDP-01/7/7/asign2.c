/*File : asign2.c*/
/*Deskripsi : */
/*Program ini berisi contoh sederhana untuk*/
/*mendefinisikan*/
/*variabel-variabel bilangan bulat*/
/*(short int, int, long int),*/
/*karakter, bilangan rill, */
/*---------------------------------------------*/
int main ()
{
    /*KAMUS*/
    short ks = 1;
    int ki = 1;
    long kl = 10000;
    char c = 65; /*inisialisasi karakter dg integer*/
    char cl = 'Z'; /*inisialisasi karakter dg karakter*/
    float x = 1.55;
    /*Algoritma*/
    /*Penulisan karakter sebagai karakter*/
    printf("Karakter = %c\n", c);
    printf("Karakter = %c\n", cl);
    /*penulisan karakter sebagai integer*/
    printf("Karakter = %d\n", c);
    printf("Karakter = %d\n", cl);
    printf("Bilangan integer (short) = %d\n", ks);
    printf("\t\t(int) = %d\n", ki);
    printf("\t\t(long) = %ld\n", kl); /*perhatikan format
    %ld*/
    printf("Bilangan Real = %f8.3\n", x);
    return 0;

}
