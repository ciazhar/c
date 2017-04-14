#include "header.h"

int main()
{
        printf("Masukan Size Queue : "); scanf("%d",&Batas);
        CreateEmpty(&Q,Batas);
    do{
        system("cls");
        printf("=============================================================================\n");
        Antrian(Q);
        printf("=============================================================================\n\n");

        printf("Jumlah Element Dalam Antrian : %d\n",NBElmt(Q));
        printf("=============================================================================\n");
        printf("TAIL : %d\t",TAIL(Q));
        printf("InfoTail : %d\t",InfoTail(Q));
        printf("HEAD : %d\t",HEAD(Q));
        printf("InfoHead : %d\t\n",InfoHead(Q));
        printf("=============================================================================\n");
        printf("Menu Pilihan \n");
        printf("1. Add \n");
        printf("2. Delete \n");
        printf("3. CreateEmpty \n");
        printf("4. DeAlokasi \n");
        printf("5. Exit \n");
        printf("Masukan Pilian : "); scanf("%d",&menu);


        switch(menu){
        case 1 :
            system("cls");
            if(IsFull(Q)==true){
                printf("Maaf stack penuh. . . . .!!!!\n");
            }else{
                printf("Masukan Bilangan Kedalam Antrian : "); scanf("%d",&X);
                Add(&Q,X);
                printf("Angka %d telah dimasukan kedalam antrian\n", X);
            }
            printf("\n\nTekan Enter Untuk Kembali Ke Menu Utama :)");
            getche();
            break;
        case 2 :
            system("cls");
            Antrian(Q);
            if(IsEmpty(Q)==true){
                printf("\nMaaf Stack Kosong. . . . !!!!!\n\n\n");
            }else{
                printf("Masukan Angka Ke - %d dalam Antrian : ", HEAD(Q)); scanf("%d",&X);
                Del(&Q,&X);
                printf("Antrian Ke - %d Dengan Member ( %d ) Berhasil Dihapus\n\n", (HEAD(Q)-1), X);
            }
            printf("Tekan Enter Untuk Kembali Ke Menu Utama :)");
            getche();
            break;
        case 3 :
            system("cls");
            CreateEmpty(&Q,Batas);
            printf("Queue Berhasil DiKosongkan. . . .\n\n\n");
            printf("\n\nTekan Enter Untuk Kembali Ke Menu Utama :)");
            getche();
            break;
        case 4 :
            system("cls");
            DeAlokasi(&Q);
            printf("Queue Berhasil Di DeAlokasi. . . .  :)\n\n\n");
            printf("\n\nTekan Enter Untuk Kembali Ke Menu Utama :)");
            getche();
            break;
        case 5 :
            printf("Terima Kasih. . . .  :)\n\n\n");
            getche();
            return 0;
            break;
        }
    }while(menu!=5);
    return 0;
}
