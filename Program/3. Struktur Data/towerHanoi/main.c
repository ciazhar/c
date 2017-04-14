#include "header.h"

int main()
{

    int i;

    int CMain, TotalDisk, MFrom, MTo, MCount;
    Address P;

    // membuat 3 stack (tower)
    Stack Tower[3];
    for (i = 0; i < 3; i++)
        CreateStack(&Tower[i]);

    // membuat menu program
    do
    {
        system("cls");
        printf("================\n");
        printf(" TOWER OF HANOI\n");
        printf("================\n");
        printf(" 1. New Game\n");
        printf(" 2. Credits\n");
        printf(" 3. Quit\n");
        printf("================\n\n");
        printf(" Your Input: ");
        scanf("%d", &CMain);
        switch (CMain)
        {
        case 1:
            do
            {
                system("cls");
                printf("================\n");
                printf("    NEW GAME\n");
                printf("================\n");
                printf(" Total Disk: ");
                scanf("%d", &TotalDisk);
                if (TotalDisk <= 0)
                {
                    printf("\n Invalid input. Please input again.\n");
//                    getch();
                }
            }
            while (TotalDisk <= 0);

            // menyisipkan piringan yang telah diinput kedalam stack (tower) pertama
            for (i = 0; i < TotalDisk; i++)
                Push(&Tower[0], Allocate(TotalDisk - i));

            // obey the rule
            MCount = 0;
            do
            {
                system("cls");
                for (i = 0; i < 3; i++)
                {
                    printf("\n Tower %d: ", i + 1);
                    ViewStack(Tower[i]);
                }
                printf("\n\n");
                ViewVisual(Tower, TotalDisk);
                printf("\n\n Move Count: %d\n\n", MCount);
                printf("\n Move From : ");
                scanf("%d", &MFrom);
                printf("\n      To   : ");
                scanf("%d", &MTo);
                MFrom--;
                MTo--;

                if (MFrom >= 0 && MFrom <= 2 && MTo >= 0 && MTo <= 2)
                {
                    if (!IsEmpty(Tower[MFrom]))
                    {
                        if (IsEmpty(Tower[MTo]))
                        {
                            Pop(&Tower[MFrom], &P);
                            Push(&Tower[MTo], P);
                            MCount++;
                        }
                        else if (Info(Top(Tower[MTo])) > Info(Top(Tower[MFrom])))
                        {
                            Pop(&Tower[MFrom], &P);
                            Push(&Tower[MTo], P);
                            MCount++;
                        }
                        else
                        {
                            printf("\n Invalid move. Please input your move again.\n");
//                            getch();
                        }
                    }
                    else
                    {
                        printf("\n Invalid move. Please input move again.\n");
//                        getch();
                    }
                }
                else
                {
                    printf("\n Invalid move. Please input move again.\n");
//                    getch();
                }
            }
            while (Count(Tower[1]) != TotalDisk && Count(Tower[2]) != TotalDisk);
            system("cls");
            for (i = 0; i < 3; i++)
            {
                printf("\n Tower %d: ", i + 1);
                ViewStack(Tower[i]);
            }
            printf("\n\n");
            ViewVisual(Tower, TotalDisk);
            printf("\n\n Move Count: %d\n", MCount);
            printf("\n Congratulation, you win!\n");
//            getch();

            while (!IsEmpty(Tower[1]))
            {
                Pop(&Tower[1], &P);
                DeAllocate(P);
            }
            while (!IsEmpty(Tower[2]))
            {
                Pop(&Tower[2], &P);
                DeAllocate(P);
            }

            break;
        case 2:
            system("cls");
            printf("==================================\n");
            printf("        TOWER OF HANOI\n");
            printf(" Copyright @ndhaperdana\n");
            printf("==================================\n\n");
//            getch();
            break;
        case 3:
            printf("\n Thanks for playing.\n");
//            getch();
            break;
        default:
            printf("\n Invalid input. Please input again.\n");
//            getch();
        }
    }
    while (CMain != 3);


    return 0;
}
