#include "queue.h"



int main()
{
    Queue Q;
    int Max;
    int nilai;
    int x;

    puts("\t\t----PROGRAM QUEUE DENGAN MEMORY DINAMIS, ALTERNATIF 1");
    puts("\t\t-----------------------------------------------------\n\n");


    printf("Masukan jumlah elemennya = ");scanf("%d",&Max);

    CreateEmpty(&Q,Max);

    printf("I.S , Apakah QUEUE kosong? = %d\n\n",IsEmpty(Q));

    while (IsMax(Q)==false)
    {
        printf("masukan data = ");scanf("%d",&nilai);
        Add(&Q,nilai);
    }

    printf("QUEUE sudah penuh ? = %d\n\n",IsMax(Q));



    puts("==================Bentuk dari Queue==================\n");
    PrintQUEUE(Q);
    puts("\n=====================================================");

    puts("\n======Informasi posisi Index======");
    printf("\nPosisi dari Head = %d\n",HEAD(Q));
    printf("Posisi dari TAIL = %d\n\n",TAIL(Q));

    puts("\n======Informasi Nilai pada QUEUE======");
    printf("INFO dari HEAD = %d\n",InfoHead(Q));
    printf("INFO dari TAIL = %d\n",InfoTail(Q));

    puts("\n********************************************************");
    puts("********************************************************");
    puts("********************************************************");
    puts("\n\n====== BAGIAN PENGUJIAN SOAL PEMAHAMAN ======\n");
    puts("1.> Soal No 1 Is_Kembar?");
    puts("--- ---- -- - ----------");
    printf("Apakah Value pada HEAD dan TAIL sama ? = %d\n\n",Is_Kembar(Q));
    puts("\n2.> Soal No 2 Swap_Head_Tail");
    puts("--- ---- -- - --------------");
    Swap_Head_Tail(&Q);
    puts("==================Bentuk QUEUE Sekarang==================\n");
    PrintQUEUE(Q);
    puts("\n=======================================================");
    puts("\n3.> Soal No 3 All_Genap");
   puts("--- ---- -- - ---------");
    All_Genap(&Q);
    puts("==================Bentuk QUEUE Sekarang==================\n");
    PrintQUEUE(Q);
    puts("\n=======================================================");
    return 0;
}
