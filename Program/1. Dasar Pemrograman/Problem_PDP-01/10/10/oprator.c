/*File : operator.c*/
/*Contoh pengoprasian variabel bertype dasar*/
int main ()
#include "boolean.h"
{
    /*Kamus*/
    boolean Bool1, Bool2, TF;
    int i, j, hsl;
    float x, y, res;
    /*algoritma*/
    printf("Utk program ini, baca teksnya dan tambahkan output");
    Bool1 = true; Bool2 = false;
    TF = Bool1 && Bool2; /*Boolean AND*/
    TF = Bool1 || Bool2; /*Boolean OR*/
    TF = ! Bool1; /*NOT*/
    TF = Bool1^Bool2; /*XOR*/
    /*operasi numerik*/
    i = 5; j = 2;
    hsl = i+j; hsl = i-j; hsl = i/j; hsl =i*j;
    hsl = i/j; /*pembagian bulat*/
    hsl = i%j; /*sisa.modulo*/
    /*operasi numerik*/
    x=5.0; y=2.0;
    res = x+y; res = x-y; res = x/y; res = x*y;
    /*operasi rasional numerik*/
    TF = (i==j); TF = (i!=j);
    TF = (i<j); TF = (i>j); TF = (i<=j); TF = (i>=j);
    /*operasi rasional numerik*/
    TF = (x!=y);
    TF = (x<y); TF = (x>y); TF = (x<=y); TF = (x>=y);
    return 0;
}
