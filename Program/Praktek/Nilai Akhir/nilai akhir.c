#include <stdio.h>
#include <stdlib.h>

int UTS, UAS, Tgs, akhir;

main()
{
    int NA,grade;

    printf ("Masukan nilai UTS : ");
    scanf ("%d",&UTS);

    printf ("Masukan nilai UAS : ");
    scanf ("%d",&UAS);

    printf ("Masukan nilai Tugas : ");
    scanf ("%d",&Tgs);

    NA=persentase(UTS,UAS,Tgs);

    if((NA>=85)&&(NA<=100))
    {
     printf("Nilai Akhir adalah : %d dengan grade A",NA);
    }
    else if((NA>=70)&&(NA<=84))
    {
     printf("Nilai Akhir adalah : %d dengan grade B",NA);
    }
    else if((NA>=60)&&(NA<=69))
    {
     printf("Nilai Akhir adalah : %d dengan grade C",NA);
    }
    else if((NA>=50)&&(NA<=59))
    {
     printf("Nilai Akhir adalah : %d dengan grade D",NA);
    }
    else
    {
     printf("Nilai Akhir adalah : %d dengan grade D",NA);
    }

    return 0;
}

int persentase(int UTS, int UAS, int Tgs)
{
    akhir=(UTS*30/100)+(UAS*40/100)+(Tgs*30/100);
    return (akhir);
}
