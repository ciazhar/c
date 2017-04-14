
#include "list.h"

void menu ()
{
    puts("\nList of available Options :");
    puts("------ ---- ------ ------");
    puts("1> Insert First(Awal).");
    puts("2> Insert Last (Akhir).");
    puts("3> Delete First (Awal).");
    puts("4> Delete Last (Akhir).");
    puts("5> Search Elemen Data");
    puts("6> Insert after Elemen X.");
    puts("0> Keluar.");
    puts("==================================");
    puts("");
}

int main()
{


    List L;
    int data,data2;
    int select;
    createList(&L);

    printf("\t\t       PSDA-07 . VARIASI LIST LINIER \n\n");
    printf("\t\tADT List First-Last dengan Dummy pada Last \n");
    puts("\t\t---- ---- ----- ---- ------ ----- ---- ---\n\n");
    printf("Apakah List masih kosong? = %s\n",IsEmpty(L)?"TRUE":"FALSE");

    menu();

    printf("Input pilihan = ");fflush(stdin);scanf("%d",&select);
    ////////////////////////////////////////
    while (select != 7)
    {
        if (select== 1)
        {
            printf("Input Data pertama = ");scanf("%d",&data);
            InsVFirst(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select == 2)
        {
            printf("Input Data terakhir = ");scanf("%d",&data);
            InsVLast(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select== 3)
        {
            DelVFirst(&L,&data);
            printf("Hapus Data pertama = %d\n",data);
            ShowData(L);
            puts("");
        }
        else if (select == 4)
        {
            DelVLast(&L,&data);
            printf("Hapus Data terakhir  = %d\n",data);
            ShowData(L);
            puts("");
        }
        else if (select== 5)
        {
            printf("Input elemen yang dicari = ");scanf("%d",&data);
            printf("%s\n",FSearch(L,(Search_Add(L,data)))?"Data Ketemu...!":"Data tidak Ketemu...");
            puts("");
        }
        else if (select== 6)
        {
            printf("Input data setelah elemen ke = ");scanf("%d",&data2);
            printf("Masukan Info elemen data  = ");scanf("%d",&data);
            Insert_After(&L,data2,data);
            ShowData(L);
            puts("");
        }
        else
        {
            printf("\nTerlempar ke Angkasa :p");
            break;
        }
         printf("Input pilihan = ");fflush(stdin);scanf("%d",&select);
    }
    return 0;
}
