#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

boolean IsGenap (int N);
int main ()
{
    int N;
    boolean  a;
    printf("Masukan Angka : "); scanf("%d",&N);
    a = IsGenap (N);
    for (a=N;a<=100;a+=N)
        {

         printf ("%d ",a);
        }
    return 0;
}

boolean IsGenap (int N)
{
    int a;
    if (N%2==0)
    {
        printf("GENAP\n");
        for (a=N;a<=100;a+=N)
        {
          printf ("%d ",a);
        }
        return true;
    }
    else
        return false;
}
