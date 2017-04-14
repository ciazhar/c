int main ()
#include "boolean.h"
{
boolean Bool1, Bool2, TF ;
int i,j, hsl ;
float x,y,res;

printf ("Utk program ini, baca teksnya dan tambahkan output");
Bool1 = true; Bool2 = false;
TF = Bool1 && Bool2 ;
TF = Bool1 || Bool2 ;
TF = ! Bool1 ;
TF = Bool1 ^Bool2;

i = 5; j = 2 ;
hsl = i+j; hsl = i - j; hsl = i / j; hsl = i * j;
hsl = i /j ;
hsl = i%j ;

x = 5.0 ; y = 2.0 ;
res = x + y; res = x - y; res = x / y; res = x * y;

TF = (i==j); TF = (i!=j);
TF = (i < j); TF = (i > j); TF = (i <= j); TF = (i >= j);

TF = (x != y);
TF = (x < y); TF = (x > y); TF = (x <= y); TF = (x >= y);
return 0;
}
