void compressArray(int data[]){
    int h,i,j;
    for(h=0;h<10;h++){
        for(i=0;i<10;i++){
            if(data[i]==0){
                for(j=i;j<10;j++){
                    data[j]=data[j+1];
                }
            }
        }
    }
}
void selectionSort1(int data[]){
    int i,j,k,min,temp;
    for(i=0;i<5;i++){
        min=i;
        for(j=i+1;j<5;j++){
            if(data[j]<data[min]){
                min=j;
            }
        }
        temp=data[i];
        data[i]=data[min];
        data[min]=temp;
        for(k=0;k<5;k++){
            printf("%d ",data[k]);
        }
        printf("\n");
    }

}
void selectionSort2(int data[]){
    int i,j,k,l,prin,min,temp=0,cek=0,pas=0;
    for(i=0;i<5&&pas==0;i++){
        min=i;
        for(j=i+1;j<5;j++){
            if(data[j]<data[min]){
                min=j;
            }
        }
        temp=data[i];
        data[i]=data[min];
        data[min]=temp;

        for(prin=0;prin<5;prin++){
            printf("%d ",data[prin]);
        }
        printf("\n");

        for(k=0;k<5;k++){
            if(data[k]<data[k+1]){
                cek++;
            }
        }
        if(cek==4){
            pas=1;
        }
        cek=0;
    }
}
int getMedian(int data[]){
    int cek=0,median;
    int i,j,k,temp;
    for(i=0;i<=5-2;i++){
        for(j=0;j<=5-2-i;j++){
            if(data[j+1]<data[j]){
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        if(data[i]!=0){
            cek++;
        }
    }
    if(cek%2==0){
        median=(data[cek/2]+data[(cek/2)-1])/2;
    }
    else{
        median=data[(cek/2)];
    }
    return median;
}

