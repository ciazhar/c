/*
    NIM     : A11.2015.09000
    Nama    : Muhammad Hafidz
*/

#include <stdio.h>
#include <stdlib.h>

int fac(int n);
int tambah(int n, int m);

int main()
{
    int angka,a1,a2;
    printf("\t\t\tReskursif\n");
    printf("Faktorial\n");
    printf("Masukkan angka : ");scanf("%d",&angka);
    printf("Hasil dari %d! : %d",angka,fac(angka));
    printf("\n\nTambah\n");
    printf("Masukkan angka 1 : ");scanf("%d",&a1);
    printf("Masukkan angka 2 : ");scanf("%d",&a2);
    printf("Hasil dari %d + %d : %d",a1,a2,tambah(a1,a2));
    printf("\n\nPengurangan\n");
    printf("Masukkan angka 1 : ");scanf("%d",&a1);
    printf("Masukkan angka 2 : ");scanf("%d",&a2);
    printf("Hasil dari %d - %d : %d",a1,a2,kurang(a1,a2));
    printf("\n\nPerkalian\n");
    printf("Masukkan angka 1 : ");scanf("%d",&a1);
    printf("Masukkan angka 2 : ");scanf("%d",&a2);
    printf("Hasil dari %d x %d : %d",a1,a2,kali(a1,a2));
    return 0;
}


int fac(int n){
    int x;
    if(n==0){
        x=1;
    }
    else {
        x=fac(n-1)*n;
    }
    return x;
}
int tambah(int n, int m){
    int x;
    if(n==0){//basis
        x=m;
    }
    else{//rekursif
        x=tambah(n-1,m)+1;
    }
    return x;
}
int kurang(int n,int m){
    int x;
    if(m==0){
        x=n;
    }
    else{
        x=(kurang(n,m-1))-1;
    }

/*
    n=3
    m=2
    x=kurang(3,1)-1
    x=kurang(3,0)-1-1
    x=3-1-1=1
*/
}
int kali(int n,int m){
    int x;
    if(m==0){
        x=0;
    }
    else{
        x=kali(n,m-1)+n;
    }
    return x;
/*
    n=2
    m=3
    x=kali(2,2)+2
    x=kali(2,1)+2+2
    x=kali(2,0)+2+2+2
    x=0+2+2+2=6
*/
}
