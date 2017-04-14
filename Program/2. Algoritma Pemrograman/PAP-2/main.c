#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("Nomer 1");
    int a=10,b=16,c=20,d=34,e=27,f=41;

    swapNumber(&a,&b);
    printf("\na=%d, b=%d",a,b);
    swapNumber(&c,&d);
    printf("\nc=%d, d=%d",c,d);
    swapNumber(&e,&f);
    printf("\ne=%d, f=%d",e,f);

    printf("\n\nNomer 2");
    printf("\n%d",sumOfDigits(12345));
    printf("\n%d",sumOfDigits(4567));
    printf("\n%d",sumOfDigits(15000));
    printf("\n%d",sumOfDigits(1450));

    printf("\n\nNomer 3");
    printf("\nAngka 10\n");
    printPrimes(10);
    printf("\nAngka 22\n");
    printPrimes(22);

    printf("\n\nNomer 4");
    printf("\n%d",textPalindrome("tammat"));
    printf("\n%d",textPalindrome("kasur  rusak"));
    printf("\n%d",textPalindrome("makan malam"));
    printf("\n%d",textPalindrome("pemrograman"));

    printf("\n\nNomer 5");
    printf("\n%d",numPalindrome(2002));
    printf("\n%d",numPalindrome(3030));
    printf("\n%d",numPalindrome(3401));
    printf("\n%d",numPalindrome(5555));

    printf("\n\nNomer 6\n");
    printPascal(4);
    printPascal(6);
}
