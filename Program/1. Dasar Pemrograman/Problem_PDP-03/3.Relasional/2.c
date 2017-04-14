int main()
{
    ///Kamus
    int n;
    ///Proses
    printf("masukkan n:");
    scanf("%d", &n);

    printf("5<=%d<=6 atau %d>=10 adalah %s",n,n,(((n>=5)&&(n<=6))||(n>=10))?"true":"false");

}


