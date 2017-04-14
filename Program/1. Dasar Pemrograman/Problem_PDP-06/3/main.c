#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jawab, i, lagi, Benar;
    for(i=1;i<11;i++){
        printf("%d + %d = ?", i, i);
        scanf("%d",&jawab);
        if(jawab==i+i) {
            printf("Benar!\n");}
        else {
            printf("Salah.\n");
            printf("Coba Lagi.\n");
            Benar = 0;
            /*nested for*/
            for(lagi=0;lagi<3&&!Benar;lagi++){
                printf("%d + %d = ?",i,i);
                scanf("%d",&jawab);
                if(jawab==i + i){
                    printf("Benar!\n");
                    Benar=1;
                }
                else {
                    printf("Jawabanya adalah %d.\n",i+i);}
            }
        }


    }
    return 0;
}
