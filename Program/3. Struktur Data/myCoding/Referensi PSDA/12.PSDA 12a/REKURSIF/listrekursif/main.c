#include "listrekursif.h"

int main()
{
    List L=Nil;


    L = Konso(L,3);
    L = Konso(L,7);
    L = Konso(L,5);
    L = Konso(L,1);
    L = Konso(L,4);
    L = Konso(L,2);



    PrintList(L);puts("");puts("");puts("");puts("");
    print_reverse(L);


    return 0;
}
