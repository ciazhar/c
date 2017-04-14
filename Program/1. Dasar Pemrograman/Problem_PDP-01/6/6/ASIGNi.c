/*File : ASIGNi.c*/
/*Assignement dan print*/
#include <limits.h>
int main ()
{
    /*Kamus*/
    int i;
    long int ii;
    /*Program*/
    printf("hello\n");
    i = 1234;
    ii = 123456;
    printf("Ini nilai i = 1234 = %d \n", i);
    printf("Ini nilai ii = 123456 : : %10d \n", ii);
    /*print nilai batas integer*/
    printf("Min & Max integer: %d,%d \n", INT_MIN, INT_MAX);
    printf("Max long integer : %ld, %ld \n", LONG_MAX);
    return 0;
}
