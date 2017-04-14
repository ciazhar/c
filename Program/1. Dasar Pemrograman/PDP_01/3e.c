int main ()
{
int i;
int tab[10]; /* Cara mengacu elemen ke-i: tab[i] */
int N;

N = 5;
printf ("Isi dan print tabel untuk indeks 1..5 \n");

for (i = 1; i <= N; i++) {
tab[i] = i;
};

for (i = 1; i <= N; i++) {
printf ("i=%d tab[i]=%d \n", i, tab[i]);
};
return 0;
}
