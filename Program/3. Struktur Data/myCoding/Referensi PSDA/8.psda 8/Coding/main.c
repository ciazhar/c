#include "container.h"

int main()
{
    List m;
    CreateList(&m);

    InsertVFirst(&m, 1);
    InsertVFirst(&m, 2);
    InsertVFirst(&m, 3);
    InsertVFirst(&m, 4);
    InsertVFirst(&m, 5);
    printf("Rangkaian List : \n");
    PrintInfo(m);

    printf("\n\nMenambahkan '8' pada bagian awal rangkaian :");
    InsertVFirst(&m, 8);
    printf("\n");
    PrintInfo(m);

    printf("\n\nMenambahkan '9' setelah rangkaian ke-2 : ");
    InsertVAfter(&m, 9, 2);
    printf("\n");
    PrintInfo(m);

    printf("\n\nMenambahkan '10' pada bagian akhir rangkaian : ");
    InsertVLast(&m, 10);
    printf("\n");
    PrintInfo(m);

    printf("\n\nMelepaskan '8' pada bagian awal rangkaian : ");
    DelVFirst(&m, 8);
    printf("\n");
    PrintInfo(m);

    printf("\n\nMelepaskan '4' setelah gerbong ke-2 : ");
    int a;
    DelVAfter(&m, &a, 2);
    printf("\n");
    PrintInfo(m);

    printf("\n\nMelepaskan '10' pada bagian akhir rangkaian : ");
    int b;
    DelVLast(&m, &a);
    printf("\n");
    PrintInfo(m);

    printf("\n\nAlamat gerbong yang bernilai '9' pada rangkaian : ");
    printf("\n");
    printf("%p", Search(m, 9));

    printf("\n");


    return 0;
}
