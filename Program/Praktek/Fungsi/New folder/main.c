#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[25];
    strcpy(nama,"Universitas Dian Nuswantoro");
    printf("Nama : %s \n", nama);
    printf("Banyaknya karakter adalah : %i \n",strlen(nama));
    getch();
}
