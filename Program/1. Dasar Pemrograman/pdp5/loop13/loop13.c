#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int c;
    float f;
    char k;

    printf("_________________________________________________________________\n");
    printf("|   Celcius     |  Fahrenheit   ||      Keterangan              |\n");
    printf("-----------------------------------------------------------------\n");
    for (c!=-40;;c++)
        {   printf("|\t",c);scanf("%d",&c);
            if (c==100)
            {
                k="Air Mendidih";
            }
            else if (c==40)
            {
                k="Air Mandi Panas";
            }
            else if (c==37)
            {
                k="Temperatur Tubuh";
            }
            else if (c==30)
            {
                k="Cuaca Pantai";
            }
            else if (c==21)
            {
                k="Temperatur Ruangan";
            }
            else if (c==10)
            {
                k="Hari Yang Dingin";
            }
            else if (c==0)
            {
                k="Titik Beku Air";
            }
            else if (c==-18)
            {
                k="Cuaca Dingin Bersalju";
            }
            else (c==-40);
            {
                k="Cuaca Sangat Dingi Bersalju";
                break;
            }
            f=((c*9)/5)+32;
        printf("\t|\t%f\t||   %s\t|\n",f,k);
        }
    printf("----------------------------------------------------------------\n");
    return 0;
}
