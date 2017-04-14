///Include Library
#include "pustaka.h"
#include <stdio.h>
#include <stdlib.h>

///Deskripsi Prosedur/Fungsi
void Tulis(email databaseEmail[], int N){
    /**
        Prosedur yang berfungsi untuk menginputkan data email ke dalam array databaseEmail.
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0

    ///Deskripsi
    while (i<N){///looping untuk menginputkan data dari i sampai N
        printf("Masukkan Identitas ke %d\n",i+1);
        fflush(stdin);///sintaks yang berfungsi agar saat menginputkan string lalu integer/sebaliknya tidak terjadi eror pada memory
        printf("\nNama   : \n");
            printf("\tNama Depan    : ");scanf("%s",&databaseEmail[i].nama.namaDepan);///proses menginputkan nama depan
            printf("\tNama Belakang : ");scanf("%s",&databaseEmail[i].nama.namaBelakang);///proses menginputkan nama belakang
        printf("\nNama Email : ");scanf("%s",&databaseEmail[i].namaEmail);///proses menginputkan email
        printf("\npassword   : ");scanf("%s",&databaseEmail[i].password);///proses menginputkan password
        fflush(stdin);///sintaks yang berfungsi agar saat menginputkan string lalu integer/sebaliknya tidak terjadi eror pada memory
        printf("\nTanggal Lahir  : \n");
            printf("\tTanggal   : ");scanf("%d",&databaseEmail[i].tanggal.date);///proses menginputkan tanggal
            printf("\tBulan     : ");scanf("%d",&databaseEmail[i].tanggal.month);///proses menginputkan bulan
            printf("\tTahun     : ");scanf("%d",&databaseEmail[i].tanggal.year);///proses menginputkan tahun
        printf("\nGender (pria=1/wanita=0) : ");scanf("%d",&databaseEmail[i].gender);///proses menginputkan jenis kelamin
        printf("\nNoHp (ex : 6283838718716): ");scanf("%d",&databaseEmail[i].noHp);///proses menginputkan nomer hp
        fflush(stdin);///sintaks yang berfungsi agar saat menginputkan string lalu integer/sebaliknya tidak terjadi eror pada memory
        i++;///increment
    }
}
void Baca(email databaseEmail[], int N){
    /**
        Prosedur yang berfungsi untuk mengoutputkan data email dari dalam array databaseEmail.
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0

    ///Deskripsi
    while (i<N){///looping untuk mengooutputkan data dari i sampai N.
        printf("\nIdentitas ke %d\n",i+1);
        printf("\nNama          : %s %s\n",databaseEmail[i].nama.namaDepan,databaseEmail[i].nama.namaBelakang);///proses mengoutputkan nama
        printf("\nNama Email    : %s\n",databaseEmail[i].namaEmail);///proses mengoutputkan email
        printf("\npassword      : %s\n",databaseEmail[i].password);///proses mengoutputkan password
        printf("\nTanggal Lahir : %d-%d-%d\n",databaseEmail[i].tanggal.date,databaseEmail[i].tanggal.month,databaseEmail[i].tanggal.year);///proses mengoutputkan tanggal lahir
        printf("\nGender        : %s\n",databaseEmail[i].gender?"pria":"wanita");///proses mengoutputkan jenis kelamin, karena menggunakan tipe data boolean maka harus di convert ke string dengan cara tersebut
        printf("\nNoHp          : %d\n",databaseEmail[i].noHp);///proses mengoutputkan nomer hp
        i++;///increment
    }
}
void SortNamaAsc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan nama
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    int min;///variabel bernama min bertipe data integer. berfungsi sebagai tempat indeks nilai terkecil pada saat pembandingan 2 nilai
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N-1){///looping bagian luar untuk melakukan perpindahan indeks. sorting menggunakan cara selection sort
        min=i;///variabel min diisi dengan i karena digunakan sebagai tempat indeks terkecil
        j=i+1;///j diisi dengan i+1 untuk memberi jarak agar tidak terjadi kesalahan pembandingan
        while(j<N){///looping bagian dalam untuk melakukan swap. sorting menggunakan bubble sort
            if(strcmp(databaseEmail[min].nama.namaDepan,databaseEmail[j].nama.namaDepan)){///strcmp berfungsi untuk membandingkan 2 buah string dengan mengubahnya menjadi kumpulan data yang dapat dibandingkan secara matematis
                min=j;
            }
            if(min==i){
                if(strcmp(databaseEmail[min].nama.namaDepan,databaseEmail[j].nama.namaBelakang)){///strcmp berfungsi untuk membandingkan 2 buah string dengan mengubahnya menjadi kumpulan data yang dapat dibandingkan secara matematis
                    ///swap
                    temp=databaseEmail[min];
                    databaseEmail[min]=databaseEmail[i];
                    databaseEmail[i]=temp;
                }
            }
            else{
                ///swap
                temp=databaseEmail[min];
                databaseEmail[min]=databaseEmail[i];
                databaseEmail[i]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortEmailAsc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan email
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keseluruhan
    */

    ///Kamus
    int min;///variabel bernama min bertipe data integer. berfungsi sebagai tempat indeks nilai terkecil pada saat pembandingan 2 nilai
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N-1){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara selection sort
        min=i;///variabel min diisi dengan i karena digunakan sebagai tempat indeks terkecil
        j=i+1;///j diisi dengan i+1 untuk memberi jarak agar tidak terjadi kesalahan pembandingan
        while(j<N){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(strcmp(databaseEmail[min].namaEmail,databaseEmail[j].namaEmail)){///strcmp berfungsi untuk membandingkan 2 buah string dengan mengubahnya menjadi kumpulan data yang dapat dibandingkan secara matematis
                min=j;
            }
            if(min!=i){
                ///swap
                temp=databaseEmail[min];
                databaseEmail[min]=databaseEmail[i];
                databaseEmail[i]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortTanggalAsc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan tanggal dari terkecil hingga terbesar
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].tanggal.year>databaseEmail[j+1].tanggal.year){///kondisi jika tahun pertama lebih besar dari tahun berikutnya. jika terpenuhi akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            else if(databaseEmail[j].tanggal.year==databaseEmail[j+1].tanggal.year){///kondisi jika tahun pertama sama dengan tahun berikutnya.
                if(databaseEmail[j].tanggal.month>databaseEmail[j+1].tanggal.month){///kondisi jika bulan pertama lebih besar dari bulan berikutnya. jika terpenuhi akan melakukan swap
                    ///swap
                    temp=databaseEmail[j];
                    databaseEmail[j]=databaseEmail[j+1];
                    databaseEmail[j+1]=temp;
                }
                else if(databaseEmail[j].tanggal.month==databaseEmail[j+1].tanggal.month){///kondisi jika bulan pertama sama dengan bulan berikutnya.
                    if(databaseEmail[j].tanggal.date>databaseEmail[j+1].tanggal.date){///kondisi jika tanggal pertama lebih besar dari tanggal berikutnya. jika terpenuhi akan melakukan swap
                        ///swap
                        temp=databaseEmail[j];
                        databaseEmail[j]=databaseEmail[j+1];
                        databaseEmail[j+1]=temp;
                    }
                }
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortTanggalDesc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan tanggal dari terbesar hingga terkecil
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].tanggal.year<databaseEmail[j+1].tanggal.year){///kondisi jika tahun pertama lebih kecil dari tahun berikutnya. jika terpenuhi akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            else if(databaseEmail[j].tanggal.year==databaseEmail[j+1].tanggal.year){///kondisi jika tahun pertama sama dengan tahun berikutnya.
                if(databaseEmail[j].tanggal.month<databaseEmail[j+1].tanggal.month){///kondisi jika bulan pertama lebih kecil dari bulan berikutnya. jika terpenuhi akan melakukan swap
                    ///swap
                    temp=databaseEmail[j];
                    databaseEmail[j]=databaseEmail[j+1];
                    databaseEmail[j+1]=temp;
                }
                else if(databaseEmail[j].tanggal.month==databaseEmail[j+1].tanggal.month){///kondisi jika bulan pertama sama dengan bulan berikutnya.
                    if(databaseEmail[j].tanggal.date<databaseEmail[j+1].tanggal.date){///kondisi jika tanggal pertama lebih kecil dari tanggal berikutnya. jika terpenuhi akan melakukan swap
                        ///swap
                        temp=databaseEmail[j];
                        databaseEmail[j]=databaseEmail[j+1];
                        databaseEmail[j+1]=temp;
                    }
                }
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortGenderCoCe(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan jenis kelamin dari laki-laki hingga perempuan
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].gender<databaseEmail[j+1].gender){///kondisi jika jenis kelamin pertama perempuan dan jenis kelamin selanjutnya laki-laki akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortGenderCeCo(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan jenis kelamin dari perempuan hingga laki-laki
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].gender<databaseEmail[j+1].gender){///kondisi jika jenis kelamin pertama laki-laki dan jenis kelamin selanjutnya perempuan akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortNoHpAsc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan nomor hp dari terkecil hingga terbesar
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].noHp>databaseEmail[j+1].noHp){///kondisi jika no hp pertama lebih besar dari no hp kedua akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SortNoHpDesc(email databaseEmail[], int N){
    /**
        prosedur yang berfungsi untuk mengurutkan nomor hp dari terbesar hingga terkecil
        terdiri dari 2  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan dan N sebagai jumlah email keselumuhana
    */

    ///Kamus
    email temp;///variabel bernama temp bertipe data struct email. berfungsi sebagai perantara dalam melakukan swap
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.

    ///Deskripsi
    while(i<N){///looping bagian luar untuk melakukan perpindahan indeks.sorting menggunakan cara bubble sort
        j=0;
        while(j<N-1){///looping bagian dalam untuk melakukan swap. sorting menggunakan cara bubble sort
            if(databaseEmail[j].noHp<databaseEmail[j+1].noHp){///kondisi jika no hp pertama lebih kecil dari no hp kedua akan melakukan swap
                ///swap
                temp=databaseEmail[j];
                databaseEmail[j]=databaseEmail[j+1];
                databaseEmail[j+1]=temp;
            }
            j++;///increment
        }
        i++;///increment
    }
}
void SearchNama(email databaseEmail[], int N, email cari[]){
    /**
        prosedur yang berfungsi untuk mencari nama pada databaseEmail
        terdiri dari 3  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan, N sebagai jumlah email keselumuhana dan cari yang berfungsi sevagai wadah email yang ingin dicari
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.
    int coun=0;///variabel bernama coun dengan tipe data integer. digunakan sebagai penghitung ada berapa banyak data yang akan ditampilkan setelah proses pencarian. bernilai 0 karena sebagai formalitas bahwa belum ada nilai yang sama antara yang dicari dengan data pada databaseEmail

    ///Deskripsi
    while(i<N){///looping untuk melakukan pencarian.
        if(strcmp(databaseEmail[i].nama.namaDepan,cari[0].nama.namaDepan)==0){///strcmp berfungsi untuk membandingkan 2 buah string dengan mengubahnya menjadi kumpulan data yang dapat dibandingkan secara matematis. jika tidak ada perbedaan maka akan bernilai 0.jika kondisi terpenuhi maka data ditemukan
            coun=1;///formalitas data telah ditemukan
        }
        else if(strcmp(databaseEmail[i].nama.namaBelakang,cari[0].nama.namaDepan)==0){
            coun=1;///formalitas data telah ditemukan
        }
        if(coun==1){///kondisi jika data telah ditemukan akan melakukan pengoutputan data lengkap email
            printf("\nIdentitas ke %d\n",i+1);
            printf("\nNama   : \n");
                printf("\tNama Depan    : %s\n",databaseEmail[i].nama.namaDepan);
                printf("\tNama Belakang : %s\n",databaseEmail[i].nama.namaBelakang);
            printf("\nNama Email : %s\n",databaseEmail[i].namaEmail);
            printf("\npassword   : %s\n",databaseEmail[i].password);
            printf("\nTanggal Lahir  : \n");
                printf("\tTanggal   : %d\n",databaseEmail[i].tanggal.date);
                printf("\tBulan     : %d\n",databaseEmail[i].tanggal.month);
                printf("\tTahun     : %d\n",databaseEmail[i].tanggal.year);
            printf("\nGender    : %s\n",databaseEmail[i].gender?"pria":"wanita");
            printf("\nNoHp      : %d\n",databaseEmail[i].noHp);
        }
        i=i+1;///increment
    }
    if(coun==0){///kondisi jika tidak ditemukan
        printf("Data Tidak Ditemukan");
    }
}
void SearchEmail(email databaseEmail[], int N, email cari[]){
    /**
        prosedur yang berfungsi untuk mencari email pada databaseEmail
        terdiri dari 3  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan, N sebagai jumlah email keselumuhana dan cari yang berfungsi sevagai wadah email yang ingin dicari
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.
    int coun=0;///variabel bernama coun dengan tipe data integer. digunakan sebagai penghitung ada berapa banyak data yang akan ditampilkan setelah proses pencarian. bernilai 0 karena sebagai formalitas bahwa belum ada nilai yang sama antara yang dicari dengan data pada databaseEmail

    ///Deskripsi
    while(i<N){///looping untuk melakukan pencarian
        if(strcmp(databaseEmail[i].namaEmail,cari[0].namaEmail)==0){///strcmp berfungsi untuk membandingkan 2 buah string dengan mengubahnya menjadi kumpulan data yang dapat dibandingkan secara matematis. jika tidak ada perbedaan maka akan bernilai 0.jika kondisi terpenuhi maka data ditemukan
            coun=1;///formalitas data telah ditemukan
        }
        if(coun==1){///kondisi jika data telah ditemukan akan melakukan pengoutputan data lengkap email
            printf("\nIdentitas ke %d\n",i+1);
            printf("\nNama   : \n");
                printf("\tNama Depan    : %s\n",databaseEmail[i].nama.namaDepan);
                printf("\tNama Belakang : %s\n",databaseEmail[i].nama.namaBelakang);
            printf("\nNama Email : %s\n",databaseEmail[i].namaEmail);
            printf("\npassword   : %s\n",databaseEmail[i].password);
            printf("\nTanggal Lahir  : \n");
                printf("\tTanggal   : %d\n",databaseEmail[i].tanggal.date);
                printf("\tBulan     : %d\n",databaseEmail[i].tanggal.month);
                printf("\tTahun     : %d\n",databaseEmail[i].tanggal.year);
            printf("\nGender    : %s\n",databaseEmail[i].gender?"pria":"wanita");
            printf("\nNoHp      : %d\n",databaseEmail[i].noHp);
        }
        i=i+1;///increment
    }
    if(coun==0){///kondisi jika data tidak ditemukan
        printf("Data Tidak Ditemukan");
    }
}
void SearchTanggal(email databaseEmail[], int N, email cari[]){
    /**
        prosedur yang berfungsi untuk mencari tanggal pada databaseEmail
        terdiri dari 3  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan, N sebagai jumlah email keselumuhana dan cari yang berfungsi sevagai wadah email yang ingin dicari
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.
    int coun=0;///variabel bernama coun dengan tipe data integer. digunakan sebagai penghitung ada berapa banyak data yang akan ditampilkan setelah proses pencarian. bernilai 0 karena sebagai formalitas bahwa belum ada nilai yang sama antara yang dicari dengan data pada databaseEmail

    ///Deskripsi
    while(i<N){///looping untuk melakukan pencarian
        if(databaseEmail[i].tanggal.date==cari[0].tanggal.date&&databaseEmail[i].tanggal.month==cari[0].tanggal.month&&databaseEmail[i].tanggal.year==cari[0].tanggal.year){///kondisi jika tanggal yang dicari sama dengan tanggal pada databaseEmail maka akan mengoutputkan data lengkap email
            printf("\nIdentitas ke %d\n",i+1);
            printf("\nNama   : \n");
                printf("\tNama Depan    : %s\n",databaseEmail[i].nama.namaDepan);
                printf("\tNama Belakang : %s\n",databaseEmail[i].nama.namaBelakang);
            printf("\nNama Email : %s\n",databaseEmail[i].namaEmail);
            printf("\npassword   : %s\n",databaseEmail[i].password);
            printf("\nTanggal Lahir  : \n");
                printf("\tTanggal   : %d\n",databaseEmail[i].tanggal.date);
                printf("\tBulan     : %d\n",databaseEmail[i].tanggal.month);
                printf("\tTahun     : %d\n",databaseEmail[i].tanggal.year);
            printf("\nGender    : %s\n",databaseEmail[i].gender?"pria":"wanita");
            printf("\nNoHp      : %d\n",databaseEmail[i].noHp);
            coun++;///increment
        }
        i++;///increment
    }
    if(coun==0){///kondisi jika data tidak ditemukan
        printf("Data Tidak Ditemukan");
    }
}
void SearchGender(email databaseEmail[], int N, email cari[]){
    /**
        prosedur yang berfungsi untuk mencari jenis kelamin pada databaseEmail
        terdiri dari 3  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan, N sebagai jumlah email keselumuhana dan cari yang berfungsi sevagai wadah email yang ingin dicari
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.
    int coun=0;///variabel bernama coun dengan tipe data integer. digunakan sebagai penghitung ada berapa banyak data yang akan ditampilkan setelah proses pencarian. bernilai 0 karena sebagai formalitas bahwa belum ada nilai yang sama antara yang dicari dengan data pada databaseEmail

    ///Deskripsi
    while(i<N){///looping untuk melakukan pencarian
        if(databaseEmail[i].gender==cari[0].gender){///kondisi jika jenis kelamin yang dicari sama dengan jenis kelamin pada databaseEmail maka akan mengoutputkan data lengkap email
            printf("\nIdentitas ke %d\n",i+1);
            printf("\nNama   : \n");
                printf("\tNama Depan    : %s\n",databaseEmail[i].nama.namaDepan);
                printf("\tNama Belakang : %s\n",databaseEmail[i].nama.namaBelakang);
            printf("\nNama Email : %s\n",databaseEmail[i].namaEmail);
            printf("\npassword   : %s\n",databaseEmail[i].password);
            printf("\nTanggal Lahir  : \n");
                printf("\tTanggal   : %d\n",databaseEmail[i].tanggal.date);
                printf("\tBulan     : %d\n",databaseEmail[i].tanggal.month);
                printf("\tTahun     : %d\n",databaseEmail[i].tanggal.year);
            printf("\nGender    : %s\n",databaseEmail[i].gender?"pria":"wanita");
            printf("\nNoHp      : %d\n",databaseEmail[i].noHp);
            coun++;///increment
        }
        i++;///increment
    }
    if(coun==0){///kondisi jika data tidak ditemukan
        printf("Data Tidak Ditemukan");
    }
}
void SearchNoHp(email databaseEmail[], int N, email cari[]){
    /**
        prosedur yang berfungsi untuk mencari nomor hp pada databaseEmail
        terdiri dari 3  parameter yaitu databaseEmail yang berfungsi sebagai wadah email keseluruhan, N sebagai jumlah email keselumuhana dan cari yang berfungsi sevagai wadah email yang ingin dicari
    */

    ///Kamus
    int i=0;///variabel bernama i dengan tipe data integer yang bernilai 0. digunakan sebagai increment saat looping. bernilai 0 karena array dimulai dari 0
    int j;///variabel bernama j dengan tipe data integer. digunakan sebagai increment saat looping.
    int coun=0;///variabel bernama coun dengan tipe data integer. digunakan sebagai penghitung ada berapa banyak data yang akan ditampilkan setelah proses pencarian. bernilai 0 karena sebagai formalitas bahwa belum ada nilai yang sama antara yang dicari dengan data pada databaseEmail

    ///Deskripsi
    while(i<N){///looping untuk melakukan pencarian
        if(databaseEmail[i].noHp==cari[0].noHp){///kondisi jika nomor hp yang dicari sama dengan no hp pada databaseEmail maka akan mengoutputkan data lengkap email
            printf("\nIdentitas ke %d\n",i+1);
            printf("\nNama   : \n");
                printf("\tNama Depan    : %s\n",databaseEmail[i].nama.namaDepan);
                printf("\tNama Belakang : %s\n",databaseEmail[i].nama.namaBelakang);
            printf("\nNama Email : %s\n",databaseEmail[i].namaEmail);
            printf("\npassword   : %s\n",databaseEmail[i].password);
            printf("\nTanggal Lahir  : \n");
                printf("\tTanggal   : %d\n",databaseEmail[i].tanggal.date);
                printf("\tBulan     : %d\n",databaseEmail[i].tanggal.month);
                printf("\tTahun     : %d\n",databaseEmail[i].tanggal.year);
            printf("\nGender    : %s\n",databaseEmail[i].gender?"pria":"wanita");
            printf("\nNoHp      : %d\n",databaseEmail[i].noHp);
            coun++;///increment
        }
        i++;///increment
    }
    if(coun==0){///kondisi jika data tidak ditemukan
        printf("Data Tidak Ditemukan");
    }
}
