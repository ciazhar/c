    int main()
    {
         ///Kamus
    int n;
    ///Proses
    printf("masukkan n:");
    scanf("%d", &n);

    printf("%d<8 atau 9<%d<=15 atau 21<=%d<33 atau %d>34 adalah %s",n,n,n,n,((n<8)||((n>9)&&(n<=15))||((n>=21)&&(n<33))||(n>34))?"true":"false");


    }
