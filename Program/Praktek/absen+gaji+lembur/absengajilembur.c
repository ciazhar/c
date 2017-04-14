#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t\tPERUSAHAAN MEGA JAYA \n");
    printf("\t\t====================================\n\n");
    printf("Keterangan golongan jabatan :\n");
    printf("\n1. Manajer");
    printf("\n2. Pegawai\n\n");

    int absen,jam,alt,tempat,tanggal,lahir,proses,nm,nip,proses2,proses3,proses4,jabatan,gaji1,gaji2,gaji3,gaji4,gaji5,gaji6,gaji7,gaji8,gaji9,gaji10,gaji11,gaji12;
    int manajer=4000000,pegawai=2000000;
    printf("Masukan nama                   :");
    scanf("%s",&nm);
    printf("Masukan NIP                    :");
    scanf("%s",&nip);
    printf("TTL                            :");
    scanf("%s %s %s",&tempat,&tanggal,&lahir);
    printf("Alamat                         :");
    scanf("%s",&alt);
    printf("Masukan golongan jabatan       :");
    scanf("%d",&jabatan);
    printf ("masukan lama jam lembur kerja :");
    scanf  ("%d",&jam);
    printf("masukan absen tidak masuk      :");
    scanf("%d",&absen);
    printf("\n");

    //lembur//

    proses=manajer+(jam*30000);
    proses2=manajer+(10*30000);
    proses3=pegawai+(jam*30000);
    proses4=pegawai+(10*30000);

    //absen//


    gaji1=proses-100000;
    gaji2=proses2-100000;
    gaji3=proses3-100000;
    gaji4=proses4-100000;

    //absen//
    gaji5=proses-75000;
    gaji6=proses2-75000;
    gaji7=proses3-75000;
    gaji8=proses4-75000;

    gaji9=proses-50000;
    gaji10=proses2-50000;
    gaji11=proses3-50000;
    gaji12=proses4-50000;

    if (jabatan==1)
{
    if ((jam>=0)&&(jam<=10))
    {
        printf ("upah gaji dan lembur=%d\n",proses);
        if ((absen>=8)&&(absen<=10))
        {
          printf ("total gaji adalah :%d \n",gaji1);
        }
    else if ((absen>=5)&&(absen<=7))
             {
                  printf ("total gaji adalah :%d \n",gaji5);
             }

    else if ((absen>=1)&&(absen<=4))
             {
                  printf ("total gaji adalah :%d \n",gaji9);
             }
     else if ((absen>=11))
     {
         printf("tdk dapet gaji");
     }
else
             {
                  printf ("total gaji adalah :%d \n",proses);
             }
    }
    else if (jam>=11)
    {
        printf ("upah gaji dan lembur=%d\n",proses2);
        if ((absen>=8)&&(absen<=10))
        {
          printf ("total gaji adalah :%d \n",gaji2);
        }
    else if ((absen>=5)&&(absen<=7))
             {
                  printf ("total gaji adalah :%d \n",gaji6);
             }

    else if ((absen>=1)&&(absen<=4))
             {
                  printf ("total gaji adalah :%d \n",gaji10);
             }
                else if ((absen>=11))
     {
         printf("tdk dapet gaji");
     }
     else
             {
                  printf ("total gaji adalah :%d \n",proses2);
             }

    }
    else
    {
        printf("0");
    }
}
    else if (jabatan==2)
{
    if ((jam>=0)&&(jam<=10))
    {
        printf ("upah gaji dan lembur=%d\n",proses3);
        if ((absen>=8)&&(absen<=10))
        {
          printf ("total gaji adalah :%d \n",gaji3);
        }
    else if ((absen>=5)&&(absen<=7))
             {
                  printf ("total gaji adalah :%d \n",gaji7);
             }

    else if ((absen>=1)&&(absen<=4))
             {
                  printf ("total gaji adalah :%d \n",gaji11);
             }
              else if ((absen>=11))
     {
         printf("tdk dapet gaji");
     }
     else
             {
                  printf ("total gaji adalah :%d \n",proses3);
             }
    }
    else if (jam>=11)
    {
        printf ("upah gaji dan lembur=%d\n",proses4);
        if ((absen>=8)&&(absen<=10))
        {
          printf ("total gaji adalah :%d \n",gaji4);
        }
    else if ((absen>=5)&&(absen<=7))
             {
                  printf ("total gaji adalah :%d \n",gaji8);
             }

    else if ((absen>=1)&&(absen<=4))
             {
                  printf ("total gaji adalah :%d \n",gaji12);
             }
                else if ((absen>=11))
     {
         printf("tdk dapet gaji");
     }
     else
             {
                  printf ("total gaji adalah :%d \n",proses4);
             }
    }
    else
    {
        printf("0");
    }
}
    else
    {
        printf("salah input");
    }

    return 0;

}
