#include "pustaka.h"

int hitungdus(float panjang, float lebar){/*prosedur yang digunakan untuk mencari jumlah dus tekel yang akan ditempel ke ruangan*/
    ///Kamus
    float luas;///luas ruangan
    float luasTekelPerDus;///tetapan luas tekel per dus
    luasTekelPerDus=0,4*0,4*9;
    int dusGenap;///jumlah dus apabila dibuat genap
    int jmlDus;///jumlah dus yang dibutuhkan

    ///Deskripsi
    luas=panjang*lebar;
    dusGenap=luas/luasTekelPerDus;
    if(luas%luasTekelPerDus==0){
        jmlDus=dusGenap+1;
    }
    else {
        jmlDus=dusGenap;
    }
    return jmlDus;
}
int hitungdana(int dus);
int hituungpecah(float pj, float lb, float pj_skat);
