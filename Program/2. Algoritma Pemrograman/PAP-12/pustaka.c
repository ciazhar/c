#include "pustaka.h"

date makeDate(int tgl, int bln, int thn){
    date balikan;
    if((tgl>0&&tgl<32)&&(bln>0&&bln<13)){
        balikan.tgl=tgl;
        balikan.bln=bln;
        balikan.thn=thn;
    }
    else{

    }
    return balikan;
}
mahasiswa makeMhs(char *nim, char *nama, date lahir, float ipk){
    mahasiswa balikan;
    strcpy(balikan.nim,nim);
    strcpy(balikan.nama,nama);
    balikan.tgl_lahir=lahir;
    balikan.ipk=ipk;

    return balikan;
}
void printDate(date tanggal){
    char bulan[30];
    if(tanggal.bln==1){
        strcpy(bulan,"Januari");
        //bulan="Januari";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==2){
        strcpy(bulan,"Februari");
        //bulan="Februari";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==3){
        strcpy(bulan,"Maret");
        //bulan="Maret";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==4){
        strcpy(bulan,"April");
        //bulan="April";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==5){
        strcpy(bulan,"Mei");
        //bulan="Mei";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==6){
        strcpy(bulan,"Juni");
        //bulan="Juni";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==7){
        strcpy(bulan,"Juli");
        //bulan="Juli";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==8){
        strcpy(bulan,"Agustus");
        //bulan="Agustus";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==9){
        strcpy(bulan,"September");
        //bulan="September";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==10){
        strcpy(bulan,"Oktober");
        //bulan="Oktober";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==11){
        strcpy(bulan,"November");
        //bulan="November";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else if(tanggal.bln==12){
        strcpy(bulan,"Desember");
        //bulan="Desember";
        printf("%d-%s-%d\n",tanggal.tgl,bulan,tanggal.thn);
    }
    else {
        printf("Salah Input");
    }
}
void listAllMhs(mahasiswa *data){
    int i=0;
    while(i<4){
        printf("| %s |",data[i].nim);
        printf(" %s |",data[i].nama);
        printf(" %d-%d-%d |",data[i].tgl_lahir.tgl,data[i].tgl_lahir.bln,data[i].tgl_lahir.thn);
        printf(" %0.2f |\n",data[i].ipk);
        i++;
    }
}
void listByIPK(mahasiswa *data, char criteria, float ipk){
    int i=0;
    while(i<4){
        if(criteria=='='){
            if(data[i].ipk==ipk){
                printf("| %s |",data[i].nim);
                printf(" %s |",data[i].nama);
                printf(" %d-%d-%d |",data[i].tgl_lahir.tgl,data[i].tgl_lahir.bln,data[i].tgl_lahir.thn);
                printf(" %0.2f |\n",data[i].ipk);
            }
        }
        else if(criteria=='>'){
            if(data[i].ipk>ipk){
                printf("| %s |",data[i].nim);
                printf(" %s |",data[i].nama);
                printf(" %d-%d-%d |",data[i].tgl_lahir.tgl,data[i].tgl_lahir.bln,data[i].tgl_lahir.thn);
                printf(" %0.2f |\n",data[i].ipk);
            }
        }
        else if(criteria=='<'){
            if(data[i].ipk<ipk){
                printf("| %s |",data[i].nim);
                printf(" %s |",data[i].nama);
                printf(" %d-%d-%d |",data[i].tgl_lahir.tgl,data[i].tgl_lahir.bln,data[i].tgl_lahir.thn);
                printf(" %0.2f |\n",data[i].ipk);
            }
        }
        i++;
    }
    printf("\n");
}
void mhsSortByName(mahasiswa *data){
    int min;
    mahasiswa temp;
    int i=0;
    int j;

    while(i<4-1){
        min=i;
        j=i+1;
        while(j<4){
            if(strcmp(data[j].nama,data[min].nama)){
                min=j;
            }
            if(min!=i){
                temp=data[min];
                data[min]=data[i];
                data[i]=temp;
            }
            j++;
        }
        i++;
    }
}
void mhsSortByIPK(mahasiswa *data){
    mahasiswa temp;
    int i=0;
    int j;

    while(i<4){
        j=0;
        while(j<4-1){
            if(data[j].ipk>data[j+1].ipk){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
            j++;
        }
        i++;
    }
}
mahasiswa findMhsByNIM(mahasiswa *data, char *nim){
    int i=0,count=0;
    mahasiswa null;

    while(i<4){
        if(strcmp(data[i].nim,nim)==0){
            return data[i];
            count++;
        }
        i++;
    }
    if(count==0){
        printf("NULL");
    }
}
