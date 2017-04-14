#include "list.h"


int main()
{
    //******************************//
    //=====SOAL PEMAHAMAN PSDA5=====//
    //******************************//

    //==================SOAL NO 1=============================//
    //1. Menurut kawan-kawan "FIRSTAVAIL" itu buat apa sih ?? //
    //Jawaban = "Gunakan printf untuk menjawab ini ya :D"     //
    //                                                        //
    //==========================POIN 10=======================//


    //===========================SOAL NO 2========================================//
    //2. Buatlah sebuah PROSEDUR untuk memanipulasi LIST dengan ketentuan berikut.//                                               //
    //-------------------------------Manipulation_List----------------------------//
    //> lakukan pengecekan terhadap InfoFirst                                     //
    //> JIKA InfoFirst Genap DAN Positif ,maka lakukan InserVFirst Info dari FIRST//
    //> JIKA InfoFirst Ganjil DAN Negatif , maka lakukan DelVFirst                //
    //> SELAIN itu , tampilkan cerita curhatan anda (terserah)                    //
    //=================================POIN 70====================================//


    //======================SOAL NO 3 (BONUS)=====================//
    //3. buatlah sebuah PROSEDUR untuk menginputkan LIST dengan   //
    //   pola depan belakang secara bergantian , contoh ilustrasi //
    //   urutan proses input , 3 7 9 1 8                          //
    //   hasil outputnya harus seperti ini [8] [9] [3] [7] [1]    //
    //   Clue : pola inputan Depan Belakang :D                    //
    //==========================POIN 20===========================//

    //**********************************************************//
    //OKE SELAMAT MENGERJAKAN , YAKINLAH KALIAN PASTI BISA !! :D//
    //**********************************************************//
    List L,L2;

    int jumlah,input,i;

    createList(&L);
    createList(&L2);

    IniTabel();

    puts("\t\tPROGRAM LIST LINIER TABEL PSDA-05 PEMAHAMAN");
    puts("\t\t------- ---- ------ ----- ------- ---------\n");
    printf("Apakah List masih kosong? = %s\n",IsEmpty(L)?"TRUE":"FALSE");

    printf("\nInput Jumlah Elemen = ");scanf("%d",&jumlah);

    puts("");
    for (i=1;i<=jumlah;i++)
    {
        printf("Masukan elemen ke-%d = ",i);scanf("%d",&input);
        InsVLast(&L,input);
    }

    puts("\nData List Deafult.");
    ShowData(L);
    puts("");

    puts("================================Uji Soal Nomor 1.======================================");
    printf("isikan curhatanmu tentang FIRSTAVAIL di sini ya . . .");

    puts("\n\n================================Uji Soal Nomor 2.======================================");
    puts("List setelah dimanipulasi");
    Manipulation_List(&L);
    puts("");
    ShowData(L);


    puts("\n================================Uji Soal Nomor 3.======================================");
    DepanBlakang(&L2);
    ShowData(L2);

    return 0;
}
