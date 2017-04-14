int main()
{
    ///Kamus
    int n;
    ///Proses
    printf("masukkan n:");
    scanf("%d", &n);

    printf("2<%d<=5 atau 15<=%d<27 adalah %s",n,n,(((n>2)&&(n<=5))||((n>=15)&&(n<27)))?"true":"false");

}


