#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char mode;
float c,f;

int main()
{
    printf("Input Mode\nC For Celcius to Fahrenheit\nF For Fahrenheit to Celcius\n\t: ");
    scanf(" %c",&mode);
    for(;;)
    {
        if(tolower(mode)=='c'||tolower(mode)=='f')break;
        printf("Invalid Mode\n");
        printf("Re-input code : ");
        scanf(" %c",&mode);
    }
    switch(tolower(mode))
    {
    case'c':
        printf("Input C\t: ");
        scanf(" %f",&c);
        f=(c*1.8)+32;
        printf("%.2f C is %.2f F",c,f);break;
    case'f':
        printf("Input F\t: ");
        scanf(" %f",&f);
        c=(((f-32)*5)/9);
        printf("%.2f F is %.2f C",f,c);break;
    default:break;
    }
    return 0;
}
