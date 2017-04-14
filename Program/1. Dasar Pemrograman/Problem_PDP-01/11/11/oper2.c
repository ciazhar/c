/*File : oper2.c*/
/*pemakaian beberapa operator terhadap RELATIONAL DAN
bit*/
int main ()
{
    /*KAMUS*/
    char i, j;
    /*ALGORITMA*/
    i = 3; /*00000011 dalam biner*/
    j = 4; /*00000100 dalam biner*/
    printf("i = %d \n", i);
    printf("j = %d \n", j);
    printf("i && j = %d \n", i && j); /*1:op lojik : true and true => true*/
    printf("i & j = %d \n", i & j);/*0:00000000 dalam biner*/
    printf("i || j = %d \n", i || j);/*1 : OR LOJIK, True or true => true*/
    printf("i | j = %d \n", i | j);/*7:00000111 biner*/
    printf("i ^ j = &d \n", i ^ j);/*&:00000111 biner*/
    printf("~i = %d \n", ~i); /*-4:11111100 biner*/
    return 0;
}
