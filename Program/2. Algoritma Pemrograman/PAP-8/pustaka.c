#include "pustaka.h"

int min2(int num1, int num2){
    if(num1<num2){
        return num1;
    }
    else {
        return num2;
    }
}
int max2(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else {
        return num2;
    }
}
int recMax(int data[],int cur,int arrSize){
    if (cur==arrSize){
        return data[cur];
    }
    else {
        return max2(data[cur], recMax(data,cur+1,arrSize));
    }
}
int recMin(int data[],int cur,int arrSize){
    if (cur==arrSize){
        return data[cur];
    }
    else {
        return min2(data[cur], recMin(data,cur+1,arrSize));
    }
}
void recPrintAll (int data[],int cur,int arrSize){
    if (cur>arrSize){
        printf("\n");
    }
    else {
        printf("%d, ",data[cur]);
        recPrintAll(data,cur+1,arrSize);
    }
}
float recMean (int data[],int cur,int arrSize){

    if(arrSize<0){
        printf("%d",cur/7);
        return cur/7;
    }
    else {
        cur=cur+data[arrSize];
    }
    recMean(data,cur,arrSize-1);

    /*
    data,0,6
    6>0
	cur=0+data6
	cur=0+30
	cur=30

	data,30,5
	5>0
		cur=30+data5
		cur=30+21
		cur=51

		data,51,4
			cur=51+data4
			cur=51+44
			cur=95

			data,95,3
				cur=95+data3
				cur=95+23
				cur=118

				data,118,2
					cur=118+data2
					cur=118+1
					cur=119

					data,119,1
						cur=119+data1
						cur=119+15
						cur=134

						data,134,0
                            cur=134+data0
                            cur=134+12
                            cur=146

                            data,146,-1
                                ->146/7
	*/
}
void recSelectionSort (int data[],int arrSize){
    int mini=0;
    if(arrSize<0){
        printf("%d\n",data[mini]);
    }
    else{
        if(data[arrSize]<data[mini]){
            mini=arrSize;
        }
        else{
            mini=arrSize+1;
        }
        recSelectionSort(data,arrSize-1);
    }
}
