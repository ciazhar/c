#include "stack.h"


int main()
{
    Stack Box; //deklarasi STACK dengan nama kotak untuk menampung buah
    CreateEmpty(&Box); // inisialisasi stack ke NULL

    Stack Melon,Nanas,Jeruk,Salak; //dekrlarasi STACK dengan nama buah
    CreateEmpty(&Melon); //inisialisasi Stack ke NULL
    CreateEmpty(&Nanas); //inisialisasi Stack ke NULL
    CreateEmpty(&Jeruk); //inisialisasi Stack ke NULL
    CreateEmpty(&Salak); //inisialisasi Stack ke NULL


    puts("\t\tSOAL PEMAHAMAN PSDA 10 STACK , KERANJANG BUAH");
    puts("\t\t---- --------- ---- -- ----- - --------- ----\n\n");

    puts("Isi keranjang sekarang.");
    puts("-----------------------");

    // Pengisian Box dengan buah-buahan
    PUSH(&Box,"Nanas"); //1
    PUSH(&Box,"Salak"); //2
    PUSH(&Box,"Salak"); //3
    PUSH(&Box,"Nanas"); //4
    PUSH(&Box,"Melon"); //5
    PUSH(&Box,"Jeruk"); //6
    PUSH(&Box,"Melon"); //7
    PUSH(&Box,"Nanas"); //8
    PUSH(&Box,"Melon"); //9
    PUSH(&Box,"Salak"); //10
    PUSH(&Box,"Jeruk"); //11
    PUSH(&Box,"Salak"); //12
    PUSH(&Box,"Melon"); //13
    PUSH(&Box,"Nanas"); //14
    PUSH(&Box,"Jeruk"); //15
    PUSH(&Box,"Jeruk"); //16

    //tampilkan isi keranjang dan kotak buah
    ShowFruits(Box);
    ShowKeranjang(Melon,Nanas,Jeruk,Salak);


    puts("\n\n\t\tKONDISI SETELAH DILAKUKAN PEMINDAHAN BUAH");
    puts("\t\t------- ------- --------- ---------- ----\n\n");

    //**************WORKSPACE SOAL PEMAHAMAN ***************//
    // Algoritma
    // Initial State : deklarasikan dulu type data char dengan array ukuran 20 , nama variabelnya buah.
    // ------------------------------------------------------------------------------------------------
    // 1.> Selama Box tidak kosong , maka lakukan . . .
    // 2.> Ambil isi buahnya , tampung buah yang diambil pada variabel yang sudah dideklarasikan.
    // 2.> cek kondisi terhadap isi buahnya
    // 3.> jika buah yang didapat adalah Nanas , maka masukan ke dalam keranjang nanas.
    // 4.> jika buah yang didapat adalah Salak , maka masukan ke dalam keranjang salak.
    // 5.> lakukan cek kondisi yang sama pada buah Melon dan Jeruk.
    // 6.> setelah pencarian selesai , cetak isi Box buah dan isi keranjang pada masing-masing buah.


    char buah[20];

    while(!IsEmpty(Box)){
        POP(&Box,buah);

        if(strcmp(buah, "Nanas") == 0){
            PUSH(&Nanas,buah);
        }else if(strcmp(buah, "Salak") == 0){
            PUSH(&Salak,buah);
        }else if(strcmp(buah, "Jeruk") == 0){
            PUSH(&Jeruk,buah);
        }else{
            PUSH(&Melon,buah);
        }
    }
    ShowKeranjang(Melon,Nanas,Jeruk,Salak);

//    POP(&Box,buah);
//    PUSH(&temp,buah);
//
//    ShowFruits(temp);


    /*char nama1[100];
    char nama2[100];

    strcpy(nama1,"nama saya");
    strcpy(nama2,"nama saya");

    printf("nama1 = %s\n",nama1);
    printf("nama2 = %s\n",nama2);

    int hasil;

    hasil = strcmp(nama1,nama2);

    printf("hasil = %d\n",hasil);

    if(hasil == 0){
        printf("string sama");
    }*/

    return 0;
}
