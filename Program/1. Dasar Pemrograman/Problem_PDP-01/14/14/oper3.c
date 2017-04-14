/*File : oper3.c*/
/*Operator terner*/
/*Ekspresi ditulis sebagaii makro*/
#define max(a,b) ((a>b) ? a:b)
int main ()
{
    /*KAMUS*/
    int i = 0; /*perhatikan int 1, j =0 bukan seperti ini*/
    int j = 0;
    char c = 8;
    char d = 10;
    char e = max (c,d);
    int k = max (i,j);
    /*ALGORITMA*/
    printf("Nilai e = %d \n", e);
    printf("Nilai k = %d \n", k);
    i = 2;
    j = 3;
    k = max (i++, j++);
    printf("Nilai k = %d \n", k);
    return 0;
}
