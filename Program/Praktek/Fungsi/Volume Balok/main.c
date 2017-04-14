#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "header.h"

int main()
{
    int p,l,t;
    printf("input p: ");scanf("%d",&p);
    printf("input l: ");scanf("%d",&l);
    printf("input t: ");scanf("%d",&t);
    printf("volume : %d", volumebalok(p,l,t));
}
