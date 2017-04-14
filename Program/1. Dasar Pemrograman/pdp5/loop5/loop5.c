#include <stdio.h>
int main ()
{
    int i;
    printf("Program ini Akan berhenti Jika Anda Menginputkan Angka -99\n");
    for (i!=-99;;i++)
    {
        printf("Masukkan nilai Anda = ",i);scanf("%d",&i);
        if (i==-99)
        {
         break;
        }
    }
    return 0;
}
