///Awal Definisi pustaka.h
#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

///Deklarasi Boolean
 #define true 1
 #define false 0
 #define boolean unsigned char

///Deklaraksi struktur{
struct tanggal_{///struct bernama tanggal_
    int date;///variabel bernama date bertipe data integer. digunakan sebagai wadah tanggal lahir
    int month;///variabel bernama month bertipe data integer. digunakan sebagai wadah bulan lahir
    int year;///variabel bernama year bertipe data integer. digunakan sebagai wadah tahun lahir
};
typedef struct tanggal_ tanggal;///variabel bernama tanggal bertipe data sruct tanggal_
struct nama_{///struct bernama nama_
    char namaDepan[10];///variabel bernama namaDepan bertipe data string. digunakan sebagai wadah nama depan
    char namaBelakang[10];///variabel bernama namaBelakang bertipe data string. digunakan sebagai wadah nama belakang
};
typedef struct nama_ nama;///variabel bernama nama bertipe data struct nama_
struct email_{///struct bernama email_
    struct nama_ nama;///variabel bernama nama bertipe data struct nama_. digunakan sebagai wadah nama
    char namaEmail[20];///variabel bernama namaEmail bertipe data string. digunakan sebagai wadah nama email
    char password[20];///variabel bernama password bertipe data string. digunakan sebagai wadah password
    struct tanggal_ tanggal;///variabel bernama tanggal bertipe data struct tanggal_. digunakan sebagai wadah tanggal
    boolean gender;///variabel bernama gender bertipe data boolean. digunakan sebagai wadah inisialisasi gender(pria=1,wanita=0)
    int noHp;///variabel bernama noHp bertipe data integer. digunakan sebagai wadah nomer hp
};
typedef struct email_ email;///variabel bernama email bertipe data email_

///Deklarasi fungsi/prosedur
void Tulis(email databaseEmail[], int N);
void Baca(email databaseEmail[], int N);
void SortNamaAsc(email databaseEmail[], int N);
void SortEmailAsc(email databaseEmail[], int N);
void SortTanggalAsc(email databaseEmail[], int N);
void SortTanggalDesc(email databaseEmail[], int N);
void SortGenderCoCe(email databaseEmail[], int N);
void SortGenderCeCo(email databaseEmail[], int N);
void SortNoHpAsc(email databaseEmail[], int N);
void SortNoHpDesc(email databaseEmail[], int N);
void SearchNama(email databaseEmail[], int N, email cari[]);
void SearchEmail(email databaseEmail[], int N, email cari[]);
void SearchTanggal(email databaseEmail[], int N, email cari[]);
void SearchGender(email databaseEmail[], int N, email cari[]);
void SearchNoHp(email databaseEmail[], int N, email cari[]);

#endif // PUSTAKA_H_INCLUDED

///Akhit Definisi pustaka.h
