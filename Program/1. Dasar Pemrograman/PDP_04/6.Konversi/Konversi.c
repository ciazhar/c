#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int a;
    int b;
    printf("Masukan Nilai: ");
    scanf("%d",&a);

    if ((a>=0)&&(a<=20))
    {
        b="E";
    }
    else if ((a>=21)&&(a<=40))
    {
        b="D";
    }
    else if ((a>=41)&&(a<=60))
    {
        b="C";
    }
    else if ((a>=61)&&(a<=80))
    {
        b="B";
    }
    else if ((a>=81)&&(a<=100))
    {
        b="A";
    }
    else
    {
        b="Salah Input";
    }

    printf("\nKonversi angka ke huruf dari %d : %s\n",a,b);
    return 0;
}
