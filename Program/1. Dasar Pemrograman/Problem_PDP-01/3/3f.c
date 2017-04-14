/*contoh pendefinisian dan pengisian struktur: Titik, mhs, meter*/
int main ()
{
  /*Kamus*/
  /*cara 1*/
  struct
  {
      char nama[20];
      int nim;
      int nilai;
  } Mhs; /*nama variabel berupa struct*/
  /*cara 2*/
  /*tag, utk menyebut struct ...*/
  struct meter
  {
      int m;
      int cm;
  };
  struct meter M1; /*M1 adalah variabel*/
  /*cara 3 : INI yang membuat TYPE BARU*/
  typedef struct
    {
        float x;
        float y;
    }
    Point; /*nama type*/
    Point P1;
    Point P3;
  /*latihan baca*/
  /*Algoritma*/
  printf("Contoh mengisi struktur dg assignment : \n");
  printf( "Titik P1, dengan P1.x dan P1.y: \n");
  P1.x = 1.1;
  P1.y = 2.5;
  printf ("P1.x = %4.1f \nP1.y = %d.1f\n", P1.x, P1.y);
  printf ("Baca Titik P3 \n");
  scanf ("%f %f", &P3.x, &P3.y);
  printf("P3.x = %f \nP3.y = %f \n", P3.x, P3.y);
  strcpy(Mhs.nama, "Juliette");
  Mhs.nim = 7473;
  Mhs.nilai = 80;
  printf ("Hasil assignment thd Mhs \n");
  printf ("Nama = %s\nNim = %d\nNilai = %d\n", Mhs.nama, Mhs.nim, Mhs.nilai);
  return 0;
}

