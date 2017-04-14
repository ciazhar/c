#include "struktur.h"

Mhs BacaData()
{
    Mhs data;
    printf("Masukan NIM : ");scanf("%d",&data.NIM);
    printf("Masukan NAMA: ");scanf("%s",&data.Nama);
    printf("Masukan IPK : ");scanf("%f",&data.IPK);
    printf("\n");
    return data;
}

void TulisData(Mhs d)
{
    printf("=========================\n");
    printf("NIM  :%d\n",d.NIM);
    printf("NAMA :%s\n",d.Nama);
    printf("IPK  :%.2f\n",d.IPK);
    printf("=========================\n");
}

void Sorting(DATA d,int n,int idx)
{
    int i,j,NIM,min;
    float nilai;
    char nama[maxnama];
    switch (idx)
    {
        case 0 :
        {
            for(i=0;i<n;i++)
            {
                min=i;
                for(j=i+1;j<n;j++)
                {
                    if((d[j].NIM) < (d[min].NIM))
                    {
                        min=j;

                        NIM = d[i].NIM;
                        d[i].NIM = d[min].NIM;
                        d[min].NIM = NIM;

                        strcpy(nama,d[i].Nama);
                        strcpy(d[i].Nama,d[min].Nama);
                        strcpy(d[min].Nama,nama);

                        nilai=d[i].IPK;
                        d[i].IPK=d[min].IPK;
                        d[min].IPK=nilai;
                    }
                }
            }
            break;
        }
        case 1 :
        {
            for(i=0;i<n;i++)
            {
                min=i;
                for(j=i+1;j<n;j++)
                {
                    if(strcmp(d[j].Nama,d[min].Nama)<0)
                    {
                        min=j;

                        NIM = d[i].NIM;
                        d[i].NIM = d[min].NIM;
                        d[min].NIM = NIM;

                        strcpy(nama,d[i].Nama);
                        strcpy(d[i].Nama,d[min].Nama);
                        strcpy(d[min].Nama,nama);

                        nilai=d[i].IPK;
                        d[i].IPK=d[min].IPK;
                        d[min].IPK=nilai;
                    }
                }
            }
            break;
         }
        case 2 :{
            for(i=0;i<n;i++)
            {
                min=i;
                for(j=i+1;j<n;j++)
                {
                    if(d[j].IPK < d[min].IPK)
                    {
                        min=j;

                        NIM = d[i].NIM;
                        d[i].NIM = d[min].NIM;
                        d[min].NIM = NIM;

                        strcpy(nama,d[i].Nama);
                        strcpy(d[i].Nama,d[min].Nama);
                        strcpy(d[min].Nama,nama);

                        nilai=d[i].IPK;
                        d[i].IPK=d[min].IPK;
                        d[min].IPK=nilai;
                    }
                }
            }
            break;
        }
        default : printf("Argumen k3-3 Salah");
    }
}

Mhs Searching1(DATA d,int n, int nim)
{
    int i,idx=-1;
    for(i=0;i<n;i++)
    {
        if(d[i].NIM==nim)
        {
             idx=i;
             break;
        }

    }
    if(idx>=0)
        return (d[idx]);
    else
        exit(1);
}

boolean Searching2(DATA d,int n,int nim)
{
    int i;
    boolean ketemu;
    ketemu=false;
    for(i=0;i<n;i++)
    {
        if(d[i].NIM==nim)
        {
            ketemu=true;
            break;
        }
    }
    return ketemu;
}
