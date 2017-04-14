int main()
{
    ///Kamus
    int n;
    ///Proses
    printf("masukkan n:");
    scanf("%d", &n);

    printf("3<%d<=15 atau 22<%d<32 adalah %s",n,n,(((n>3)&&(n<=15))||((n>22)&&(n<32)))?"true":"false");

}

