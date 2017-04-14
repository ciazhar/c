#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *andi;
    int budi=5;

    printf("Alamat Andi : %p\n",&andi);
    printf("Alamat Budi : %p\n",&budi);
    printf("Keluarga Budi : %d\n",budi);

    andi=&budi;
    *andi=*andi+1;

    printf("Keluarga budi dari andi : %d\n",budi);

    return 0;
}
