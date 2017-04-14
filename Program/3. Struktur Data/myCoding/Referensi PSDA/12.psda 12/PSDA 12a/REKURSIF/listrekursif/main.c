#include "listrekursif.h"

int main()
{
    List L=Nil;


    L = Konso(L,1);
    L = Konso(L,3);
    L = Konso(L,2);
    L = Konso(L,2);
    L = Konso(L,1);
    //L = Konso(L,2);



    //PrintList(L);puts("");puts("");puts("");puts("");
   // print_reverse(L);
    printf("List L \n");
    PrintList(L);
    printf("\n --> JumGenap : %d", jumgen(L));
    printf("\n --> Hitung X : %d", HitungX(L,1));
    printf("\nPalindrom : %d", Ispalindrom(L));


    return 0;
}
