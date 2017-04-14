#include "boolean.h"
#include "struktur.h"

DATA siswa;
Mhs carisiswa;
int N,i,NIM;
int main()
{
    printf("Berapa data akan di entry[max %d]: ",MaxData);scanf("%d",&N);
    if ((N>MaxData)||(N<0))
    {
        printf("Memory tidak cukup atau jumlah tidak tepat!");
        exit(0);
    }
    else
    {
        i=0;
        while(i<N)
        {
            siswa[i]=BacaData();
            i++;
        }
    }
    i=0;
    while(i<N)
    {
        TulisData(siswa[i]);
        i++;
    }
    printf("\nSorting Data\n");
    Sorting(siswa,N,0);
    printf("\nSetelah di Sorting Berdasarkan NIM\n");
    i=0;
    while(i<N)
    {
        TulisData(siswa[i]);
        i++;
    }
    printf("\nSorting Data\n");
    Sorting(siswa,N,1);
    printf("\nSetelah di Sorting Berdasarkan NAMA\n");
    i=0;
    while(i<N)
    {
        TulisData(siswa[i]);
        i++;
    }
    printf("\nSorting Data\n");
    Sorting(siswa,N,2);
    printf("\nSetelah di Sorting Berdasarkan IPK\n");
    i=0;
    while(i<N)
    {
        TulisData(siswa[i]);
        i++;
    }
    printf("\nCari Siswa dengan NIM :");scanf("%d",&NIM);
    printf("\nSiswa dengan NIM :%d, %s\n",NIM,Searching2(siswa,N,NIM)?"ketemu":"tidak ketemu");
    carisiswa=Searching1(siswa,N,NIM);
    TulisData(carisiswa);

    return 0;
}
