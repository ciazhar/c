#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

int main()
{
    printf("\nNomor 1 : mengisi integer kedalam struct \n");
    printf("\nmakePecahan(4,9) -> %d/%d",makePecahan(4,9).pembilang,makePecahan(4,9).penyebut);
    printf("\nmakePecahan(7,2) -> %d/%d",makePecahan(7,2).pembilang,makePecahan(7,2).penyebut);
    printf("\nmakePecahan(6,20) -> %d/%d",makePecahan(6,20).pembilang,makePecahan(6,20).penyebut);
    printf("\nmakePecahan(8,10) -> %d/%d",makePecahan(8,10).pembilang,makePecahan(8,10).penyebut);

    printf("\n\nNomor 2 : mencetak stuct\n");
    printf("\nprintPecahan(makePecahan(4,9)) -> ");
    printPecahan(makePecahan(4,9));
    printf("printPecahan(makePecahan(7,2)) -> ");
    printPecahan(makePecahan(7,2));
    printf("printPecahan(makePecahan(6,20)) -> ");
    printPecahan(makePecahan(6,20));
    printf("printPecahan(makePecahan(8,10)) -> ");
    printPecahan(makePecahan(8,10));

    printf("\nNomor 3 : mencetak nilai pembilang pada struct\n");
    printf("\npembilang(makePecahan(4,9)) -> %d",pembilang(makePecahan(4,9)));
    printf("\npembilang(makePecahan(7,2)) -> %d",pembilang(makePecahan(7,2)));
    printf("\npembilang(makePecahan(6,20)) -> %d",pembilang(makePecahan(6,20)));
    printf("\npembilang(makePecahan(8,10)) -> %d",pembilang(makePecahan(8,10)));


    printf("\n\nNomor 4 : mencetak nilai penyebut pada struct\n");
    printf("\npenyebut(makePecahan(4,9)) -> %d",penyebut(makePecahan(4,9)));
    printf("\npenyebut(makePecahan(7,2)) -> %d",penyebut(makePecahan(7,2)));
    printf("\npenyebut(makePecahan(6,20)) -> %d",penyebut(makePecahan(6,20)));
    printf("\npenyebut(makePecahan(8,10)) -> %d",penyebut(makePecahan(8,10)));

    printf("\n\nNomor 5 : menjumlahkan 2 pecahan pada struct\n");
    printf("\naddPecahan(makePecahan(4,9),makePecahan(1,2)) -> %d/%d",addPecahan(makePecahan(4,9),makePecahan(1,2)).pembilang,addPecahan(makePecahan(4,9),makePecahan(1,2)).penyebut);
    printf("\naddPecahan(makePecahan(5,7),makePecahan(1,4)) -> %d/%d",addPecahan(makePecahan(5,7),makePecahan(1,4)).pembilang,addPecahan(makePecahan(5,7),makePecahan(1,4)).penyebut);
    printf("\naddPecahan(makePecahan(4,9),makePecahan(3,10)) -> %d/%d",addPecahan(makePecahan(4,9),makePecahan(3,10)).pembilang,addPecahan(makePecahan(4,9),makePecahan(3,10)).penyebut);
    printf("\naddPecahan(makePecahan(3,4),makePecahan(1,5)) -> %d/%d",addPecahan(makePecahan(3,4),makePecahan(1,5)).pembilang,addPecahan(makePecahan(3,4),makePecahan(1,5)).penyebut);

    printf("\n\nNomor 6 : mengurangkan 2 pecahan pada struct\n");
    printf("\nsubPecahan(makePecahan(4,9),makePecahan(1,5)) -> %d/%d",subPecahan(makePecahan(4,9),makePecahan(1,5)).pembilang,subPecahan(makePecahan(4,9),makePecahan(1,5)).penyebut);
    printf("\nsubPecahan(makePecahan(5,7),makePecahan(1,4)) -> %d/%d",subPecahan(makePecahan(5,7),makePecahan(1,4)).pembilang,subPecahan(makePecahan(5,7),makePecahan(1,4)).penyebut);
    printf("\nsubPecahan(makePecahan(4,9),makePecahan(3,10)) -> %d/%d",subPecahan(makePecahan(4,9),makePecahan(3,10)).pembilang,subPecahan(makePecahan(4,9),makePecahan(3,10)).penyebut);
    printf("\nsubPecahan(makePecahan(3,4),makePecahan(1,5)) -> %d/%d",subPecahan(makePecahan(3,4),makePecahan(1,5)).pembilang,subPecahan(makePecahan(3,4),makePecahan(1,5)).penyebut);

    printf("\n\nNomor 7 : mengkalikan 2 pecahan pada struct\n");
    printf("\nmulPecahan(makePecahan(4,9),makePecahan(1,2)) -> %d/%d",mulPecahan(makePecahan(4,9),makePecahan(1,2)).pembilang,mulPecahan(makePecahan(4,9),makePecahan(1,2)).penyebut);
    printf("\nmulPecahan(makePecahan(5,7),makePecahan(1,4)) -> %d/%d",mulPecahan(makePecahan(5,7),makePecahan(1,4)).pembilang,mulPecahan(makePecahan(5,7),makePecahan(1,4)).penyebut);
    printf("\nmulPecahan(makePecahan(4,9),makePecahan(3,10)) -> %d/%d",mulPecahan(makePecahan(4,9),makePecahan(3,10)).pembilang,mulPecahan(makePecahan(4,9),makePecahan(3,10)).penyebut);
    printf("\nmulPecahan(makePecahan(3,4),makePecahan(1,5)) -> %d/%d",mulPecahan(makePecahan(3,4),makePecahan(1,5)).pembilang,mulPecahan(makePecahan(3,4),makePecahan(1,5)).penyebut);

    printf("\n\nNomor 8 : membagi 2 pecahan pada struct\n");
    printf("\ndivPecahan(makePecahan(4,9),makePecahan(1,2)) -> %d/%d",mulPecahan(makePecahan(4,9),makePecahan(1,2)).pembilang,mulPecahan(makePecahan(4,9),makePecahan(1,2)).penyebut);
    printf("\ndivPecahan(makePecahan(5,7),makePecahan(1,4)) -> %d/%d",mulPecahan(makePecahan(5,7),makePecahan(1,4)).pembilang,mulPecahan(makePecahan(5,7),makePecahan(1,4)).penyebut);
    printf("\ndivPecahan(makePecahan(4,9),makePecahan(3,10)) -> %d/%d",mulPecahan(makePecahan(4,9),makePecahan(3,10)).pembilang,mulPecahan(makePecahan(4,9),makePecahan(3,10)).penyebut);
    printf("\ndivPecahan(makePecahan(3,4),makePecahan(1,5)) -> %d/%d",mulPecahan(makePecahan(3,4),makePecahan(1,5)).pembilang,mulPecahan(makePecahan(3,4),makePecahan(1,5)).penyebut);
    fflush(stdin);
    printf("\n\nNomor 9 : mengubah pecahan menjadi desimal\n");
    printf("\ndesimalPecahan(4,9) -> %f",desimalPecahan(makePecahan(4,9)));
    printf("\ndesimalPecahan(7,2) -> %f",desimalPecahan(makePecahan(7,2)));
    printf("\ndesimalPecahan(6,20) -> %f",desimalPecahan(makePecahan(6,20)));
    printf("\ndesimalPecahan(8,10) -> %f",desimalPecahan(makePecahan(8,10)));

    printf("\n\nNomor 10 : mengecek apakah 2 pecahan sebanding\n");
    printf("\nisEqual(makePecahan(4,9),makePecahan(8,18)) -> %d",isEqual(makePecahan(4,9),makePecahan(8,18)));
    printf("\nisEqual(makePecahan(7,2),makePecahan(14,4)) -> %d",isEqual(makePecahan(7,2),makePecahan(14,4)));
    printf("\nisEqual(makePecahan(4,9),makePecahan(6,20)) -> %d",isEqual(makePecahan(4,9),makePecahan(6,20)));
    printf("\nisEqual(makePecahan(7,2),makePecahan(8,10)) -> %d",isEqual(makePecahan(7,2),makePecahan(8,10)));

    printf("\n\nNomor 11 : mengecek apakah pecahan pertama lebih besar dari pecahan kedua\n");
    printf("\nisBigger(makePecahan(14,2),makePecahan(7,2)) -> %d",isBigger(makePecahan(14,2),makePecahan(7,2)));
    printf("\nisBigger(makePecahan(7,2),makePecahan(6,20)) -> %d",isBigger(makePecahan(7,2),makePecahan(6,20)));
    printf("\nisBigger(makePecahan(6,20),makePecahan(4,9)) -> %d",isBigger(makePecahan(6,20),makePecahan(4,9)));
    printf("\nisBigger(makePecahan(8,10,makePecahan(7,2)) -> %d",isBigger(makePecahan(8,10),makePecahan(7,2)));

    printf("\n\nNomor 12 : mengecek apakah pecahan pertama lebih kecil dari pecahan pertama\n");
    printf("\nisSmaller(makePecahan(4,9),makePecahan(7,2)) -> %d",isSmaller(makePecahan(4,9),makePecahan(7,2)));
    printf("\nisSmaller(makePecahan(7,2),makePecahan(6,20)) -> %d",isSmaller(makePecahan(7,2),makePecahan(6,20)));
    printf("\nisSmaller(makePecahan(4,9),makePecahan(6,20)) -> %d",isSmaller(makePecahan(4,9),makePecahan(6,20)));
    printf("\nisSmaller(makePecahan(8,10,makePecahan(7,2)) -> %d",isSmaller(makePecahan(8,10),makePecahan(7,2)));

}
