#include "queue.h"



int main()
{
    puts("\t\t----PROGRAM QUEUE DENGAN MEMORY DINAMIS, ALTERNATIF 1");
    puts("\t\t-----------------------------------------------------\n\n");

    Queue Q;// deklarasi variabel bertype QUEUE dengan nama Q.

    int max_Q;
    int nilai;
    int x;
    int konter;


    // tentukan ukurannya
    printf("Masukan jumlah elemennya = ");scanf("%d",&max_Q);

    // membuat Queue dengan ukuran max_Q.
    CreateEmpty(&Q,max_Q);



    //proses input Queue dengan perulangan.
    while (IsMax(Q)==false) // selama belum penuh , lakukan penambahan elemen.
    {
        printf("masukan data = ");scanf("%d",&nilai);
        Add(&Q,nilai);
    }

    puts("soal 1");
    konter = (NbElmt(Q)/2);
    if(NbElmt(Q)%2==0)
    {
        while(konter != 0)
        {
            Del(&Q,&x);
            konter--;
        }
        printf("info %d\n",x);
    }
    else
    {
        while(konter != 0)
        {
            Del(&Q,&x);
            konter--;
        }
        Del(&Q,&x);
        printf("info %d\n",x);
    }





    Dealokasi(&Q);
    printf("Queue telah di Dealokasi");
    return 0;
}
