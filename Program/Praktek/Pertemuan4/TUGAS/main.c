#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sapi, kerbau, kambing, kuda;
    int Ksapi, Kkerbau, Kkambing, Kkuda, n;
    int Jsapi, Jkerbau, Jkambing, Jkuda, tot;

    printf("Pak Indro akan membeli:");
    printf("Sapi, Kerbau, Kambing, Kuda:");
    scanf("%d %d %d %d",&sapi,&kerbau,&kambing,&kuda);

    printf("Pak Indro membeli %d sapi, %d kerbau, %d kambing, %d kuda\n\n",sapi, kerbau, kambing, kuda);
    printf("Berapa Tahun Pak Indro Berternak:");
    scanf("%d",&n);
    Ksapi=(sapi+n);
    Kkerbau=(kerbau+n);
    Kkambing=(n*3)+kambing;
    Kkuda=kuda;
    printf("\nJumlah Sapi setelah %d tahun adalah %d\n",n,Ksapi);
    printf("Jumlah Kerbau setelah %d tahun adalah %d\n",n,Kkerbau);
    printf("Jumlah Kambing setelah %d tahun adalah %d\n",n,Kkambing);
    printf("Jumlah Kuda setelah %d tahun adalah %d\n\n",n,Kkuda);

    printf("To acces 'SOAL BONUS' ");
    system("pause");

    Jsapi=((n/2)*1);
    Jkerbau=((n/2)*1);
    Jkambing=((n/2)*3);
    Jkuda=((n/2)*0);

    printf("Jumlah sapi yang terjual selama %d tahun adalah %d\n",n,Jsapi);
    printf("Jumlah kerbau yang terjual selama %d tahun adalah %d\n",n,Jkerbau);
    printf("Jumlah kambing yang terjual selama %d tahun adalah %d\n",n,Jkambing);
    printf("Jumlah kuda yang terjual selama %d tahun adalah %d\n\n",n,Jkuda);

    tot=Jsapi+Jkerbau+Jkambing+Jkuda;
    printf("Total ternak yang terjual adalah %d",tot);
    return 0;
}
