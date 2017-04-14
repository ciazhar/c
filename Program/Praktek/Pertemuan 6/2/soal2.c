#include <stdio.h>
#include <stdlib.h>
main ()
{
    int berat, tinggi;
    printf("masukan berat badan :"); scanf("%d",&berat);
    printf("masukan tinggi badan :"); scanf("%d",&tinggi);

    if (berat<50)
    {
    printf("kurus ");
    if ((tinggi<150))
    {
    printf("dan ideal");
    }
    else if ((tinggi>=150)&&(tinggi<=160))
    {
    printf("dan cukup ideal");
    }
    else
    {
    printf("dan kurang ideal");
    }
    }

    if ((berat>=50)&&(berat<=70))
    {
     printf("sedang ");
     if (tinggi<150)
     {
         printf("dan kurang ideal");
     }
     else if ((tinggi>=150) && (tinggi<=160))
     {
        printf("dan cukup ideal");
     }
     else
     {
         printf("dan ideal");
     }

    }


    if ((berat>=70)&&(berat<=100))
    {
     printf("gemuk ");
     if (tinggi<150)
     {
         printf("dan tidak ideal");
     }
     else if ((tinggi>=150) && (tinggi<=160))
     {
        printf("dan kurang ideal");
     }
     else
     {
         printf("dan ideal");
     }

    }
    else
    {
        printf("salah input");
    }
    return 0;
}
