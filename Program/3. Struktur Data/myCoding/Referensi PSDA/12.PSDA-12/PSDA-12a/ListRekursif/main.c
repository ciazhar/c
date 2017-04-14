#include "listrekursif.h"

int main()
{
    List L=Nil;
    List L1 = Nil;
    List L2 = Nil;
    List L3 = Nil;
    List L4 = Nil;
    List Linvers = Nil;
    List a;
    List L5 = Nil;
    List L6 = Nil;
    List Plus = Nil;

    L = Konso(L,2); L = Konso(L,3); L = KonsB(L,4);
    printf("List L: ");PrintList(L);
    printf("\n");
    printf("First Elmt: %d\n", FirstElmt(L));
    printf("Last Elmt: %d\n", LastElmt(L));
    a = Head(L);
    printf("Head: ");PrintList(a);
    printf("\n");
    printf("List L: ");PrintList(L);
    printf("\nJumlah Elemen List L: %d\n", NbElmt(L));
//    L1 = CopyList(L);
//    printf("Copy List L ke List L1: ");PrintList(L);
//    printf("\n");
//    Linvers = Inverse(L);
//    printf("List Invers: ");PrintList(Linvers);
    printf("Apakah 4 member List L? %d\n", IsMember(4,L));
    L2 = Konso(L2,4); L2 = Konso(L2,3);
    printf("List L4: ");PrintList(L4);
    printf("\n");
    printf("List L2: ");PrintList(L2);
    printf("\n");
    printf("Apakah List L1 sama dengan List L2? %d\n", IsEqual(L1,L2));
    L3 = Konkat(L4,L2);
    printf("List Konkat: ");PrintList(L3);
    printf("\nElemen ke 3 List L: %d\n", ElmtKeN(3,L));
    printf("Apakah jumlah elemen List L 2? %d\n", IsNbElmtN(L,2));
    printf("Apakah 2 elemen ke 2 List L? %d\n", IsXElmtKeN(2,1,L));
    printf("MaxList L: %d\n", MaxList(L));

    printf("\n");
    printf("List L: ");PrintList(L);
    printf("\nApakah 3 firstelmt? %d\n", IsFirst(L,3));
    printf("Apakah 3 LastElmt? %d\n", IsLast(L,3));
    a = Insort(L);
    printf("Sorting List L: ");PrintList(a);
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
