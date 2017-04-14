/*deklarasi dan alokasi string, kemudian mengisinya dengan membaca*/
#include<string.h>
int main ()
{
    /*Kamus*/
    char *str;
    char *str1;

    /*Program*/
    printf("\nBaca string, maks 20 karakter: ");
    /*Alokasi string sebesar 20 karakter*/
    str = (char *) malloc (20 * sizeof (char));
    printf("masukkan sebuah string, max 20 kar: ");
    scanf("%s", str);
    printf ("String yang dibaca : %s\n", str);
    /*Alokasi string sebesar 20 karakter*/
    str1 = (char *) malloc (20 * sizeof (char));
    strcpy (str1, str);
    printf ("String yang disalin: %s\n", str1);
    return 0;
}
