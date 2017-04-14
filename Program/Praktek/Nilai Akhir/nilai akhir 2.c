#include <stdio.h>
#include <stdlib.h>

char huruf(int NA);

int UTS, UAS, Tgs;
main()
{
    char grade;
    int NA;
    printf ("Masukan nilai UTS : ");
    scanf ("%d",&UTS);

    printf ("Masukan nilai UAS : ");
    scanf ("%d",&UAS);

    printf ("Masukan nilai Tugas : ");
    scanf ("%d",&Tgs);

    NA=persentase(UTS,UAS,Tgs);
    grade=huruf(NA);

    printf("Nilai Akhir adalah : %d ",NA);
    printf("dengan grade : %c", grade);
    return 0;
}

int persentase(int UTS, int UAS, int Tgs)
{
    int akhir;
    akhir=(UTS*30/100)+(UAS*40/100)+(Tgs*30/100);
    return (akhir);
}

char huruf(int NA)
{
    if((NA>=85)&&(NA<=100))
    {
        return 'A';
    }
    else if((NA>=70)&&(NA<=84))
    {
        return 'B';
    }
    else if((NA>=60)&&(NA<=69))
    {
        return 'C';
    }
    else if((NA>=50)&&(NA<=59))
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}
