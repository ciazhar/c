#include "pustaka.h"
int main()
{
    printf("\nNomor 1 : \n");
    printf("makeDate(12, 5, 1992); -> %d/%d/%d\n",makeDate(12, 5, 1992).tgl,makeDate(12, 5, 1992).bln,makeDate(12, 5, 1992).thn);
    printf("makeDate(6, 9, 1995)); -> %d/%d/%d\n",makeDate(6, 9, 1995).tgl,makeDate(6, 9, 1995).bln,makeDate(6, 9, 1995).thn);
    printf("makeDate(12, 10, 1993); -> %d/%d/%d\n",makeDate(12, 10, 1993).tgl,makeDate(12, 10, 1993).bln,makeDate(12, 10, 1993).thn);
    printf("makeDate(10, 5, 1991); -> %d/%d/%d\n",makeDate(10, 5, 1991).tgl,makeDate(10, 5, 1991).bln,makeDate(12, 5, 1991).thn);

    printf("\nNomor 2 : \n");
    makeMhs("A12345", "Andre", makeDate(5, 7, 1991), 3.8);
    printf("makeMhs(''A12345'', ''Andre'', makeDate(5, 7, 1991), 3.8);\n");
    makeMhs("A23456", "Anton", makeDate(7, 9, 1992), 3.2);
    printf("makeMhs(''A23456'', ''Anton'', makeDate(7, 9, 1992), 3.2);\n");
    makeMhs("A34567", "Budi", makeDate(9, 10, 1992), 3.5);
    printf("makeMhs(''A34567'', ''Budi'', makeDate(9, 10, 1992), 3.5);\n");
    makeMhs("A45678", "Linda", makeDate(10, 12, 1993), 3.1);
    printf("makeMhs(''A45678'', ''Linda'', makeDate(10, 12, 1993), 3.1);\n");

    printf("\nNomor 3 : \n");
    printDate(makeDate(5,7,1991));
    printDate(makeDate(7,9,1992));
    printDate(makeDate(9,10,1992));
    printDate(makeDate(10,12,1993));

    printf("\nNomor 4 : \n");
    mahasiswa dataMhs[3];
    dataMhs[0] = makeMhs("A12345", "Andre",makeDate(5, 7, 1991), 3.8);
    //strcpy(dataMhs[0].nama,"Andre");
    //strcpy(dataMhs[0].nim,"A12345");
    dataMhs[1] = makeMhs("A23456", "Anton",makeDate(7, 9, 1992), 3.2);
    //strcpy(dataMhs[1].nama,"Anton");
    //strcpy(dataMhs[1].nim,"A23456");
    dataMhs[2] = makeMhs("A34567", "Budi",makeDate(9, 10, 1992), 3.5);
    //strcpy(dataMhs[2].nama,"Budi");
    //strcpy(dataMhs[2].nim,"A34567");
    dataMhs[3] = makeMhs("A45678", "Linda",makeDate(10, 12, 1993), 3.1);        strcpy(dataMhs[0].nama,"Andre");
    //strcpy(dataMhs[3].nim,"A45678");
    //strcpy(dataMhs[3].nama,"Linda");
    listAllMhs(&dataMhs);

    printf("\nNomor 5 : \n");
    printf("listByIPK(&dataMhs,'=',3.2);\n");
    listByIPK(&dataMhs,'=',3.2);
    printf("listByIPK(&dataMhs,'>',3.4);\n");
    listByIPK(&dataMhs,'>',3.4);
    printf("listByIPK(&dataMhs,'<',3.5);\n");
    listByIPK(&dataMhs,'<',3.5);

    printf("\nNomor 6 : \n");
    mhsSortByName(&dataMhs);
    listAllMhs(&dataMhs);

    printf("\nNomor 7 : \n");
    mhsSortByIPK(&dataMhs);
    listAllMhs(&dataMhs);

    printf("\nNomor 8 : \n");
    char nim1[5];
    strcpy(nim1,"A34567");
    printf("findMhsByNIM(&dataMhs,&nim1); -> ");
    printf("%d-%d-%d | %f\n",findMhsByNIM(&dataMhs,&nim1).tgl_lahir.tgl,findMhsByNIM(&dataMhs,&nim1).tgl_lahir.bln,findMhsByNIM(&dataMhs,&nim1).tgl_lahir.thn,findMhsByNIM(&dataMhs,&nim1).ipk);
    char nim2[5];
    strcpy(nim2,"A54321");
    printf("findMhsByNIM(&dataMhs,&nim2); -> ");
    printf("",findMhsByNIM(&dataMhs,&nim2).tgl_lahir.tgl,findMhsByNIM(&dataMhs,&nim2).tgl_lahir.bln,findMhsByNIM(&dataMhs,&nim2).tgl_lahir.thn,findMhsByNIM(&dataMhs,&nim2).ipk);
    char nim3[5];
    strcpy(nim3,"A12345");
    printf("\nfindMhsByNIM(&dataMhs,&nim3); -> ");
    printf("%d-%d-%d | %f\n",findMhsByNIM(&dataMhs,&nim3).tgl_lahir.tgl,findMhsByNIM(&dataMhs,&nim3).tgl_lahir.bln,findMhsByNIM(&dataMhs,&nim3).tgl_lahir.thn,findMhsByNIM(&dataMhs,&nim3).ipk);

    return 0;
}
