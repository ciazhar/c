/*
Aditya WIdayanto
A11.2015.08854
PSDA 1 _ TAMBAHAN Memori Dinamik
*/
#include "header.h"

int main()
{
    Stak S;
    int Size;
    int cek = 0;
    infotype X;
    int menu = -1 ;

while ( cek != 999999 ){
    Size = 0;

    printf("Masukkan Size yang diperlukan: "); scanf("%d", &Size);
    CreateEmpty(&S,Size);
    system("cls");
    do
    {
        menu = -1 ;
        printf("Size yang dialokasikan %d \n",Size);
        PrintALLStack (S);
        printf("***************\n");
        printf("0. Exit\n");
        printf("1. Push \n");
        printf("2. POP \n");
        printf("3. Destruct \n");
        printf("4. Realokasi \n");
        printf("***************\n");
        printf("Pilih menu : "); scanf("%d", &menu);
        switch (menu )
        {
            case 0 :
                return 0;
                break;
            case 1 :
                if ( S.TOP < S.Ukuran )
                {
                    printf("Masukkan Angka : ");scanf("%d",&X);
                    Push(&S,X);
                    PrintStack(S);

                    printf("\nisFull ? %s \n", IsFull(S)==1?"True" : "False");
                    getche();
                    system ("cls");
                } else {
                    printf("Stack Penuh\n");
                    printf("isFull ? %s \n", IsFull(S)==1?"True" : "False");
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

                    printf("\nisEmpty ? %s \n", IsEmpty(S)==1?"True" : "False");
                    getche();
                    system ("cls");
                } else {
                    printf("Stack KOSONG\n");
                    printf("isEmpty ? %s \n", IsEmpty(S)==1?"True" : "False");
                    getche();
                    system ("cls");
                }
                break;
            case 3:
                Destruct(&S);

                getche();
                system("cls");
                break;
            case 4:
                Destruct(&S);

                menu = 0 ;
                getche();
                system("cls");
                break;
            default :
                printf("Pilihan Anda tidak Tersedia. Silakan ulangi lagi\n");
                getche();
                system("cls");
        }

    } while ( menu != 0 );

}

    return 0;
}
