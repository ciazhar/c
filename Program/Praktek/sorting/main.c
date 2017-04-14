#include <stdio.h>
#include <stdlib.h>

void selectionsort(int data[]);
void bubblesort(int data[]);
void sele_des(int data[]);
void bub_des(int data[]);
///variable global
int input,temp,i,j,k;
int l;

int main()
{

    int y[input];

    printf("Masukkan Jumlah Inputan : ");scanf("%d",&input);

    for(l=0;l<input;l++){
        printf("Masukkan Angka ke %d : ",l+1);scanf("%d",&y[l]);
    }
sele_des(y);
bub_des(y);
}

void selectionsort(int data[]){
    int index_min;
    for(i=0;i<=input-2;i++){
            index_min=i;
        for(j=i+1;j<=input-1;j++){
            if(data[j]<data[index_min]){
                index_min=j;
            }
        }
        temp=data[i];
        data[i]=data[index_min];
        data[index_min]=temp;
    }
    printf("After Selection Sorting : ");
    for(i=0;i<input;i++){
        printf("%d ",data[i]);
    }
}

void bubblesort(int data[]){
    for(i=0;i<=input-2;i++){
        for(j=0;j<=input-2-i;j++){
            if(data[j+i]<data[j]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }

    printf("After Bubble Sorting : ");
    for(i=0;i<input;i++){
        printf("%d ",data[i]);
    }
}


void sele_des(int data[]){
    int index_min;
    for(i=0;i<=input-2;i++){
            index_min=i;
        for(j=i+1;j<=input-1;j++){
            if(data[j]>data[index_min]){
                index_min=j;
            }
        }
        temp=data[i];
        data[i]=data[index_min];
        data[index_min]=temp;
    }
    printf("After Selection Sorting : ");
    for(i=0;i<input;i++){
        printf("%d ",data[i]);
    }
}

void bub_des(int data[]){
    for(i=0;i<=input-2;i++){
        for(j=0;j<=input-2-i;j++){
            if(data[j]<data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("After Bubble Sorting : ");
    for(i=0;i<input;i++){
        printf("%d ",data[i]);
    }
}
