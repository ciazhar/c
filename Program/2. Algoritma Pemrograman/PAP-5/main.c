#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Nomor 1 : mengecek ada tidaknya angka dalam array integer\n");
    ///Kamus
    int data[]={12,14,20,15,22,25,18,10,27};
    ///Algoritma
    printf("\n%d",sequentSearch(15,data));
    printf("\n%d",sequentSearch(25,data));
    printf("\n%d",sequentSearch(39,data));
    printf("\n%d",sequentSearch(17,data));

    printf("\n\nNomor 2 : mengecek suatu array integer merupakan kebalikan array integer lainya\n");
    ///Kamus
    int list1[]={1,2,3,4,5};
    int list2[]={5,4,3,2,1};
    int list3[]={6,7,8,9,10};
    int list4[]={10,9,8,7,6};
    ///Algoritma
    printf("\n%d",isInverse(list1,list2));
    printf("\n%d",isInverse(list2,list3));
    printf("\n%d",isInverse(list1,list3));
    printf("\n%d",isInverse(list2,list2));

    printf("\n\nNomor 3 : mengembalikan nilai minimum dan maksimum suatu array\n");
    ///Kamus
    int list_1[]={9,12,43,13,15};
    int list_2[]={12,4,19,9,22,1};
    int list_3[]={8,21,29,17,20,13};
    int list_4[]={18,11,19,25,31,15};
    int a,b;
    ///Algortima
    minMax(list_1,&a,&b);
    printf("\na = %d b = %d",a,b);
    minMax(list_2,&a,&b);
    printf("\na = %d b = %d",a,b);
    minMax(list_3,&a,&b);
    printf("\na = %d b = %d",a,b);
    minMax(list_4,&a,&b);
    printf("\na = %d b = %d",a,b);

    printf("\n\nNomor 4 : Menghitung selisih dari nilai minimum dan nilai maksimum\n");
    ///Kamus
    int list_1_[]={9,12,43,13,15};
    int list_2_[]={12,4,19,9,22,1};
    int list_3_[]={8,21,29,17,20,13};
    int list_4_[]={18,11,19,25,31,15};
    ///Algortima
    printf("\n%d",minMaxGap(list_1_));
    printf("\n%d",minMaxGap(list_2_));
    printf("\n%d",minMaxGap(list_3_));
    printf("\n%d",minMaxGap(list_4_));

    printf("\n\nNomor 5 : mengecek apakah tedapat huruf minimal yang ditentukan pada array teks \n");
    ///Algortima
    printf("\n%d",atleast('r',3,"Larry Page"));
    printf("\n%d",atleast('M',2,"Matt Mullenwerg"));
    printf("\n%d",atleast('a',2,"Mark Zuckerberg"));
    printf("\n%d",atleast('m',2,"Jimmy Wales"));

}
