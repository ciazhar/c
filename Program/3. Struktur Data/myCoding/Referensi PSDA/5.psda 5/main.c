#include "list.h"

void menu ()
{
    puts("\ntabel Pilihan Menu: ");
    puts("------ ---- ------");
    puts("A> Input Data List (Awal).");
    puts("B> Input Data List (Akhir).");
    puts("C> Delete Data List (Awal).");
    puts("D> Delete Data List (Akhir).");
    puts("E> Delete Data List (Elemen X).");
    puts("F> Cari Nilai MAX.");
    puts("G> Cari Nilai MIN.");
    puts("H> Hitung Jumlah Elemen.");
    puts("I> Cari Nilai AVERAGE.");
    puts("J> Membalik Isi List.");
    puts("K> Gabungkan 2 List Menjadi 1.");
    puts("L> Cari Elemen List.");
    puts("Z> Keluar.");
    puts("==================================");
    puts("");
}

int main()
{
    List L2,L3;
    int banyak,data,i;
    char select;

    CreateList(&L);
    CreateList(&L2);
    CreateList(&L3);
    IniTabel();

    printf("Apakah List masih kosong? = %s\n",IsEmpty(L)?"TRUE":"FALSE");

    menu();

    printf("Silahkan Inputkan Data yang akan kamu pilih [a-z] = ");fflush(stdin);scanf("%c",&select);

    while (1)
    {
        if (select=='a')
        {
            printf("Masukan Data-nya kk = ");scanf("%d",&data);
            InsVFirst(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select =='b')
        {
            printf("Masukan Data-nya kk = ");scanf("%d",&data);
            InsVLast(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select=='c')
        {
            DelVFirst(&L,&data);
            printf("Data yang dihapus adalah = %d\n",data);
            ShowData(L);
            puts("");
        }
        else if (select =='d')
        {
            DelVLast(&L,&data);
            printf("Data yang dihapus adalah = %d\n",data);
            ShowData(L);
            puts("");
        }
        else if (select=='e')
        {
            printf("Masukan Data-nya kk = ");scanf("%d",&data);
            DelP(&L,data);
            ShowData(L);
            puts("");
        }
        else if (select=='f')
        {
            printf("Nilai MAX-nya adalah = %d\n",MAX(L));
            puts("");
        }
        else if (select=='g')
        {
            printf("Nilai MIN-nya adalah = %d\n",MIN(L));
            puts("");
        }
        else if (select=='h')
        {
            printf("Jumlah Elemennya adalah = %d\n",NbElmt(L));
            puts("");
        }
        else if (select=='i')
        {
            printf("Nilai AVERAGE-nya adalah = %.3f\n",AVERAGE(L));
            puts("");
        }
        else if (select=='j')
        {
            L = FInversList(L);
            ShowData(L);
            puts("");
        }
        else if (select=='k')
        {
            printf("Masukan banyak data pada List 1 = ");scanf("%d",&banyak);
            for (i=1;i<=banyak;i++)
            {
                printf("Masukan Data List Pertama kk = ");scanf("%d",&data);
                InsVLast(&L2,data);
            }

            CONCAT(&L,&L2,&L3);
            puts("List Setelah Digabung.");
            ShowData(L3);
            puts("");
        }
        else if (select=='l')
        {
            printf("Masukan Data yang ingin Dicar = ");scanf("%d",&data);
            printf("%s\n",(Search(Search_Add(L,data)))?"Data Ketemu...!":"Maff Data Tidak Ada...");
            puts("");
        }
        else if (select=='m')
        {
            PecahList(&L2,&L3,L);
            puts("Pecahan List Bagian Pertama");
            ShowData(L2);
            puts("Pecahan List Bagian Kedua");
            ShowData(L3);
            puts("");
        }
        else
        {
            puts("\nTerima kasih kk :D");
            break;
        }
        printf("Silahkan Inputkan Data yang akan kamu pilih [a-z] = ");fflush(stdin);scanf("%c",&select);
    }




    return 0;
}
