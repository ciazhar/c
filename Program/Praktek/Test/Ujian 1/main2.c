int main ()
{
    ///KAMUS///
    float r, t, volume_tabung;

    ///PROSES///
    printf("masukkan jari-jari tabung: ");
    scanf("%f", &r);
    printf("masukkan tinggi tabung: ");
    scanf("%f", &t);
    volume_tabung = 3.14*r*r*t;

    ///OUTPUT///
    printf("volume tabung : %f", volume_tabung);

}
