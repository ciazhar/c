#include "arraysort.h"

//membuat variabel bertipe array sederhana dan langsung meninisialkan elemennya sebanyak 10
DataInt data1={2,22,27,21,42,39,11,6,4,12};
DataInt data2={5,4,37,12,2,20,13,8,6,25};
DataInt data3={15,42,23,12,62,39,1,18,4,2};
DataInt dataX;
int Ni,i,j,k;
extern int MIN1,MAX1,MAX2,MAX3,POS;
int main(){
    //output dan traversal dalam array
    printf("Cetak data array of integer\n");
    TulisTabelInt(data1,10);
    //input array
    printf("\nEntry Jumlah array of Integer [max. 20 elemen]: "); scanf("%d",&Ni);
    BacaTabelInt(dataX,Ni);
    // Cetak hasil input
    printf("\nCetak hasil input\n");
    TulisTabelInt2(dataX,Ni);
    //Harga Extreme dan Sortir Data
    //PMin1(data2,10,&MIN1);
    //printf("\nCetak Nilai Minimum dengan PMin1:%d\n",MIN1);
    /*PMax1(data2,10,&MAX1);
    printf("\nCetak Nilai Maximum dengan PMax1:%d\n",MAX1);
    PMaxVal2(data1,10,&POS);
    printf("\nCetak Nilai Maximum dengan PMax1:%d\n",POS);
    PMaxPos1(data1,10,&MAX2);
    printf("\nCetak Nilai Maximum dengan PMax1:%d\n",MAX2);
    FMaxPos2(data1,10,&MAX3);
    printf("\nCetak Nilai Maximum dengan PMax1:%d\n",MAX3);*/
    printf("\nData sebelum disorting\n");
    TulisTabelInt(data1,10);
    TulisTabelInt(data2,10);
    TulisTabelInt(data3,10);
    /*CountingSort(data2,10);
    SelectionSort(data1,10);
    InsertionSort(data1,10);*/
    printf("\nData setelah disorting\n");
    TulisTabelInt3(data1,10);
    TulisTabelInt3(data2,10);
    TulisTabelInt3(data3,10);
    return 0;
}
