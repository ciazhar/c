/*
Aditya WIdayanto
A11.2015.08854
PSDA 1 _ Memori Statik
*/

#include "header.h"

int main()
{
    Stack S;
    int X;
    int menu = -1;          /// agar masuk perulangan INVINITY

    CreateEmpty(&S);

while ( menu != 0 )
{
    system("cls");
    PrintALLStack(S);
    printf("***************\n");
    printf("0. EXIT \n");
    printf("1. Push \n");
    printf("2. POP \n");
    printf("***************\n");
    printf("Pilih menu : "); scanf("%d", &menu);

    switch (menu )
    {
        case 0:
            return -1;
            break;
        case 1 :

                printf("Masukkan Angka : ");scanf("%d",&X);
                Push(&S,X);
                PrintStack(S);
                break;

        case 2 :
            POP(&S, &X);
            printf("\n %d Last POP\n",X);
            getche();
            break;


    }

}


/**
do
{
    PrintStack(S);
    printf("***************\n");
    printf("0. EXIT \n");
    printf("1. Push \n");
    printf("2. POP \n");
    printf("***************\n");
    printf("Pilih menu : "); scanf("%d", &menu);
    switch (menu )
    {
        case 0:
            return -1;
            break;
        case 1 :
            if ( S.TOP < 10 )
            {
                printf("Masukkan Angka : ");scanf("%d",&X);
                Push(&S,X);
                PrintStack(S);

                printf("\nisFull ? %s \n", isFull(S)==1?"True" : "False");
                getche();
                system ("cls");
            } else {
                printf("Stack Penuh\n");
                printf("isFull ? %s \n", isFull(S)==1?"True" : "False");
                getche();
                system ("cls");
            }
            break;
        case 2:
            if ( S.TOP > 0 )
            {
                POP(&S, &X);
                printf("\n %d Last POP\n",X);
                PrintStack(S);

                printf("\nisEmpty ? %s \n", isEmpty(S)==1?"True" : "False");
                getche();
                system ("cls");
            } else {
                printf("Stack KOSONG\n");
                printf("isEmpty ? %s \n", isEmpty(S)==1?"True" : "False");
                getche();
                system ("cls");
            }
            break;
        default :
            printf("Pilihan Anda tidak Tersedia. Silakan ulangi lagi\n");
            getche();
            system("cls");
    }

} while ( S.TOP != 99999999);
**/

/*
    printf("\nisEmpty ? %s \n", isEmpty(S)==1?"True" : "False");
    printf("\nisFull ? %s \n", isFull(S)==1?"True" : "False");
*/

    return 0;
}
