#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float f;
    printf("|===================|\n");
    printf("|Celcius |Fahrenheit|\n");
    printf("|===================|\n");
    for (c=0;c<=100;c++)
    {f=((c*9)/5)+32; printf("|%5.0f   |%8.1f  |\n",c,f);}
    return 0;
}
