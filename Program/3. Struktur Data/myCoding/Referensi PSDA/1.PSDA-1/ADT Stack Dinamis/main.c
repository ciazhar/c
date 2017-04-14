#include <stdio.h>
#include <stdlib.h>
#include "header.h"

//  Teguh Sunnarto
//  A11.2013.07455
//  A11.4317

int main()
{
    Stack S;
    int pilih,sz,a,b,c;


    printf("Masukkan Size Stack : ");
    scanf("%d",&sz);
    CreateEmpty(&S,sz);
    system("cls");


    do
    {
        printf("\tADT Stack Dinamis\n");
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Destruct\n");
        printf("4. Exit\n\n");
        printf("\t-------------------");
        printf("\n\tEmpty\t: %d\n",IsEmpty(S));
        printf("\tFull\t: %d\n",IsFull(S));
        printf("\tTOP\t: %d\n",TOP(S));
        printf("\tinfoTOP\t: %d\n", InfoTop(S));
        printf("\t-------------------\n");
        for(b=TOP(S);b>=1;b--)
        {
            printf("\t-> %d. %d\n",b,S.T[b]);
        }
        printf("\n\tTOP = %d\n",InfoTop(S));
        scanf("%d",&pilih);

        if(pilih==1)
        {
            printf("Masukkan Integer : ");
            scanf("%d", &a);
            system("cls");
            Push(&S,a);

        }
        else if(pilih==2)
        {
            system("cls");
            Pop(&S,&a);
        }
        else if (pilih==3)
        {
            Destruct(&S);
            printf("Stack Dihancurkan\n");
            break;
        }
        else
        break;
    }while(pilih!=4);
}
