#include <stdio.h>
#include <stdlib.h>
#include "array.h"

//membuat variabel bertipe array sederhana dan langsung meninisialkan elemennya sebanyak 10
DataInt data1={2,42,32,12,22,39,15,8,4,20};
DataInt data2;
DataFloat data3={3.45,2.33,1.49,4.00,3.86,3.92,3.21,2.89,2.45,2.68};
DataFloat data4;
DataChar data5={'A','R','Y','A','-','T','R','S','N','D'};
DataChar data6;

int Ni,Nf,Nc,i,j,k;

int main()
{
 //output dan traversal dalam array
 printf("Cetak data array of integer\n");
 TulisTabelInt(data1,10);
 printf("Cetak data array of float\n");
 TulisTabelFloat(data3,10);
 printf("Cetak data array of char\n");
 TulisTabelChar(data5,10);
 //input array
 printf("Entry Jumlah array of Integer [max. 20 elemen]:");
 scanf("%d",&Ni);
 BacaTabelInt(data2,Ni);
 printf("Entry Jumlah array of Float [max. 20 elemen]:");
 scanf("%d",&Nf);
 BacaTabelFloat(data4,Nf);
 printf("Entry Jumlah array of Character [max. 20 elemen]:");
 scanf("%d",&Nc);
 BacaTabelChar(data6,Nc);
//Cetak hasil input
 printf("\nCetak hasil input\n");
 TulisTabelInt(data2,Ni);
 TulisTabelFloat(data4,Nf);
 TulisTabelChar(data6,Nc);
 //Apakakah ada data ??
 printf("\nCari data\n");
 printf("\nCari data=3,   hasil:%s\n",IsAdaInt(data2,Ni,3)?"ketemu":"tidak ketemu");
 printf("\nCari data=3.5, hasil:%s\n",IsAdaFloat(data4,Nf,3.5)?"ketemu":"tidak ketemu");
 printf("\nCari data=x,   hasil:%s\n",IsAdaChar(data6,Nc,'x')?"ketemu":"tidak ketemu");
 // Cari data ??
 printf("\nCari data=3,   hasil:%d\n",CariInt(data2,Ni,3));
 printf("\nCari data=3.5, hasil:%.2f\n",CariFloat(data4,Nf,3.5));
 printf("\nCari data=x,   hasil:%c\n",CariChar(data6,Nc,'x'));
 //Cari index data
 printf("\nCari data=3,   hasil:%d\n",CariIdxInt(data2,Ni,3));
 printf("\nCari data=3.5, hasil:%d\n",CariIdxFloat(data4,Nf,3.5));
 printf("\nCari data=x,   hasil:%d\n",CariIdxChar(data6,Nc,'x'));
 return 0;
}
