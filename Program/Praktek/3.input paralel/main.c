#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int jml;

    printf("masukkan nilai a b c : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("nilai a = %d\n", a);
    printf("nilai b = %d\n", b);
    printf("nilai c = %d\n", c);

    printf("nilai a b c = %d %d %d", a, b, c);
    jml=a+b+c;
}
