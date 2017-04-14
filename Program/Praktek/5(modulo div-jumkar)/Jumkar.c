#include <stdio.h>
main()
{
char kar;
int jumkar = 0, jumspasi = 0;
int JUMKAR;

while((kar = getchar()) != '\n')
{
jumkar++;
if (kar == ' ') jumspasi++;
}
JUMKAR=jumkar-jumspasi;
printf("\nJumlah karakter = %d", JUMKAR);
printf("\nJumlah SPASI = %d\n\n", jumspasi);
}
