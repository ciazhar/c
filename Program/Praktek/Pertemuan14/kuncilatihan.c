#include <stdio.h>
#include <stdlib.h>

void inputArray();
void tambahArray();
void showArray();

int arr[100];
int n=0;
int i;
int dataBaru;

int main()
{
    int x;

    inputArray();
    showArray();

    printf("Tambah berapa index ? ");
    scanf("%d",&x);
    i=1;
    while(i<=x){
        tambahArray();///ARRAY GENAP
        i++;
    }
    showArray();
}

///PROSEDUR
void inputArray(){
    puts("INPUT ARRAY");

    printf("Masukkan Jumlah Data Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Data[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}

void showArray(){
    puts("\nSHOW DATA");

    for(i=0;i<n;i++){
        printf("Data[%d] : %d\n",i,arr[i]);
    }
}

//TAMBAH ARRAY BIASA
void tambahArray(){
    printf("Bilangan yang ditambah :");
    scanf("%d",&arr[n]);
    n++;
}
