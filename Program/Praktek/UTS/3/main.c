#include <stdio.h>
#include <stdlib.h>

///MENCETAK BILANGAN
int main()
{
///KAMUS
    int i,n;
///ALGORITMA
    printf("Masukkan Angka Berhenti : ");scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d ",i);
    }
    return 0;
}
