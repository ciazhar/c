/*
    Nama        : Muhammad Hafidz
    Kampus      : Universitas Dian Nuswantoro
    Fakultas    : Ilmu Komputer
    Jurusan     : Teknik Informatika S1
    NIM         : A11.2015.09000
    Kelompok    : A11.4210
*/


///Include Library
#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

///Kamus Global
int n; ///variabel bernama n bertipe data integer. Berfungsi untuk menentukan jumlah pengguna yang ingin dinputkan.
email dataEmail[10]; ///array bernama dataEmail bertipe data email. Memiliki range 0-10. Berfungsi sebagai wadah database email secara keseluruhan.
email srch[0]; ///array bernama srch bertipe data email.Memiliki range 0-0(hanya 1 slot). Berfungsi sebagai wadah untuk mencari data yang diinputkan.

///Awal main
int main()
{
    ///Kamus Lokal
    int pilihan; ///variabel bernama pilihan bertipe data integer. Berfungsi untuk memilih menu pada menu utama/awal
    char jawaban; ///varirabel bernama jawaban dengan tipe data char. Berfungsi sebagai opsi pilihan untuk menuju ke menu utama atau mengakhiri program setelah memilih memanggil program pada salah satu opsi menu utama

    ///Deskripsi
awal:{ ///Suatu field yang yang berfungsi sebagai menu utama
    printf("\t\t DATABASE EMAIL\n");
    printf("\t\t************\n");
    printf("0. Input Jumlah\n");
    printf("1. Input Data Email\n");
    printf("2. Output Data Email\n");
    printf("3. Sort Nama\n");
    printf("4. Sort Email\n");
    printf("5. Sort Tanggal Secara Ascending\n");
    printf("6. Sort Tanggal Secara Descending\n");
    printf("7. Sort Gender Cowok to Cewek\n");
    printf("8. Sort Gender Cewek to Cowok\n");
    printf("9. Sort Nomer HP Secara Ascending\n");
    printf("10. Sort Nomer HP Secara Descending\n");
    printf("11. Search Nama\n");
    printf("12. Search Email\n");
    printf("13. Search Tanggal\n");
    printf("14. Search Gender\n");
    printf("15. Search Nomer HP\n");
    printf("16. Exit\n");

    printf("Pilih Tugas: "); scanf("%d",&pilihan);}///proses input jawaban atas opsi pada menu utama(variabel pilihan)
    if(pilihan>16){///kondisi jika inputan salah maka akan kembali ke menu utama untuk dilakukan pemilihan opsi kembali
        goto awal;
    }
switch(pilihan)///proses switch berdasarkan variabel pilihan yang sudah diinputkan
{
case 0:///Ospi untuk menginputkan Jumlah pengguna yang ingin diinputkan
{
    system("cls");///sintaks untuk membersihkan layar
    printf("Masukkan Jumlah Pengguna : ");scanf("%d",&n);///proses input banyak data yang ingin diinputkan(variabel n)
    printf("\n");

    system("cls");///sintaks untuk membersihkan layar
    goto awal; ///pergi ke memu utama

}
case 1:///Opsi untuk menginputkan data email
    {
    system("cls");///sintaks untuk membersihkan layar

    Tulis(dataEmail,n);///memanggil prosedur Tulis

    pilih1: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih1
    {
        goto pilih1;
    }
    }
case 2:///Opsi untuk mengoutputkan data email
    {
    system("cls");///sintaks untuk membersihkan layar
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih2: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih2
    {
        goto pilih2;
    }
    }
case 3:///Opsi untuk mengurutkan nama
    {
    system("cls");///sintaks untuk membersihkan layar

    SortNamaAsc(dataEmail,n);///memanggil prosedur SortNamaAsc
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih3: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih3
    {
        goto pilih3;
    }
    }
case 4:///Opsi untuk mengurutkan email
    {
    system("cls");///sintaks untuk membersihkan layar
    SortEmailAsc(dataEmail,n);///memanggil prosedur SortEmailAsc
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih4: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih4
    {
        goto pilih4;
    }
    }
case 5:///Opsi untuk mengurutkan tanggal secara ascending
    {
    system("cls");///sintaks untuk membersihkan layar

    SortTanggalAsc(dataEmail,n);///memanggil prosedur SortTanggalAsc
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih5: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih5
    {
        goto pilih5;
    }
    }
case 6:///Ospi untuk mengurutkan tanggal secara descending
    {
    system("cls");///sintaks untuk membersihkan layar

    SortTanggalDesc(dataEmail,n);///memanggil prosedur SortTanggalDesc
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih8: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih8
    {
        goto pilih8;
    }
    }
case 7:///Opsi untuk mengurutkan jenis kelamin dari laki-laki sampai perempua
    {
    system("cls");///sintaks untuk membersihkan layar

    SortGenderCoCe(dataEmail,n);///memanggil prosedur SortGenderCoCe
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih9: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih9
    {
        goto pilih9;
    }
    }
case 8:///Opsi untuk mengurutkan jenis kelamin dari perempuan sampai laki-laki
    {
    system("cls");///sintaks untuk membersihkan layar

    SortGenderCeCo(dataEmail,n);///memanggil prosedur SortGenderCeCo
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih10: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih10
    {
        goto pilih10;
    }
    }
case 9:///Opsi untuk mengurutkan nomer HP secara ascending
    {
    system("cls");///sintaks untuk membersihkan layar

    SortNoHpAsc(dataEmail,n);///memanggil prosedur SortNoHpAsc
    Baca(dataEmail,n);///memanggil prosedut Baca

    pilih11: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih11
    {
        goto pilih11;
    }
    }
case 10:///Opsi untuk mengurutkan nomer HP Secara descending
    {
    system("cls");///sintaks untuk membersihkan layar

    SortNoHpDesc(dataEmail,n);///memanggil prosedur SortNoHpDesc
    Baca(dataEmail,n);///memanggil prosedur Baca

    pilih12: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih12
    {
        goto pilih12;
    }
    }
case 11:///Opsi untuk mencari nama pada dataEmail
    {
    system("cls");///sintaks untuk membersihkan layar

    printf("Masukkan Nama yang ingin dicari : ");scanf("%s",&srch[0].nama.namaDepan);///proses input nama yang ingin dicari dengan menggunakan struct
    SearchNama(dataEmail,n,srch);///memanggil prosedur SearchNama

    pilih13: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih13
    {
        goto pilih13;
    }
    }
case 12:///Opsi untuk mencari email pada dataEmail
    {
    system("cls");///sintaks untuk membersihkan layar

    printf("Masukkan Email yang ingin dicari : ");scanf("%s",&srch[0].namaEmail);///proses input email yang ingin dicari dengan menggunakan struct
    SearchEmail(dataEmail,n,srch);///memanggil prosedur SearchEmail

    pilih14: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih14
    {
        goto pilih14;
    }
    }
case 13:///Opsi untuk mencari tanggal pada dataEmail
    {
    system("cls");///sintaks untuk membersihkan layar

    printf("Masukkan Tanggal yang ingin dicari : ");scanf("%d",&srch[0].tanggal.date);///proses input tanggal yang ingin dicari dengan menggunakan struct
    printf("Masukkan Bulan yang ingin dicari : ");scanf("%d",&srch[0].tanggal.month);///proses input bulan yang ingin dicari dengan menggunakan struct
    printf("Masukkan Tahun yang ingin dicari : ");scanf("%d",&srch[0].tanggal.year);///proses input tahun yang ingin dicari dengan menggunakan struct

    SearchTanggal(dataEmail,n,srch);///memanggil prosedur SearchTanggal

    pilih15: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih15
    {
        goto pilih15;
    }
    }
case 14:///Search Gender
    {
    system("cls");///sintaks untuk membersihkan layar


    printf("Masukkan Gender yang ingin dicari : (pria=1/wanita=0)");scanf("%d",&srch[0].gender);///proses input gender yang ingin dicari dengan menggunakan struct
    SearchGender(dataEmail,n,srch);///memanggil prosedur SearchGender

    pilih16: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih16
    {
        goto pilih16;
    }
    }
case 15:///Search Nomer HP
    {
    system("cls");///sintaks untuk membersihkan layar

    printf("Masukkan NoHp yang ingin dicari : (ex : 6283838718716)");scanf("%d",&srch[0].noHp);///proses input noHp yang ingin dicari dengan menggunakan struct
    SearchNoHp(dataEmail,n,srch);///memanggil prosedur SearchNoHp

    pilih17: printf("\n\nKembali Ke Menu Awal?(Y/N)"); scanf("%s",&jawaban);///field untuk pemilihan opsi untuk kembali ke menu utama atau mengakhiri program melalui variabel jawaban
    getchar();
    if (jawaban=='Y'||jawaban=='y')///kondisi apabila terpenuhi akan kembali ke menu utama
    {

        system("cls");///sintaks untuk membersihkan layar

        goto awal;
    } if(jawaban=='N'||jawaban=='n')///kondisi apabila terpenuhi akan mengakhiri program
    {
        break;
    } else printf("Input Salah");///kondisi apabila tidak terpenuhi akan mengoutputkan pesan kesalahan dan akan kembali ke field pilih17
    {
        goto pilih17;
    }
    }
case 16:///Exit
    {
    break;///mengakhiri program
}

}
}
///Akhit main
