#include <stdio.h>
#include <stdlib.h>

void inputArray(int data[], int batas);
void tampilArray(int data[], int batas);
int n;
int main()
{
    int m;
    printf("Masukkan Banyak Angka : ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Input Data Array\n");
    inputArray(arr,n);
    tampilArray(arr,n);
    printf("\nMasukkan Angka Tambahan: ");
    scanf("%d",&m);
    Sentinel(arr,n,m);
    tampilArray(arr,n+1);
    return 0;
}


void inputArray(int data[], int batas)
{
    int i;
    i=0;
    while(i<batas)
    {
        printf("Masukkan data ke-%d : ",i);
        scanf("%d",&data[i]);
        i++;
    }
}

void tampilArray(int data[], int batas)
{
    int i;
    int x;
    i=0;
    printf("Data = ");
    while(i<batas)
    {
        printf("[%d] ",data[i]);
        i++;
    }
}

void Sentinel(int data[], int batas, int x)
{
    data[batas]=x;

}
