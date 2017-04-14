//judul:modifikasi temperatur
//dibuat oleh nila nadia
//22 okt 2014
#include "stdio.h"
//kamus:
float C,F;
//deskripsi:
main()
{
    printf("-----------------------------------------------------------------");
    printf("\nCelcius \t      Fahrenheit \t      Keterangan");
    printf("\n-----------------------------------------------------------------\n");
        for(C=100;C>=-40;C--)
        {
            F=(C*9/5)+32;
                if(C==100)
                    {
                        printf("    %.0f\t     \t %0.1f\t\t Air Mendidih\n",C,F);
                    }

                else if(C==40)
                        {
                            printf("    %.0f\t     \t %0.1f\t\t Air Mandi Panas\n",C,F);
                        }
                     else if(C==37)
                            {
                                printf("    %.0f\t     \t %0.1f\t\t Temperatur Tubuh\n",C,F);
                            }
                         else if(C==30)
                                {
                                    printf("    %.0f\t     \t %0.1f\t\t Cuaca Pantai\n",C,F);
                                }
                              else if(C==21)
                                    {
                                        printf("    %.0f\t     \t %0.1f\t\t Temperatur Ruangan\n",C,F);
                                    }
                                   else if(C==10)
                                        {
                                            printf("    %.0f\t     \t %2.1f\t\t Hari Yang Dingin\n",C,F);
                                        }
                                        else if(C==0)
                                            {
                                                printf("    %.0f\t     \t %2.1f\t\t Titik Beku Air\n",C,F);
                                            }
                                             else if(C==-18)
                                                {
                                                    printf("    %.0f\t     \t %2.1f\t\t Cuaca Dingin Bersalju\n",C,F);
                                                }
                                                  else if(C==-40)
                                                        {
                                                            printf("    %.0f\t     \t %2.1f\t\t Cuaca Sangat Dingin Bersalju\n",C,F);
                                                        }
    }
    printf("-----------------------------------------------------------------");

    return 0;
}
