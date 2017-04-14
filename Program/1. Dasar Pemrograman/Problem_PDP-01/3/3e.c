/*latihan array statis : mengisi dg assognment, menulis*/
int main ()
{
    /*Kamus*/
    int i;
    int tab[10]; /*cara mengacu elemen ke-1: tab[i]*/
    int N;

    /*Program*/
    N = 5;
    printf ("Isi dan print tabel untuk indeks 1..5 \n");
    /*isi dengan assognment*/
    for (i=1; i<=N; i++)
        {
        tab [i] = 1;
        };
    /*transversal: print*/
    for (i=1; i<=N; i++)
        {
        printf("i=%d tab [i]= %d \n", i, tab[i]);
        };
    return 0;
}

