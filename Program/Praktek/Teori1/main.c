int
main()
{
/* PROGRAM */
///MEMBUAT SISTEM HASIL BELAJAR MAHASISWA

/* KAMUS */
float NT;
float NUTS;
float NUAS;
float NA;

/* ALGORITMA */
printf ("SISTEM HASIL BELAJAR MAHASISWA\n");
printf ("Masukkan Nilai Tugas: ");
scanf ("%f\n",&NT);
printf ("Masukkan Nilai UTS: ");
scanf ("%f\n",&NUTS);
printf ("Masukkan Nilai UAS: ");
scanf ("%f\n",&NUAS);

NA = (0.3*NT)+(0.3*NUTS)+(0.4*NUAS);
printf ("Nilai Akhir: %.f\n",NA);

if (NA < 60) {printf ("TIDAK LULUS");
}
else {printf ("LULUS");
}
}
