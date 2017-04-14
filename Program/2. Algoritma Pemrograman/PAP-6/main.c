#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomer 1 : Binary Search\n");
    ///Kamus
    int list1[] = {1,2,3,4,5,6,7,8,9,10};
    int list2[] = {4,8,6,1,10,3,9,2,7,5};
    ///Algoritma
    printf("%d\n",binarySearch(3,list1));
    printf("%d\n",binarySearch(8,list2));

    printf("\nNomer 2 : Mencari ada tidaknya suatu kata pada suatu kalimat\n");
    ///Kamus

    ///Algoritma
    printf("%d\n",searchWord("Dian","Universitas Dian Nuswantoro"));
    printf("%d\n",searchWord("Algo","Algortima"));
    printf("%d\n",searchWord("Program","Pemrograman"));
    printf("%d\n",searchWord("Dinus","Dian Nuswantoro"));

}
