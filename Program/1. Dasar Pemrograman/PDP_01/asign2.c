int
main ()
{
short ks = 1;
int ki = 1;
long kl = 10000;
char c = 65;
char c1 = 'Z';
float x = 1.55;

printf ("Karakter = %c\n", c);
printf ("Karakter = %c\n", c1);

printf ("Karakter = %d\n", c);
printf ("Karakter = %d\n", c1);
printf ("Bilangan integer (short) = %d\n", ks);
printf ("\t\t(int) = %d\n", ki);
printf ("\t\t(long) = %ld\n", kl);
printf ("Bilangan Real = %f8.3\n", x);
return 0;
}
