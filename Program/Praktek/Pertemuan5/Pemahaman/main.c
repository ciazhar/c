#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    int f,g,h,i,j;
    int var;

    var = a+b+c+d+e;

    printf("Masukkan 5 angka : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a % 2 != 0) {
        a=-a;}
    if (b % 2 != 0) {
        b=-b;}
    if (c % 2 != 0) {
        c=-c;}
    if (d % 2 != 0) {
        d=-d;}
    if (e % 2 != 0) {
        e=-e;}

    if (a==a&&b==-b&&c==c&&d==d&&e==e) { printf("%d (%d) %d %d %d = %d",a,b,c,d,e,var);}
    else if (a==a&&b-b&&c==-c&&d==d&&e==e)
    {printf("%d (%d) (%d) %d %d = %d",a,b,c,d,e,var);}
    else if (a==a&&b-b&&c==-c&&d==-d&&e==e)
    {printf("%d (%d) (%d) (%d) %d = %d",a,b,c,d,e,var);}
    else if (a==a&&b-b&&c==-c&&d==-d&&e==-e)
    {printf("%d (%d) (%d) (%d) (%d) = %d",a,b,c,d,e,var);}

    return 0;
}
