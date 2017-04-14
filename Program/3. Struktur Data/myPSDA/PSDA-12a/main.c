#include "header.h"

/*
    Muhammad Hafidz
    A11.2015.09000
    List Rekursif
*/
int main()
{
    List L=Nil;
    List L1=Nil;
    List L2=Nil;
    List L3=Nil;
    List L4=Nil;
    List L5=Nil;
    List L6=Nil;


    L = Konso(L,10);
    L = Konso(L,20);
    L = KonsB(L,30);
    L = Konso(L,40);
    L = KonsB(L,50);

    printf("List L: ");PrintList(L);
    printf("\n");
    printf("First Elmt: %d\n", FirstElmt(L));
    printf("Last Elmt: %d\n", LastElmt(L));
    printf("Head: ");PrintList(Head(L));
    printf("\nTail: ");PrintList(Tail(L));

    ///
    printf("\n");
    printf("\nJumlah Elemen List L: %d\n", NbElmt(L));
    printf("\nElemen ke 3 List L: %d\n", ElmtKeN(3,L));
    L1 = Copy(L);
    printf("Copy List L ke List L1: ");PrintList(L1);
    //L2 = Inverse(L);
    //printf("\nList Invers: ");PrintList(L2);
    L3 = Konso(L3,1);
    L4 = Konso(L4,2);
    //L5 = Konkat(L3,L4);
    //printf("\Konkat L3 L4: ");PrintList(L5);

    ///
    printf("\n");
    printf("Apakah List L1 sama dengan List L? %s\n", IsEqual(L1,L)?"ya":"tidak");


    ///
    printf("\n");
    printf("\nApakah 30 member List L ? %s\n", IsMember(30,L)?"ya":"tidak");
    printf("Apakah 40 firstelmt? %s\n", IsFirst(L,40)?"ya":"tidak");
    printf("Apakah 50 LastElmt? %s\n", IsLast(L,50)?"ya":"tidak");
    printf("Apakah jumlah elemen List L itu 5? %s\n", IsNbElmtN(L,5)?"ya":"tidak");
    //printf("Apakah L2 invers dari L ? %s\n",IsInverse(L1,L2)?"ya":"tidak");
    printf("Apakah 10 elemen ke 3 List L? %s\n", IsXElmtKeN(10,3,L)?"ya":"tidak");

    ///
    printf("\n");
    printf("MaxList L : %d\n", MaxList(L));
    printf("DImensi L : %d\n",Dimensi(L));
    printf("List Plus\n");
    L5=ListPlus(L1,L2);
    PrintList(L5);
    printf("Sorting List L: ");PrintList(Insort(L));
    printf("\ninsert\n");
    //Insert(L,10);
    //PrintList(L);
    printf("\nmaxNB L : %d",MaxNb(L));
    printf("\n");


    return 0;
}
