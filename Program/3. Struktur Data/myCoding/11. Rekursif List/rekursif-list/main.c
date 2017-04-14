#include "header.h"

int main()
{
    List L=Nil;
    List L1=Nil;
    List L2=Nil;
    List L3=Nil;
    List L4=Nil;
    List Linvers=Nil;
    List L5=Nil;
    List L6=Nil;
    List Plus=Nil;

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
    L2 = Inverse(L);
    printf("\nList Invers: ");PrintList(L2);
    L3 = Konso(L3,1);
    L4 = Konso(L4,2);
    //L5 = Konkat(L3,L4);
    //printf("\Konkat L3 L4: ");PrintList(L5);

    ///
    printf("\n");
    printf("Apakah List L1 sama dengan List L? %s\n", IsEqual(L1,L)?"ya":"tidak");


    ///
    printf("\n");
    printf("\nApakah 40 member List L ? %s\n", IsMember(40,L)?"ya":"tidak");
    printf("Apakah 40 firstelmt? %s\n", IsFirst(L,40)?"ya":"tidak");
    printf("Apakah 50 LastElmt? %s\n", IsLast(L,50)?"ya":"tidak");
    printf("Apakah jumlah elemen List L 2? %d\n", IsNbElmtN(L,2));
    printf("Apakah 2 elemen ke 2 List L? %d\n", IsXElmtKeN(2,1,L));
    printf("MaxList L: %d\n", MaxList(L));

    printf("\n");
    printf("List L: ");PrintList(L);

    printf("Sorting List L: ");PrintList(Insort(L));
    printf("\n");

    L5 = Konso(L5,2);L5 = Konso(L5,3);L5 = Konso(L5,4);
    L6 = Konso(L6,4);L6 = Konso(L6,3);L6 = Konso(L6,2);
    printf("List L5: ");PrintList(L5);
    printf("\n");
    printf("List L6: ");PrintList(L6);
    printf("\nApakah L5 dan L6 isinverse? %d\n", IsInverse(L5,L6));
    Plus = ListPlus(L5,L6);
    printf("List+ L5 dan L6: ");PrintList(Plus);
    printf("\n");
    printf("MaxNb L5: %d\n", MaxNb(L5));

    return 0;
}
