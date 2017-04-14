#include "priority.h"

int main()
{
    P_QUEUE Q;


    char pilih;

    int data;
    int prio;

    CreateEmpty(&Q);

    printf("Apakah Queue masih kosong ? = %s\n",IsEmpty(Q)?"TRUE":"FALSE");

    puts("\npilih a untuk Input Elemen");
    puts("pilih b untuk menghapus elemen");
    for (;;)
    {
        printf("\nTentukan pilihan anda = ");fflush(stdin);scanf("%c",&pilih);
        switch (pilih)
        {
            case 'a' : printf("Masukan datanya = ");scanf("%d",&data);
                       printf("Masukan Prioritasnya = ");scanf("%d",&prio);
                       Add(&Q,data,prio);
                       Show_Data(Q);
                       break;
            case 'b' : if (IsEmpty(Q))
                       {
                            puts("Maaf Queue sudah kosong\n");
                       }
                       else
                       {
                           Del(&Q,&data);
                           printf("Data yang dihapus adalah = %d\n",data);
                           Show_Data(Q);
                       }

                       break;
            default : goto end_switch;break;
        }
    }


    end_switch:
    return 0;
}
