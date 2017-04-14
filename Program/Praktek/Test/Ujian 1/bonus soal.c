int main()
{
    ///Kamus///
    char Nama[30];
    char Alamat[30];
    int nilai_praktik, nilai_teori;

    ///Program///
    printf("Input Nama Lengkap      : ");
    gets(Nama);
    printf("Input Alamat            : ");
    gets(Alamat);
    printf("Input Nilai Praktik     : ");
    scanf("%d", &nilai_praktik);
    printf("Input Nilai Teori       : ");
    scanf("%d", &nilai_teori);

    ///Output///
    printf("Rata-Rata Nilai         : %d", (nilai_praktik+nilai_teori)/2);
}
