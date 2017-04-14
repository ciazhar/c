#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()

    {
        int tebakan,x,pertanyaan,angka;

        ulang :
            printf("\n\nPermainan Tebak Angka 1-50\n");
            angka=rand()%50+1;
            for(x=1;x<=6;x++)
                {


                    if(x==6)
                        {
                            printf("\n\nanda gagal menebak angka %d",angka);
                            break;
                        }
                    printf("\n\ntebakan ke-%d, masukan angka tebakan anda [1-50]: ",x);
                    scanf("%d",&tebakan);


                     if(tebakan>=1&&tebakan<=50)
                        {
                            if(tebakan>angka)
                                {
                                    printf("Angka Anda Lebih Besar\n");


                                }
                            else if(tebakan<angka)
                                {
                                    printf("Angka Anda Lebih Kecil\n");

                                }
                            else
                                {
                                    printf("\nHebat Angka %d Berhasil Anda Tebak dalam %d kali tebakan\n",angka,x);
                                    break;
                                }
                        }

                    else
                        {
                            printf("anda salah memasukan angka");
                            break;
                        }


                }
            ulang1 :
            printf("apakah anda ingin bermain lagi ? [y/t]");
            pertanyaan=getche();
            if(pertanyaan=='Y'||pertanyaan=='y')
                {
                    goto ulang;
                }
            else if(pertanyaan=='t'||pertanyaan=='T')
                {
                    printf("Bye!!!");
                }
            else
                {
                    printf("\a\a\a\a\a\a\a");
                    printf("\n\nWARNING!!!\n\n");
                    printf("\n\nEROR!!!!\n\n");
                    printf("\n\nSALAH INPUT\n\n");
                    goto ulang1;
                }

        return 0;
    }
