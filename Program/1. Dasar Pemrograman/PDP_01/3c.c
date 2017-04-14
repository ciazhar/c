#include<string.h>
int
main ()
{
char *str;
char *str1;

printf ("\nBaca string, maks 20 karakter: ");

str = (char *) malloc (20 * sizeof (char));
printf("masukkan sebuah string, max 20 kar: ");
scanf("%s",str);
printf ("String yang dibaca : %s\n", str);

str1 = (char *) malloc (20 * sizeof (char));
strcpy (str1, str);
printf ("String yang disalin : %s\n", str1);
return 0;
}
