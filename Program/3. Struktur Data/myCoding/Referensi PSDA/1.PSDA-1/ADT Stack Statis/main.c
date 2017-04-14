#include <stdio.h>
#include <stdlib.h>
#include "head.h"

//  Teguh Sunnarto
//  A11.2013.07455
//  A11.4317


int main()
{
    Stack S;
    int pilih,a,b;

    CreateEmpty(&S);

    do
    {
        printf("\tADT Stack Statis\n\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.Keluar\n");
        printf("\t-----------------------------\n");
        printf("\tIsEmpty\t: %d\n",IsEmpty(S));
        printf("\tIsFull\t: %d\n",IsFull(S));
        printf("\tTop\t: %d\n",TOP(S));
        printf("\tInfoTop\t: %d\n",InfoTop(S));
        printf("\t-----------------------------\n");
        for(b=TOP(S);b>=1;b--)
        {
            printf("\t%d. %d\n",b,S.T[b]);
        }
        printf("\n\tTOP = %d\n",InfoTop(S));
        scanf("%d",&pilih);

        if(pilih==1)
        {
            printf("Input Bilangan : ");
            scanf("%d",&a);
            system("cls");
            Push(&S,a);
        }
        else if(pilih==2)
        {
            system("cls");
            Pop(&S,&a);
        }
        else
        break;
    }while(pilih!=3);
}
