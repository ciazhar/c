#include <stdio.h>
#include <stdlib.h>

int main()
{
         float c;
    float f;
    printf("|=============================================================|\n");
    printf("|Celcius    Fahrenheit   Keterangan                           |\n");
    printf("|=============================================================|\n");
    for (c=100;c>=-40;c--){f=((c*9)/5)+32;
    if(c==100)printf("| %5.0f   %10.1f     Air mendidih                         |\n",c,f);
    if(c==40)printf("| %5.0f   %10.1f     Air mandi panas                      |\n",c,f);
    if(c==37)printf("| %5.0f   %10.1f     Temperatur tubuh                     |\n",c,f);
    if(c==30)printf("| %5.0f   %10.1f     Cuaca Pantai                         |\n",c,f);
    if(c==21)printf("| %5.0f   %10.1f     Temperatur ruangan                   |\n",c,f);
    if(c==10)printf("| %5.0f   %10.1f     Hari yang dingin                     |\n",c,f);
    if(c==0)printf("| %5.0f   %10.1f     Titik beku air                       |\n",c,f);
    if(c==-18)printf("| %5.0f   %10.1f     Cuaca dingin bersalju                |\n",c,f);
    if(c==-40)printf("| %5.0f   %10.1f     Cuaca sangat dingin bersalju         |\n",c,f);
    }
    printf("|=============================================================|\n");

    return 0;
}
