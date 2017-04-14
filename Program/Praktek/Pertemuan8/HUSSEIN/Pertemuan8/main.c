#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int stop;

    printf("Nilai Berhenti : "); scanf("%d",&stop);
    i=1;
    do {printf("%d\n",i);i++;}

    while(i<=stop);

    return 0;
}
