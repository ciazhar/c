#include "list.h"

int main()
{

    puts("\n=================Tugas Pemahaman PSDA 3 dan 4=======================");

    // Rancang Driver-nya di sini yaa
	// buatlah main program dengan kriteria sebagai berikut
	// 1. deklarasikan List baru
	// setelah dibuatlist , input elemen dengan format berikut.
	// 1. input bilangan pertama yaitu 10.
	// 2. input bilangan kedua yaitu 1. (insert di awal list)
	// 3. input bilangan ketiga yaitu 2014. (insert setelah bilangan 10).
	// 4. tampilkan listnya.
	// sehingga output [1] - [10] - [2014]
	//-------------------------
	// 1.> setelah list terisi , kemudian lakukan penghapusan  elemen di awal.
	// 2.> kemudian lakukan penghapusan elemen di akhir.
	// 3.> tampilkan datanya.
	List L;
	int X,a,b,c;

	createList(&L);
	IsEmpty(L);

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    InsVFirst(&L,a);
    InsVFirst(&L,b);
    InsVLast(&L,c);
    ShowData(L);
    printf("\n");

    DelVFirst(&L,&X);
    DelVLast(&L,&X);
    ShowData(L);

    return 0;
}
