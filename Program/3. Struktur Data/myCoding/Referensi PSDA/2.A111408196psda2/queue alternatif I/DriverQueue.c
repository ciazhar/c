#include "Queue.h"

int main()
{
    atas:
    system("CLS");
    printf("\nProgram stack alternatif I ");
    printf("\n\n1. IsEmpty");
    printf("\n2. IsFull");
    printf("\n3. Jumlah Elemen");
    printf("\n4. CreateEmpty");
    printf("\n5. Dealokasi");
    printf("\n6. Add");
    printf("\n7. Del");
    printf("\n8. Exit");
    printf("\n\nPilih salah satu [1-7] : ");
    scanf("%d",&pilihan);

    if(pilihan==1)
    {
        system("CLS");
        printf("\nApakah Queue Empety : %s",IsEmpty(f)?"Ya":"Tidak");
        getch();
        goto atas;
    }
    if(pilihan==2)
    {
        system("CLS");
        printf("\nApakah Queue Full : %s",IsFull(f)?"Ya":"Tidak");
        getch();
        goto atas;
    }
    if(pilihan==3)
    {
        system("CLS");
        printf("Jumlah elemen adalah : %d",NBElmt(f));
        getch();
        goto atas;
    }
    if(pilihan==4)
    {
        system("cls");
        printf("Masukkan Jumlah Tabel : ");
        scanf("%d",&jmlelm);
        CreateEmpty(&f,jmlelm);
        printf("Jumlah table adalah : %d",jmlelm);
        getch();
        goto atas;
    }
    if(pilihan==5)
    {
        system("cls");
        DeAlokasi(&f);
        printf("Tabel telah di dealokasi");
        getch();
        goto atas;
    }
    if(pilihan==6)
    {
        system("cls");
        if(MaxEl(f)==Nil)
        {
            printf("Table telah di dealokasi");
        }
        else
        {
            printf("\nMasukkan Berapa data yang akan di add maksimal %d : ",jmlelm);
            scanf("%d",&c);
            for(i=1;i<=c;i++)
            {
                printf("Indeks ke-%d : ",i);scanf("%d",&elmt);
                Add(&f,elmt);
            }
            tampil();
        }
        getch();
        goto atas;
    }
    if(pilihan==7)
    {
        system("CLS");
        if(MaxEl(f)==Nil)
        {
            printf("Table telah di dealokasi");
        }
        else
        {
            printf("\nMasukkan berapa data yang akan di del : ");
            scanf("%d",&c);
            for(i=Head(f);i<=c;i++)
            {
                Del(&f,&InfoHead(f));
            }
            tampil();
        }
        getch();
        goto atas;
    }
    if(pilihan==8)
    {
        printf("Terimakasih See u Next Time :D");
        exit(1);
    }
    else
    {
        system("cls");
        printf("Inputan yang anda masukkan salah");
        goto atas;
    }
    return 0;
}
