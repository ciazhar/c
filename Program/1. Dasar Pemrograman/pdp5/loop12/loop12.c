#include <stdio.h>
#include <stdlib.h>

int main()
{   int f,c,c2;
    float f2;

    printf("_________________________________________________________________\n");
    printf("|   Celcius     |  Fahrenheit   ||   Fahrenheit |    Celcius    |\n");
    printf("-----------------------------------------------------------------\n");
    for (c=1,f=1;c<=100,f<=100;c++,f++)
        {
            f2=((c*9)/5)+32;
            c2=((f-32)*5)/9;
    printf("|\t%d\t|\t%0.1f\t||\t%d\t|\t%d\t|\n",c,f2,f,c2);
        }
    printf("----------------------------------------------------------------\n");
    return 0;
}
