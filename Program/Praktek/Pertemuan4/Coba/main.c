#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    char nilaihuruf;

    printf("Input Nilai:");
    scanf("%d",&nilai);

    if(nilai>=85&&nilai<=100){
        nilaihuruf='A';
    }else if(nilai>=70&&nilai<85){
        nilaihuruf='B';
    }else if(nilai>=60&&nilai<70){
        nilaihuruf='C';
    }else if(nilai>=50&&nilai<60){
        nilaihuruf='D';
    }else if(nilai<50){
        nilaihuruf='E';
    }else
        printf("Salah Jon\n");
    printf("Nilai Huruf: %c",nilaihuruf);

    return 0;
}
