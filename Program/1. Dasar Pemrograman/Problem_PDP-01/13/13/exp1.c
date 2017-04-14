/*File : exp1.c*/
/*pembagian integer, casting*/
int main ()
{
    /*KAMUS*/
    int x = 1;
    int y = 2;
    float fx;
    float fy;
    /*ALGORITMA*/
    printf("x/y (format integer) = %d \n", x/y);
    printf("x/y (format float) = %f \n", x/y);
    /*supaya hasilnya tidak nol*/
    fx = x;
    fy = y;
    printf("x/y (format integer) = %d \n", fx/fy);
    printf("x/y (format float) = %f \n", fx/fy);
    /*cating*/
    printf("float(x)/float(y) (format integer) = %d \n", (float)x/(float)y);
    printf("float(x)/float(y) (format float) = %f \n", (float)x/(float)y);
    x = 10;
    y = 3;
    printf("x/y (format integer) = %d \n", x/y);
    printf("x/y (format float) = %f \n", x/y);
    return 0;
}
