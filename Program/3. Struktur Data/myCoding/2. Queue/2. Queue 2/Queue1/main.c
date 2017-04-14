#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()

{   Queue Q;
    int i,max,x,z;

    InputGenap(&Q);

    printf("\n");
    CetakQueue(Q);
    printf("\n\nHasil pertambahan Head dan tail JumlahGenap : %d", JumlahGenap(Q));


}
