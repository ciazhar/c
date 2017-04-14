int main()
{
    ///Kamus
    float r1, r2, l1, l2, l3;
    float phi = 3.14;

    ///Proses
    printf("Input Jari-Jari Lingkaran A dan Lingkaran B : ");
    scanf("%f %f", &r1, &r2);

    l1=phi*r1*r1;
    l2=phi*r2*r2;
    l3=l1-l2;

    printf("Luas ring dari Lingkaran %f dan %f adalah :%f", l1,l2,l3);
}
